#include "Game.hpp"
#include "Invoker.hpp"
#include "MemoryEdit.h"

void(*rage::scrNativeCallContext::SetVectorResults)(rage::scrNativeCallContext*) = nullptr;

namespace Big
{
	GameVariables::GameVariables():
		m_GameState(Signature("48 85 C9 74 4B 83 3D").Scan().Add(7).Rip().As<decltype(m_GameState)>()),
		m_FrameCount(Signature("F3 0F 10 0D ? ? ? ? 44 89 6B 08").Scan().Add(4).Rip().Sub(8).As<decltype(m_GameState)>()),
		m_GameWindow(FindWindowA("grcWindow", "Grand Theft Auto V")),
		m_Swapchain(Signature("48 8B 0D ? ? ? ? 48 8D 55 A0 48 8B 01").Scan().Add(3).Rip().As<decltype(m_Swapchain)&>()),
		m_NativeRegistrations(Signature("48 83 EC 20 48 8D 0D ? ? ? ? E8 ? ? ? ? 0F B7 15 ? ? ? ? 33 FF").Scan().Add(7).Rip().As<decltype(m_NativeRegistrations)>()),
		m_GlobalBase(Signature("4C 8D 4D 08 48 8D 15 ? ? ? ? 4C 8B C0").Scan().Add(7).Rip().As<decltype(m_GlobalBase)>()),
		m_NativeRetn(Signature("44 89 75 9F 49 8D 0C C1").Scan().Add(19).As<char*>())
	{
		std::copy_n(m_NativeRetn, 2, m_OriginalNativeRetn);

		auto sig = Signature("48 83 EC 60 48 8D 0D ? ? ? ? E8").Scan().Sub(17);
		m_GameBuild = sig.Add(265 + 3).Rip().As<decltype(m_GameBuild)>();

		char* c_location = nullptr;
		//World Pointer
		auto p_worldPtr = Memory::pattern("48 8B 05 ? ? ? ? 45 ? ? ? ? 48 8B 48 08 48 85 C9 74 07");
		c_location = p_worldPtr.count(1).get(0).get<char>(0);
		m_WorldPtr = reinterpret_cast<uint64_t>(c_location) + *reinterpret_cast<int*>(reinterpret_cast<uint64_t>(c_location) + 3) + 7;

		auto p_fixVector3Result = Memory::pattern("83 79 18 00 48 8B D1 74 4A FF 4A 18");
		auto void_location = p_fixVector3Result.count(1).get(0).get<void>(0);
		if (void_location != nullptr) rage::scrNativeCallContext::SetVectorResults = (void(*)(rage::scrNativeCallContext*))(void_location);

		m_ownedExplosionBypass = (twoBytes*)Memory::pattern("3B F8 40 0F 94 C7").count(1).get(0).get<char>(0);

		__int64 patternAddr = NULL;
		auto p_viewport = Signature("48 8B 15 ? ? ? ? 48 8D 2D ? ? ? ? 48 8B CD").Scan().As<char*>();
		patternAddr = NULL;
		patternAddr = reinterpret_cast<decltype(patternAddr)>(p_viewport);
		m_viewPort = *reinterpret_cast<CViewPort**>(patternAddr + *reinterpret_cast<int*>(patternAddr + 3) + 7);
	}

	void GameVariables::PostInit()
	{
	}

	void GameVariables::OwnedExplosionBypass(bool toggle)
	{
		constexpr twoBytes patched = { 0x39, 0xDB };
		constexpr twoBytes restore = { 0x3B, 0xF8 };
		if (g_GameVariables->m_ownedExplosionBypass == nullptr)
			return;
		*g_GameVariables->m_ownedExplosionBypass = toggle ? patched : restore;
	}

	void GameVariables::EnableNativePatch()
	{
		std::uint8_t data[2] = { (std::uint8_t)0xFF, (std::uint8_t)0x23 };
		std::copy(std::begin(data), std::end(data), (std::uint8_t*)m_NativeRetn);
	}
	void GameVariables::DisableNativePatch()
	{
		std::copy(std::begin(m_OriginalNativeRetn), std::end(m_OriginalNativeRetn), m_NativeRetn);
	}
	void* GameVariables::GetNativeReturnAddress()
	{
		return m_NativeRetn;
	}

	GameFunctions::GameFunctions():
		m_IsDlcPresent(Signature("84 C0 74 0D 8D 53 0C").Scan().Sub(63).As<decltype(m_IsDlcPresent)>()),
		m_WndProc(Signature("48 85 C0 74 07 33 C0 E9 43 08").Scan().Sub(0x3B).As<decltype(m_WndProc)>()),
		m_ModelBypass(Signature("48 8B C8 FF 52 30 84 C0 74 05 48").Scan().Add(8).As<decltype(m_ModelBypass)>()),
		m_GetEventData(Signature("48 85 C0 74 14 4C 8B 10").Scan().Sub(28).As<decltype(m_GetEventData)>()),
		m_GetLabelText(Signature("75 ? E8 ? ? ? ? 8B 0D ? ? ? ? 65 48 8B 04 25 ? ? ? ? BA ? ? ? ? 48 8B 04 C8 8B 0C 02 D1 E9").Scan().Sub(19).As<decltype(m_GetLabelText)>()),
		m_AssignPhysicalIndexHandler(Signature("48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57 48 83 EC 20 41 8A E8").Scan().As<decltype(m_AssignPhysicalIndexHandler)>()),
		m_BypassChat(Signature("E8 ? ? ? ? 83 F8 FF 75 B9").Scan().Add(1).Rip().As<decltype(m_BypassChat)>()),
		m_Triggerscriptevent(Signature("48 8B C4 48 89 58 08 48 89 68 10 48 89 70 18 48 89 78 20 41 56 48 81 EC ? ? ? ? 45 8B F0 41 8B F9").Scan().As<decltype(m_Triggerscriptevent)>()),
		m_ModelInfo(Signature("0F B7 05 ? ? ? ? 45 33 C9 4C 8B DA 66 85 C0 0F 84 ? ? ? ? 44 0F B7 C0 33 D2 8B C1 41 F7 F0 48 8B 05 ? ? ? ? 4C 8B 14 D0 EB 09 41 3B 0A 74 54").Scan().As<decltype(m_ModelInfo)>()),
		m_GetNetPlayer(Signature("48 83 EC 28 33 C0 38 05 ? ? ? ? 74 0A").Scan().As<decltype(m_GetNetPlayer)>()),
		m_NetworkManager(Signature("66 41 83 F9 ? 0F 83 ? ? ? ?").Scan().As<decltype(m_NetworkManager)>()),
		m_BlockPickups(Signature("49 8B 80 ? ? ? ? 48 85 C0 74 0C F6 80 ? ? ? ? ? 75 03 32 C0 C3").Scan().As<decltype(m_BlockPickups)>()),
		//m_CanApplyToObject(Signature("48 8B C4 48 89 58 08 48 89 68 10 48 89 70 18 48 89 78 20 41 56 48 83 EC 20 4C 8B F2 48 8B E9 BB ? ? ? ?").Scan().As<decltype(m_CanApplyToObject)>()),
		m_ProcessNetObject(Signature("48 8B C4 48 89 58 08 48 89 68 10 48 89 70 18 48 89 78 20 41 56 48 83 EC 20 4C 8B F2 48 8B E9 BB 01 00 00 00").Scan().As<decltype(m_ProcessNetObject)>()),
		m_IncrementStatEvent(Signature("48 89 5C 24 ? 48 89 74 24 ? 55 57 41 55 41 56 41 57 48 8B EC 48 83 EC 60 8B 79 30").Scan().As<decltype(m_IncrementStatEvent)>()),

		//testing stuff
		m_game_server_presence_event(Signature("48 89 5C 24 ? 57 48 83 EC ? 48 8B DA 48 8B F9 48 85 D2 0F 84 ? ? ? ? 4C 8D 41 ?").Scan().As<decltype(m_game_server_presence_event)>()),
		m_game_award_presence_event(Signature("48 89 5C 24 ? 57 48 83 EC ? 48 8B DA 4C 8D 41 ? 48 8B F9 48 8D 15 ? ? ? ? 48 8B CB E8 ? ? ? ? 84 C0 74 ? 4C 8D 47 ? 48 8D 15 ? ? ? ? 48 8B CB E8 ? ? ? ? 84 C0 74 ? 4C 8D 47 ?").Scan().As<decltype(m_game_award_presence_event)>()),
		m_job_invite_presence_event(Signature("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 83 64 24 ? ? 48 8B DA").Scan().As<decltype(m_job_invite_presence_event)>()),
		m_game_invite_presence_event(Signature("75 ? 48 8D 56 ? 48 8D 4F ? 41 B8 ? ? ? ? E8 ? ? ? ? 85 C0 75 ? B0 ? EB ? 32 C0 48 8B 5C 24 ? 48 8B 74 24 ? 48 83 C4 ? 5F C3 90 48 89 5C 24 ? 57 48 83 EC ? 48 8B D9 48 8D 4A ?").Scan().As<decltype(m_game_invite_presence_event)>()),
		m_admin_invite_presence_event(Signature("48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B FA 48 8B F1 48 8D 15 ? ? ? ?").Scan().As<decltype(m_admin_invite_presence_event)>()),
		m_text_message_presence_event(Signature("48 89 5C 24 ? 57 48 83 EC ? 48 8B DA 48 8B F9 4C 8D 41 ?").Scan().As<decltype(m_text_message_presence_event)>()),
		m_text_message_presence_event2(Signature("48 89 5C 24 ? 57 48 83 EC ? 83 64 24 ? ? 48 8B DA 4C 8D 41 ? 48 8B F9 48 8D 15 ? ? ? ? 41 B9 ? ? ? ?").Scan().As<decltype(m_text_message_presence_event2)>()),
		m_join_request_event(Signature("48 89 5C 24 ? 57 48 83 EC ? 48 8B DA 4C 8D 41 ? 48 8B F9 48 8D 15 ? ? ? ? 41 B9 ? ? ? ? 48 8B CB E8 ? ? ? ? 84 C0 74 ? 44 8A 47 ?").Scan().As<decltype(m_join_request_event)>()),
		m_metric_check(Signature("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B F2 4C 8D 41 ? 48 8B F9 48 8D 15 ? ? ? ? 48 8B CE E8 ? ? ? ? 48 8B CF").Scan().As<decltype(m_metric_check)>())
	{



		inline std::unique_ptr<GameVariables> g_GameVariables;
		inline std::unique_ptr<GameFunctions> g_GameFunctions;
	}
}
