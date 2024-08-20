#pragma once
#include "Reclass.hpp"

struct twoBytes
{
	BYTE	byte[2];

	bool	empty();
};
bool	twoBytes::empty()
{
	bool r = true;
	for (int i = 0; i < 2; ++i)
		if (this->byte[i] != 0)
		{
			r = false;
			break;
		}
	return r;
}

namespace rage
{
	struct scrNativeRegistration;
}

namespace Big
{
	class GameVariables
	{
	public:
		explicit GameVariables();
		~GameVariables() noexcept = default;
		GameVariables(GameVariables const&) = delete;
		GameVariables(GameVariables&&) = delete;
		GameVariables& operator=(GameVariables const&) = delete;
		GameVariables& operator=(GameVariables&&) = delete;

		void PostInit();

		std::uint32_t* m_GameState;
		std::uint32_t* m_FrameCount;
		HWND m_GameWindow;
		IDXGISwapChain* m_Swapchain;
		rage::scrNativeRegistration** m_NativeRegistrations;
		std::uint64_t** m_GlobalBase;
		uint64_t m_WorldPtr;
		char* m_GameBuild;

		char* p_viewport;
		CViewPort* m_viewPort;

		twoBytes* m_ownedExplosionBypass;
		void OwnedExplosionBypass(bool toggle);

		char* m_NativeRetn;
		char m_OriginalNativeRetn[2];

		void EnableNativePatch();
		void DisableNativePatch();
		void* GetNativeReturnAddress();
	};

	class GameFunctions
	{
	public:
		explicit GameFunctions();
		~GameFunctions() noexcept = default;
		GameFunctions(GameFunctions const&) = delete;
		GameFunctions(GameFunctions&&) = delete;
		GameFunctions& operator=(GameFunctions const&) = delete;
		GameFunctions& operator=(GameFunctions&&) = delete;

		using IsDlcPresent = bool(std::uint32_t hash);
		IsDlcPresent* m_IsDlcPresent;

		using WndProc = LRESULT(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
		WndProc* m_WndProc;

		PVOID m_ModelBypass;

		using GetEventData = bool(std::int32_t eventGroup, std::int32_t eventIndex, std::int64_t* args, std::uint32_t argCount);
		GetEventData* m_GetEventData;

		using GetLabelText = const char*(void* unk, const char* label);
		GetLabelText* m_GetLabelText;

		using AssignNewPhysicalIndexHandler = __int64(void* NetworkPlayerMgr, CNetGamePlayer* NetGamePlayer, uint8_t NewIndex);
		AssignNewPhysicalIndexHandler* m_AssignPhysicalIndexHandler;

		using BypassChat = int(__int64 ChatType, const char* Input, const char** Output);
		BypassChat* m_BypassChat;

		using TriggerScriptEvent = int(bool unk0, uint64_t* args, int32_t argCount, int32_t bitFlags);
		TriggerScriptEvent* m_Triggerscriptevent;

		using ModelMgr = __int64(__int64 a1, DWORD* a2);
		ModelMgr* m_ModelInfo;

		using GetNetPlayer = CNetGamePlayer * (int32_t index);
		GetNetPlayer* m_GetNetPlayer;

		using NetworkManager = void(rage::netEventMgr* event_manager, CNetGamePlayer* source_player, CNetGamePlayer* target_player, int event_index, int event_handled_bitset);
		NetworkManager* m_NetworkManager;

		using BlockPickups = bool(void* unk1, void* unk2, std::uint32_t model);
		BlockPickups* m_BlockPickups;

		using netObjCanApplyToObject = bool(netSyncTree* self, netObject* obj);
		netObjCanApplyToObject* m_CanApplyToObject;

		using ProcessNetObject = bool(uint64_t sync_tree, uint64_t net_obj);
		ProcessNetObject* m_ProcessNetObject;

		using IncrementStatEvent = int(__int64 neteventsclass, __int64 targetPlayer);
		IncrementStatEvent* m_IncrementStatEvent;

		
		using net_obj_ped = __int64(std::uint64_t ped);
		//net_obj_ped* obj_ped_node = (net_obj_ped*)(*(std::uintptr_t*)(ModuleBaseAdress + 0x1A7A628));
		//net_obj_ped* obj_ped_node = reinterpret_cast<net_obj_ped*>(*reinterpret_cast<std::uintptr_t*>(ModuleBaseAdress + 0x1A7A628));

		std::uint32_t get_offset(std::uint32_t off)
		{
			uintptr_t ModuleBaseAdress = (uintptr_t)GetModuleHandle(NULL);
			return *reinterpret_cast<std::uintptr_t*>(ModuleBaseAdress + off);
		}

		net_obj_ped* obj_ped_node = reinterpret_cast<net_obj_ped*>(get_offset(0x1A7A628));

		using game_server_presence_event = char(__int64 a1, __int64 a2);
		game_server_presence_event* m_game_server_presence_event;

		using game_award_presence_event = bool(__int64 a1, __int64 a2);
		game_award_presence_event* m_game_award_presence_event;

		using job_invite_presence_event = bool(__int64 a1, __int64 a2);
		job_invite_presence_event* m_job_invite_presence_event;

		using game_invite_presence_event = bool(__int64 a1, __int64 a2);
		game_invite_presence_event* m_game_invite_presence_event;

		using admin_invite_presence_event = char(__int64 a1, __int64 a2);
		admin_invite_presence_event* m_admin_invite_presence_event;

		using text_message_presence_event = bool(__int64 a1, __int64 a2);
		text_message_presence_event* m_text_message_presence_event;

		using text_message_presence_event2 = bool(__int64 a1, __int64 a2);
		text_message_presence_event2* m_text_message_presence_event2;

		using join_request_event = bool(__int64 a1, __int64 a2);
		join_request_event* m_join_request_event;

		using metric_check = bool(__int64 a1, __int64 a2);
		metric_check* m_metric_check;
	};

	inline std::unique_ptr<GameVariables> g_GameVariables;
	inline std::unique_ptr<GameFunctions> g_GameFunctions;
}
