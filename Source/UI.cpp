#include "stdafx.h"

namespace Mod_Hub_Base::UserInterface
{
	bool firstTick = false;
	float target = 0;
	float selectedTarget = 0;
	double current = 0;
	bool cooldown = false;
	bool negative = false;
	bool first = true;
	bool editing = false;
	float scrollCurrent = 0;
	float scrollTarget = 0;

	int currentOpacity;
	int targetOpacity;
	int currentSelected, fullAmount;
	bool showingNumInput, gettingNumInput;
	std::string properRightText = "";
	double opt_start = 0;
	double opt_end = 0;
	int minusOpacity = 0;
	double scroll_speed = 0.0625f;
	double lerp(double start, double end, double amount) {
		return start * (1 - amount) + end * amount;
	}
	void UIManager::OnTick()
	{
		if (!firstTick)
		{
			minusOpacity = 255;
			std::thread thr([&] {
				while (Mod_running)
				{
					{
						if (minusOpacity != 0 && GetTickCount() % 12 == 0)
						{
							minusOpacity--;
						}
					}
					{
						if (currentOpacity != targetOpacity) currentOpacity = lerp(currentOpacity, targetOpacity, scroll_speed * 2);
						if ((currentOpacity > targetOpacity - 0.0005) && (currentOpacity < targetOpacity + 0.0005))
						{
							currentOpacity = targetOpacity;
						}
						minusOpacity = currentOpacity;
					}
					{
						if (scrollCurrent != scrollTarget) scrollCurrent = lerp(scrollCurrent, scrollTarget, scroll_speed);
						if ((scrollCurrent > scrollTarget - 0.0005) && (scrollCurrent < scrollTarget + 0.0005))
						{
							scrollCurrent = scrollTarget;
						}
					}
					{
						if (current != selectedTarget) current = lerp(current, selectedTarget, scroll_speed);
						if ((current > selectedTarget - 0.0005) && (current < selectedTarget + 0.0005))
						{
							current = selectedTarget;
						}
					}
					{
						if (minusOpacity != targetOpacity) minusOpacity = lerp(minusOpacity, targetOpacity, 0.0025f);
						if ((minusOpacity > targetOpacity - 2) && (minusOpacity < targetOpacity + 2))
						{
							minusOpacity = targetOpacity;
						}
					}

					std::this_thread::sleep_for(2.5ms);
				}
				});
			thr.detach();
		}
		std::lock_guard lock(m_Mutex);
		firstTick = true;
		if (IsMouseLocked())
		{
			CONTROLS::DISABLE_ALL_CONTROL_ACTIONS(0);
			ShowCursor(true);
			//SetCursor(LoadCursorA(NULL, IDC_ARROW));

			if (GetMenuRect().IsInBounds(GetMousePos()))
			{
				Log::Msg("Kekkeke");
			}
		}

		if (g_UiManager->m_Opened && g_Settings.m_LockMouse)
		{
			CONTROLS::DISABLE_ALL_CONTROL_ACTIONS(0);
		}

		CheckForInput();
		HandleInput();

		if (m_Opened)
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 27, true); // Disable phone

			m_DrawBaseY = m_PosY;

			DrawHeader();
			DrawBackGround();
			if (!m_SubmenuStack.empty())
			{
				auto sub = m_SubmenuStack.top();
				sub->Reset();
				sub->Execute();

				DrawSubmenuBar(sub);
				if (sub->GetNumOptions() != 0)
				{
					std::size_t startPoint = 0;
					std::size_t endPoint = sub->GetNumOptions() > m_OptionsPerPage ? m_OptionsPerPage : sub->GetNumOptions();
					if (sub->GetNumOptions() > m_OptionsPerPage && sub->GetSelectedOption() >= m_OptionsPerPage)
					{
						startPoint = sub->GetSelectedOption() - m_OptionsPerPage + 1;
						endPoint = sub->GetSelectedOption() + 1;
					}
					float tmp_base = m_DrawBaseY;
					for (std::size_t i = startPoint, j = 0; i < endPoint; ++i, ++j)
					{
						float tmp_point = tmp_base + ((m_OptionHeight) / 2.f);
						if (i == startPoint) opt_start = tmp_point;
						if (i == endPoint - 1) opt_end = tmp_point;




						fullAmount = endPoint;
						tmp_base += m_OptionHeight;
					}
					for (std::size_t i = startPoint, j = 0; i < endPoint; ++i, ++j)
					{
						currentSelected = sub->GetSelectedOption();
						DrawOption(sub->GetOption(i), i == sub->GetSelectedOption(), *sub, true);
					}
				}
			}

			DrawFooter();
		}
	}

	void UIManager::CheckForInput()
	{
		ResetInput();

		m_OpenKeyPressed = IsKeyPressed(VK_F5);
		m_BackKeyPressed = IsKeyPressed(VK_BACK);
		m_EnterKeyPressed = IsKeyPressed(VK_RETURN);
		m_UpKeyPressed = IsKeyPressed(VK_UP);
		m_DownKeyPressed = IsKeyPressed(VK_DOWN);
		m_LeftKeyPressed = IsKeyPressed(VK_LEFT);
		m_RightKeyPressed = IsKeyPressed(VK_RIGHT);
	}
	/*
	else if (IsKeyPressed(VK_NUMPAD0) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendCancel) && Settings::controllerinput) {
						Settings::menuLevel > 0 ? MenuLevelHandler::BackMenu() : NULL;
						if (Settings::menuLevel > 0)
							PlaySoundFrontend_default("BACK");

						Settings::keyPressPreviousTick = GetTickCount();
					}
					else if (IsKeyPressed(VK_NUMPAD8) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendUp) && Settings::controllerinput) {
						Settings::currentOption > 1 ?
	*/
	void UIManager::HandleInput()
	{
		if (m_Opened && m_Controllerinput)
		{
			// Disable Controls
			/*UI::HIDE_HELP_TEXT_THIS_FRAME();
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);*/
			CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_NEXT_CAMERA, true);
			CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_CHARACTER_WHEEL, true);
			CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_MELEE_ATTACK_LIGHT, true);
			//CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_MELEE_ATTACK_HEAVY, true);
			CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_MULTIPLAYER_INFO, true);
			CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_PHONE, true);
			//CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_MELEE_ATTACK_ALTERNATE, true);
			CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_VEH_CIN_CAM, true);
			CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_MAP_POI, true);
			CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_PHONE, true);
			CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_VEH_RADIO_WHEEL, true);
			CONTROLS::DISABLE_CONTROL_ACTION(2, INPUT_VEH_HEADLIGHT, true);
		}
		static auto openTicker = GetTickCount();
		if (m_OpenKeyPressed && GetTickCount() - openTicker >= static_cast<std::uint32_t>(m_OpenDelay) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlScriptRB) && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneRight) && m_Controllerinput && GetTickCount() - openTicker >= static_cast<std::uint32_t>(m_OpenDelay))
		{
			openTicker = GetTickCount();
			m_Opened ^= true;

			if (m_Sounds)
				AUDIO::PLAY_SOUND_FRONTEND(-1, m_Opened ? "SELECT" : "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
		}

		static Timer backTimer(0ms);
		backTimer.SetDelay(std::chrono::milliseconds(m_BackDelay));
		if (m_Opened && m_BackKeyPressed && backTimer.Update() || m_Opened && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendCancel) && m_Controllerinput && backTimer.Update())
		{
			if (m_Sounds)
				AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);

			if (m_SubmenuStack.size() <= 1)
			{
				m_Opened = false;
			}
			else
			{
				m_SubmenuStack.pop();
			}
		}

		if (m_Opened && !m_SubmenuStack.empty())
		{
			auto sub = m_SubmenuStack.top();

			static Timer enterTimer(0ms);
			enterTimer.SetDelay(std::chrono::milliseconds(m_EnterDelay));
			if (m_EnterKeyPressed && sub->GetNumOptions() != 0 && enterTimer.Update() || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendAccept) && m_Controllerinput && sub->GetNumOptions() != 0 && enterTimer.Update())
			{
				if (m_Sounds)
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);

				if (auto opt = sub->GetOption(sub->GetSelectedOption()))
				{
					opt->HandleAction(OptionAction::EnterPress);
				}
			}

			static Timer upTimer(0ms);
			upTimer.SetDelay(std::chrono::milliseconds(m_VerticalDelay));
			if (m_UpKeyPressed && sub->GetNumOptions() != 0 && upTimer.Update() || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendUp) && m_Controllerinput && sub->GetNumOptions() != 0 && upTimer.Update())
			{
				if (m_Sounds)
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);

				sub->ScrollBackward();
			}

			static Timer downTimer(0ms);
			downTimer.SetDelay(std::chrono::milliseconds(m_VerticalDelay));
			if (m_DownKeyPressed && sub->GetNumOptions() != 0 && downTimer.Update() || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlFrontendDown) && m_Controllerinput && sub->GetNumOptions() != 0 && downTimer.Update())
			{
				if (m_Sounds)
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);

				sub->ScrollForward();
			}

			static Timer leftTimer(0ms);
			leftTimer.SetDelay(std::chrono::milliseconds(m_HorizontalDelay));
			if (m_LeftKeyPressed && sub->GetNumOptions() != 0 && leftTimer.Update() || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneLeft) && m_Controllerinput && sub->GetNumOptions() != 0 && leftTimer.Update())
			{
				if (m_Sounds)
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);

				if (auto opt = sub->GetOption(sub->GetSelectedOption()))
				{
					opt->HandleAction(OptionAction::LeftPress);
				}
			}

			static Timer rightTimer(0ms);
			rightTimer.SetDelay(std::chrono::milliseconds(m_HorizontalDelay));
			if (m_RightKeyPressed && sub->GetNumOptions() != 0 && rightTimer.Update() || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, ControlPhoneRight) && m_Controllerinput && sub->GetNumOptions() != 0 && rightTimer.Update())
			{
				if (m_Sounds)
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);

				if (auto opt = sub->GetOption(sub->GetSelectedOption()))
				{
					opt->HandleAction(OptionAction::RightPress);
				}
			}
		}
	}

	bool isLeftScroller = false;
	bool DrawScroller = false;
	float ScrollerPadding = 0.01f;
	bool m_Toggled{ false };

	float infoX = 0.f;


	void UIManager::Draw_Side_Scroll(AbstractSubmenu* sub) {
		//Get number of options


		float tNumOfOpts = sub->GetNumOptions();
		float percentage = 0.f;
		float selected = sub->GetSelectedOption();


		int visibleOpts = tNumOfOpts;
		std::ostringstream yeet;

		if (tNumOfOpts > m_OptionsPerPage) {
			percentage = ((selected + 1) / tNumOfOpts);
			visibleOpts = m_OptionsPerPage;
		}

		int draw_left = -1; //-1 is left
		if (!isLeftScroller) {
			draw_left = 1;
		}

	}



	void UIManager::ResetInput()
	{
		m_OpenKeyPressed = false;
		m_BackKeyPressed = false;
		m_EnterKeyPressed = false;
		m_UpKeyPressed = false;
		m_DownKeyPressed = false;
		m_LeftKeyPressed = false;
		m_RightKeyPressed = false;
	}

	Color m_HeaderTextColor_Rainbow{ 0, 255, 0, 255 };
	void UIManager::Rainbow_Title()
	{
		if (Rainbowmenu_titleBool)
		{
			if (m_HeaderTextColor_Rainbow.r > 0 && m_HeaderTextColor_Rainbow.b == 0)
			{
				m_HeaderTextColor_Rainbow.r--;
				m_HeaderTextColor_Rainbow.g++;
			}
			if (m_HeaderTextColor_Rainbow.g > 0 && m_HeaderTextColor_Rainbow.r == 0)
			{
				m_HeaderTextColor_Rainbow.g--;
				m_HeaderTextColor_Rainbow.b++;
			}
			if (m_HeaderTextColor_Rainbow.b > 0 && m_HeaderTextColor_Rainbow.g == 0)
			{
				m_HeaderTextColor_Rainbow.r++;
				m_HeaderTextColor_Rainbow.b--;
			}
			(m_HeaderTextColor_Rainbow.r, m_HeaderTextColor_Rainbow.g, m_HeaderTextColor_Rainbow.b);
		}
	}

	void UIManager::DrawHeader()
	{

		/*

		void DrawGlare1(float pX, float pY, float sX, float sY)
	{
		int gGlareHandle = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_MENU_GLARE");
		GRAPHICS::DRAW_SCALEFORM_MOVIE(gGlareHandle, pX, pY, sX, sY, 255, 255, 255, 255, false);
	}*/

		Rainbow_Title();
		switch (m_HeaderType)
		{
		case HeaderType::Static:
			DrawRect(
				
				m_PosX,
				m_DrawBaseY + (m_HeaderHeight / 2.f), m_Width,
				m_HeaderHeight,
				m_HeaderBackgroundColor);
			break;
		case HeaderType::Gradient:
			for (std::size_t i = 0; i < (m_HeaderGradientTransparent ? 1 : 20); ++i)
			{
				DrawSprite(
					"aircraft_dials",
					"aircraft_dials_g0",
					m_PosX - (m_HeaderGradientStretch / 2.f),
					m_DrawBaseY + (m_HeaderHeight / 2.f),
					m_Width + m_HeaderGradientStretch + m_HeaderGradientFiller,
					m_HeaderHeight,
					m_HeaderGradientColorRight,
					m_HeaderGradientFlip ? 0.f : 180.f);
				DrawSprite(
					"aircraft_dials",
					"aircraft_dials_g0",
					m_PosX + (m_HeaderGradientStretch / 2.f),
					m_DrawBaseY + (m_HeaderHeight / 2.f),
					m_Width + m_HeaderGradientStretch + m_HeaderGradientFiller,
					m_HeaderHeight,
					m_HeaderGradientColorLeft,
					m_HeaderGradientFlip ? 180.f : 0.f);
			}
			break;

		case HeaderType::Game_YTD:
			for (std::size_t i = 0; i < (m_HeaderGradientTransparent ? 1 : 20); ++i)
			{
				DrawSprite(
					"commonmenu",
					"interaction_bgd",
					m_PosX - (m_HeaderGradientStretch / 2.f),
					m_DrawBaseY + (m_HeaderHeight / 2.f),
					m_Width + m_HeaderGradientStretch + m_HeaderGradientFiller,
					m_HeaderHeight,
					m_HeaderGradientColorRight,
					m_HeaderGradientFlip ? 0.f : 180.f);
				DrawSprite(
					"commonmenu",
					"interaction_bgd",
					m_PosX + (m_HeaderGradientStretch / 2.f),
					m_DrawBaseY + (m_HeaderHeight / 2.f),
					m_Width + m_HeaderGradientStretch + m_HeaderGradientFiller,
					m_HeaderHeight,
					m_HeaderGradientColorLeft,
					m_HeaderGradientFlip ? 180.f : 0.f);
			}
			break;




		case HeaderType::YTD:
			const char* YTD_Stream_Texture = StreamTexture.c_str();// Streaming Texture = Texture File - .ytd so write same name but without .ytd
			const char* YTD_Texture_Name = TextureName.c_str();// Texture name, The name of the picture inside texture file(StreamTextureFile)/StreamTexture
			DrawSprite(
				YTD_Stream_Texture,
				YTD_Texture_Name,
				m_PosX + (m_HeaderGradientStretch / 2.f),
				m_DrawBaseY + (m_HeaderHeight / 2.f),
				m_Width + m_HeaderGradientStretch + m_HeaderGradientFiller,
				m_HeaderHeight,
				m_HeaderGradientColorLeft,
				m_HeaderGradientFlip ? 180.f : 0.f);

	

			break;

			break;
		}

		if (m_HeaderText)
		{
			if (Rainbowmenu_titleBool)
			{
				DrawCenteredText(
					Mod_Menu_Name,
					m_PosX,
					m_DrawBaseY + (m_HeaderHeight / 2.f) - (GetTextHeight(m_HeaderFont, m_HeaderTextSize) / 2.f),
					m_HeaderTextSize,
					m_HeaderFont,
					m_HeaderTextColor_Rainbow,
					false, true);
			}
			else
			{
				DrawCenteredText(
					Mod_Menu_Name,
					m_PosX,
					m_DrawBaseY + (m_HeaderHeight / 2.f) - (GetTextHeight(m_HeaderFont, m_HeaderTextSize) / 2.f),
					m_HeaderTextSize,
					m_HeaderFont,
					m_HeaderTextColor,
					false, true);
			}
		}

		m_DrawBaseY += m_HeaderHeight;
	}




	//------------------------------------------- 



	//void UIManager::HostMigrationManager()
	//{
	//	if (yesyes4) {
	//		if (m_PosX > 0.5f)
	//			X_HostMigration = m_PosX - 0.18f;
	//		else
	//			X_HostMigration = m_PosX + 0.18f;

	//		PlayerInfoText("Host Queue",
	//			{ 255, 255, 255, 255, 1 },
	//			Font::ChaletLondon,
	//			{ X_HostMigration - 0.0475f, m_PosY },
	//			GetSpriteScale(0.38f),
	//			0,
	//			0);

	//		GRAPHICS::DRAW_RECT2(X_HostMigration, m_PosY + 0.014f, 0.10f, 0.0255f, 0, 0, 0, 180);

	//		//main line
	//		GRAPHICS::DRAW_RECT2(
	//			X_HostMigration,
	//			m_PosY + 0.001f,
	//			0.10f, 0.001f,
	//			m_HeaderBackgroundColor.r, m_HeaderBackgroundColor.g, m_HeaderBackgroundColor.b, m_HeaderBackgroundColor.a);


	//		Y_HostMigration = m_PosY + 0.012f;
	//	}
	//}


	//void UIManager::HostMigrationText(std::string token)
	//{
	//	if (yesyes4) {
	//		PlayerInfoText(token,
	//			{ 255,255,255,255 },
	//			Font::ChaletLondon,
	//			{ X_HostMigration - 0.0475f, Y_HostMigration + 0.0125f },
	//			GetSpriteScale(0.25f),
	//			0,
	//			0);

	//		GRAPHICS::DRAW_RECT2(X_HostMigration, Y_HostMigration + 0.0265f, 0.10f, .0225f, 0, 0, 0, 180);

	//		Y_HostMigration += 0.0225f;
	//	}
	//}





	void UIManager::GameInfo()
	{
		float size = 0.25f;
		float spaceing = 0.02f;

		float FRAMES = GAMEPLAY::GET_FRAME_TIME();
		int FPS = (1.0f / FRAMES);
		char FPStext[60];
		snprintf(FPStext, sizeof(FPStext), "%d", FPS);

		int slots = 32 - NETWORK::NETWORK_GET_NUM_CONNECTED_PLAYERS();
		char freeslots[32];
		snprintf(freeslots, sizeof(freeslots), "%d", slots);

		Vector3 playerPos = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0);
		char _playercoords[32];
		snprintf(_playercoords, sizeof(_playercoords), "[ %d, %d, %d ]", (int)playerPos.x, (int)playerPos.y, (int)playerPos.z);

		float playerspeed = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
		char _playerspeed[32];
		snprintf(_playerspeed, sizeof(_playerspeed), "%d KM/H", playerspeed);

		if (g_Fps || g_FreeSlots || g_Position || g_Speed)
		{
			GRAPHICS::DRAW_RECT(X_GameInfo - 0.033f, Y_GameInfo + 0.002, .14, .003, 0, 255, 0, 255);
		}

		if (g_Fps)
		{
			DisplayInfoText(("FPS"),
				{ 255,255,255,255 },
				{ X_GameInfo - 0.102f, Y_GameInfo + 0.002f },
				size,
				0,
				0);

			UI::SET_TEXT_WRAP(0.f, X_GameInfo + 0.035f);

			DisplayInfoText(FPStext,
				{ 255,255,255,255 },
				{ X_GameInfo + 0.01f,
				Y_GameInfo + 0.002f },
				size,
				false,
				true);

			GRAPHICS::DRAW_RECT(X_GameInfo - 0.033f, Y_GameInfo + 0.013, .14, .02, 0, 0, 0, 160);
			Y_GameInfo += spaceing;
		}
		if (g_FreeSlots)
		{
			DisplayInfoText(("Free Slots"),
				{ 255,255,255,255 },
				{ X_GameInfo - 0.102f, Y_GameInfo + 0.002f },
				size,
				0,
				0);

			UI::SET_TEXT_WRAP(0.f, X_GameInfo + 0.035f);

			DisplayInfoText(freeslots,
				{ 255,255,255,255 },
				{ X_GameInfo + 0.01f,
				Y_GameInfo + 0.002f },
				size,
				false,
				true);

			GRAPHICS::DRAW_RECT(X_GameInfo - 0.033f, Y_GameInfo + 0.013, .14, .02, 0, 0, 0, 160);
			Y_GameInfo += spaceing;
		}
		if (g_Position)
		{
			DisplayInfoText(("Position"),
				{ 255,255,255,255 },
				{ X_GameInfo - 0.102f, Y_GameInfo + 0.002f },
				size,
				0,
				0);

			UI::SET_TEXT_WRAP(0.f, X_GameInfo + 0.035f);

			DisplayInfoText(_playercoords,
				{ 255,255,255,255 },
				{ X_GameInfo + 0.01f,
				Y_GameInfo + 0.002f },
				size,
				false,
				true);

			GRAPHICS::DRAW_RECT(X_GameInfo - 0.033f, Y_GameInfo + 0.013, .14, .02, 0, 0, 0, 160);
			Y_GameInfo += spaceing;
		}
		if (g_Speed)
		{
			DisplayInfoText(("Speed"),
				{ 255,255,255,255 },
				{ X_GameInfo - 0.102f, Y_GameInfo + 0.002f },
				size,
				0,
				0);

			UI::SET_TEXT_WRAP(0.f, X_GameInfo + 0.035f);

			DisplayInfoText(_playerspeed,
				{ 255,255,255,255 },
				{ X_GameInfo + 0.01f,
				Y_GameInfo + 0.002f },
				size,
				false,
				true);

			GRAPHICS::DRAW_RECT(X_GameInfo - 0.033f, Y_GameInfo + 0.013, .14, .02, 0, 0, 0, 160);
			Y_GameInfo += spaceing;
		}
		Y_GameInfo = 0.01;
	}












void UIManager::PlayerInfoText(std::string text, RGBAF rgbaf, Font font, Vector2 position, Vector2 size, bool center, bool right)
{
	HUD::SET_TEXT_RIGHT_JUSTIFY(right);
	HUD::SET_TEXT_CENTRE(center);
	HUD::SET_TEXT_COLOUR(rgbaf.r, rgbaf.g, rgbaf.b, rgbaf.a);
	HUD::SET_TEXT_FONT(static_cast<int>(font));
	HUD::SET_TEXT_SCALE(size.x, size.y);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT((char*)"STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text.data());
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(position.x, position.y, NULL);
}

void UIManager::PlayerBox(std::string name)
{
	if (m_PosX > 0.5f)
		X_InfoFloat = m_PosX - 0.25f;
	else
		X_InfoFloat = m_PosX + 0.25f;

	//name
	GRAPHICS::DRAW_RECT(
		X_InfoFloat,
		m_PosY + 0.014f,
		0.26f, 0.0275f,
		0, 0, 0, 180,
		0.f);

	//name line
	GRAPHICS::DRAW_RECT(
		X_InfoFloat,
		m_PosY,
		0.26f, 0.001f,
		m_HeaderBackgroundColor.r, m_HeaderBackgroundColor.g, m_HeaderBackgroundColor.b, m_HeaderBackgroundColor.);

	PlayerInfoText(name,
		{ 255, 255, 255, 255, 1 },
		Font::ChaletLondon,
		{ X_InfoFloat - 0.127f, m_PosY },
		GetSpriteScale(0.38f),
		0,
	0);

	//main line
	GRAPHICS::DRAW_RECT(
		X_InfoFloat,
		m_PosY + 0.035f,
		0.26f, 0.001f,
		m_HeaderBackgroundColor.r, m_HeaderBackgroundColor.g, m_HeaderBackgroundColor.b, m_HeaderBackgroundColor.a,
		


	Y_InfoFloat = m_PosY + 0.0492f;
}

void UIManager::PlayerInfo(std::string one, std::string two)
{
	//main
	GRAPHICS::DRAW_RECT(
		X_InfoFloat,
		Y_InfoFloat - 0.001f,
		0.26f, 0.025f,
		0, 0, 0, 180,
		0.f);

	PlayerInfoText(one,
		{ 255,255,255,255 },
	Font::ChaletLondon,
		{ X_InfoFloat - 0.1265f, Y_InfoFloat - 0.01f },
		GetSpriteScale(0.25f),
		0,
		0);

	HUD::SET_TEXT_WRAP(0.f, X_InfoFloat + 0.125f);

	PlayerInfoText(two,
		{ 255,255,255,255 },
		Font::ChaletLondon,
		{ X_InfoFloat,
		Y_InfoFloat - 0.01f },
	GetSpriteScale(0.25f),
		false,
		true);

	Y_InfoFloat += 0.025f;
}

void UIManager::PlayerMultiInfo(std::string one, std::string two, std::string three, std::string four)
{
	//main
	GRAPHICS::DRAW_RECT2(
		X_InfoFloat,
		Y_InfoFloat - 0.001f,
		0.26f, 0.025f,
		0, 0, 0, 180);

	PlayerInfoText(one,
		{ 255,255,255,255 },
		Font::ChaletLondon,
		{ X_InfoFloat - 0.1265f, Y_InfoFloat - 0.01f },
		GetSpriteScale(0.25f),
		0,
		0);

	HUD::SET_TEXT_WRAP(0.f, X_InfoFloat - 0.0045f);

	PlayerInfoText(two,
		{ 255,255,255,255 },
		Font::ChaletLondon,
		{ X_InfoFloat - 0.0045f,
		Y_InfoFloat - 0.01f },
		GetSpriteScale(0.25f),
		false,		true);
	
//Divider
	DrawRect(
		X_InfoFloat,
		Y_InfoFloat,
		0.00125f,
		0.015f,
		{ 255, 255, 255, 255 });
	PlayerInfoText(three,
		{ 255,255,255,255 },
		Font::ChaletLondon,
	{ X_InfoFloat + 0.005f,
		Y_InfoFloat - 0.01f },
		GetSpriteScale(0.25f),
		0,
		0);

	HUD::SET_TEXT_WRAP(0.f, X_InfoFloat + 0.125f);

	PlayerInfoText(four,
		{ 255,255,255,255 },
		Font::ChaletLondon,
		{ X_InfoFloat + 0.125f,
		Y_InfoFloat - 0.01f },
		GetSpriteScale(0.25f),
		0,
		1);

	Y_InfoFloat += 0.025f;
}




//------------------------------------------- 

void UIManager::DrawBackGround()
{
	auto sub = m_SubmenuStack.top();

	DrawSprite(
		"PI",
		"background",
		m_PosX,
		m_DrawBaseY + (m_height / 2.f) + m_OptionHeight - 0.0330f,
		m_Width,
		m_height,
		{ 255, 255, 255, 255 },
		0);


	if (sub->GetNumOptions() <= m_OptionsPerPage)
	{
		m_height = m_OptionHeight * sub->GetNumOptions();

	}
	else if (sub->GetNumOptions() > m_OptionsPerPage)
	{
		m_height = m_OptionHeight * m_OptionsPerPage;
	}

}



	void UIManager::DrawSubmenuBar(AbstractSubmenu* sub)
	{
		char leftText[64] = {};
		std::strncpy(&leftText[0], sub->GetName(), sizeof(leftText) - 1);
		std::transform(std::begin(leftText), std::end(leftText), std::begin(leftText), [](char c) { return static_cast<char>(c); });

		char rightText[32] = {};
		std::snprintf(rightText, sizeof(rightText) - 1, "%zu / %zu", sub->GetSelectedOption() + 1, sub->GetNumOptions());

		const char* submenubar = StreamTexture.c_str();// Streaming Texture = Texture File - .ytd so write same name but without .ytd
		const char* submenubar2 = submenubar1.c_str();// Texture name, The name of the picture inside texture file(StreamTextureFile)/StreamTexture
		DrawSprite(
			submenubar,
			submenubar2,
			m_PosX,
			m_DrawBaseY + (m_SubmenuBarHeight / 2.f),
			m_Width,
			m_SubmenuBarHeight,
			m_SubmenuBarBackgroundColor,
			m_HeaderGradientFlip ? 180.f : 0.f);
		DrawLeftText(
			&leftText[0],
			m_PosX - (m_Width / m_SubmenuBarPadding),
			m_DrawBaseY + (m_SubmenuBarHeight / 2.f) - (GetTextHeight(m_SubmenuBarFont, m_SubmenuBarTextSize) / 1.5f),
			m_SubmenuBarTextSize, m_SubmenuBarFont,
			m_SubmenuBarTextColor,
			false, true);
		DrawRightText(
			&rightText[0],
			m_PosX + (m_Width / m_SubmenuBarPadding),
			m_DrawBaseY + (m_SubmenuBarHeight / 2.f) - (GetTextHeight(m_SubmenuBarFont, m_SubmenuBarTextSize) / 1.5f),
			m_SubmenuBarTextSize, m_SubmenuBarFont,
			m_SubmenuBarTextColor,
			false, true);

		m_DrawBaseY += m_SubmenuBarHeight;
	}
	// Toggle / bool
	Color m_Toggle_On{ 0, 255, 0, 255 };

	void UIManager::Toggle_Rainbow()
	{
		if (Toggle_RainbowBool)
		{
			if (m_Toggle_On.r > 0 && m_Toggle_On.b == 0)
			{
				m_Toggle_On.r--;
				m_Toggle_On.g++;
			}
			if (m_Toggle_On.g > 0 && m_Toggle_On.r == 0)
			{
				m_Toggle_On.g--;
				m_Toggle_On.b++;
			}
			if (m_Toggle_On.b > 0 && m_Toggle_On.g == 0)
			{
				m_Toggle_On.r++;
				m_Toggle_On.b--;
			}
			(m_Toggle_On.r, m_Toggle_On.g, m_Toggle_On.b);
		}
	}

	void UIManager::DrawOption(AbstractOption* opt, bool selected, AbstractSubmenu& sub, bool editableVersion)
	{
		Toggle_Rainbow();
		double testTarget = 0;
		scrollTarget = lerp(opt_start, opt_end, (double)sub.GetSelectedOption() / ((double)sub.GetNumOptions() - 1));
		target = m_DrawBaseY + (m_OptionHeight / 2.f);
		if (selected) selectedTarget = m_DrawBaseY + (m_OptionHeight / 2.f);
		if (sub.GetNumOptions() == 1) scrollTarget = opt_start;

		const char* shouldText = "";
		int shouldDrawTick = 0;
		if ((!std::strcmp(opt->GetRightText(), "~r~") || !std::strcmp(opt->GetRightText(), "~g~")))
		{
			if ((!std::strcmp(opt->GetRightText(), "~r~"))) { shouldText = ""; shouldDrawTick = 1; }
			else { shouldText = ""; shouldDrawTick = 2; }
		}
		else
		{
			shouldText = opt->GetRightText();
		}

		if (selected)
		{
			const char* selected = StreamTexture.c_str();// Streaming Texture = Texture File - .ytd so write same name but without .ytd
			const char* selected1 = selected2.c_str();// Texture name, The name of the picture inside texture file(StreamTextureFile)/StreamTexture
			DrawSprite(
				selected,
				selected1,
				m_PosX,
				current,
				m_Width,
				m_OptionHeight,
				m_OptionSelectedBackgroundColor,
				m_HeaderGradientFlip ? 180.f : 0.f);
		}

		DrawLeftText(
			opt->GetLeftText(),
			m_PosX - (m_Width / m_OptionPadding),
			m_DrawBaseY + (m_OptionHeight / 2.f) - (GetTextHeight(m_OptionFont, m_OptionTextSize) / 1.5f),
			m_OptionTextSize,
			m_OptionFont,
			selected ? m_OptionSelectedTextColor : m_OptionUnselectedTextColor,
			false, false);
		DrawRightText(
			opt->GetRightText(),
			m_PosX + (m_Width / m_OptionPadding),
			m_DrawBaseY + (m_OptionHeight / 2.f) - (GetTextHeight(m_OptionFont, m_OptionTextSize) / 1.5f),
			m_OptionTextSize,
			m_OptionFont,
			selected ? m_OptionSelectedTextColor : m_OptionUnselectedTextColor,
			false, false);


		// Sidebar

		//if (opt->GetFlag(OptionFlag::Enterable))
		//{
		//	DrawRect(
		//		m_PosX + (m_Width / 2.06f),
		//		m_DrawBaseY + (m_OptionHeight / 2.05f),
		//		0.006f,
		//		m_OptionHeight,
		//		{ 0, 255, 0, 255 });


		//}




		if (shouldDrawTick == 1)
		{
			DrawSprite("commonmenu", "shop_box_blank", m_PosX + (m_Width / m_OptionPadding) - 0.01,
				m_DrawBaseY + (m_OptionHeight / 2.0f) - (GetTextHeight(m_OptionFont, m_OptionTextSize) / 1.9f) + 0.0125, m_OptionTextSize * 0.055,
				m_OptionTextSize * 0.10, m_Toggle_Off, 0);
		}
		else if (shouldDrawTick == 2)
		{
			DrawSprite("commonmenu", "shop_box_tick", m_PosX + (m_Width / m_OptionPadding) - 0.01,
				m_DrawBaseY + (m_OptionHeight / 2.0f) - (GetTextHeight(m_OptionFont, m_OptionTextSize) / 1.9f) + 0.0125, m_OptionTextSize * 0.055,
				m_OptionTextSize * 0.10, m_Toggle_On, 0);
		}

		m_DrawBaseY += m_OptionHeight;
	}




	/*
	
	*/

	void UIManager::DrawFooter()
	{
		const char* YTD_Stream = StreamTexture.c_str();// Streaming Texture = Texture File - .ytd so write same name but without .ytd
		const char* YTD_Texture = FooterName.c_str();// Texture name, The name of the picture inside texture file(StreamTextureFile)/StreamTexture
		DrawSprite(
			YTD_Stream,
			YTD_Texture,
			m_PosX,
			m_DrawBaseY + (m_FooterHeight / 2.f),
			m_Width,
			m_FooterHeight,
			m_FooterBackgroundColor,
			m_HeaderGradientFlip ? 0.f : 0.f);

		float size = m_FooterSpriteSize;
		float rotation = 0.f;
		const char* texture = "shop_arrows_upanddown";

		if (!m_SubmenuStack.empty())
		{
			auto sub = m_SubmenuStack.top();
			if (sub->GetSelectedOption() == 0)
			{
				rotation = 90.f;
				texture = "arrowright";
				size *= 0.8f;
			}
			else if (sub->GetSelectedOption() + 1 == sub->GetNumOptions())
			{
				rotation = 270.f;
				texture = "arrowright";
				size *= 0.8f;
			}
		}

		auto sizee = GetSpriteScale(size);

		DrawSprite(
			"commonmenu",
			texture,
			m_PosX,
			m_DrawBaseY + (m_FooterHeight / 2.f),
			sizee.x,
			sizee.y,
			m_FooterSpriteColor,
			rotation);

		m_DrawBaseY += m_FooterHeight;
	}

	void UIManager::DrawDescription()
	{
		const char* description{};

		if (!m_SubmenuStack.empty())
		{
			auto sub = m_SubmenuStack.top();
			if (sub->GetNumOptions())
			{
				if (auto opt = sub->GetOption(sub->GetSelectedOption()))
				{
					description = opt->GetDescription();
				}
			}
		}

		if (!description || !*description)
			return;

		m_DrawBaseY += m_DescriptionHeightPadding;

		DrawRect(
			m_PosX,
			m_DrawBaseY + (m_DescriptionHeight / 2.f),
			m_Width,
			m_DescriptionHeight,
			m_DescriptionBackgroundColor);

		auto spriteSize = GetSpriteScale(m_DescriptionSpriteSize);
		DrawSprite(
			"shared", "info_icon_32",
			m_PosX - (m_Width / m_DescriptionPadding) + (spriteSize.x / 2.f),
			m_DrawBaseY + (m_DescriptionHeight / 2.f),
			spriteSize.x,
			spriteSize.y,
			m_DescriptionSpriteColor,
			0.f
		);

		DrawLeftText(
			description,
			m_PosX - (m_Width / m_DescriptionPadding) + (spriteSize.x * 1.15f),
			m_DrawBaseY + (m_DescriptionHeight / 2.f) - (GetTextHeight(m_DescriptionFont, m_DescriptionTextSize) / 1.5f),
			m_DescriptionTextSize,
			m_DescriptionFont,
			m_DescriptionTextColor,
			false, false
		);

		m_DrawBaseY += m_DescriptionHeight;
	}

	void UIManager::DrawRect(float x, float y, float width, float height, Color color)
	{
		GRAPHICS::DRAW_RECT(x, y, width, height, color.r, color.g, color.b, color.a);
	}



	void UIManager::DrawSprite(const char* dict, const char* texture, float x, float y, float width, float height, Color color, float rotation)
	{
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(dict))
		{
			GRAPHICS::DRAW_SPRITE2(dict, texture, x, y, width, height, rotation, color.r, color.g, color.b, color.a);
		}
		else
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(dict, false);
		}
	}
	
	void UIManager::DrawLeftText(const char* text, float x, float y, float size, Font font, Color color, bool outline, bool shadow)
	{
		UI::SET_TEXT_SCALE(size, size);
		UI::SET_TEXT_FONT(static_cast<int>(font));
		UI::SET_TEXT_COLOUR(color.r, color.g, color.b, color.a);
		if (outline)
			UI::SET_TEXT_OUTLINE();
		if (shadow)
			UI::SET_TEXT_DROP_SHADOW();

		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(text);
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(x, y);
	}

	void UIManager::DrawCenteredText(const char* text, float x, float y, float size, Font font, Color color, bool outline, bool shadow)
	{
		UI::SET_TEXT_CENTRE(true);
		DrawLeftText(text, x, y, size, font, color, outline, shadow);
	}

	void UIManager::DrawRightText(const char* text, float x, float y, float size, Font font, Color color, bool outline, bool shadow)
	{
		UI::SET_TEXT_WRAP(0.f, x);
		UI::SET_TEXT_RIGHT_JUSTIFY(true);
		DrawLeftText(text, x, y, size, font, color, outline, shadow);
	}

	float UIManager::GetTextHeight(Font font, float size)
	{
		return UI::_GET_TEXT_SCALE_HEIGHT(size, static_cast<int>(font));
	}

	Vector2 UIManager::GetSpriteScale(float size)
	{
		int x;
		int y;
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&x, &y);

		return { (static_cast<float>(y) / static_cast<float>(x)) * size, size };
	}
	//INFO
	

	bool UIManager::IsMouseLocked()
	{
		return m_Opened && m_MouseLocked;
	}

	Rectangle UIManager::GetMenuRect()
	{
		float height = m_HeaderHeight;
		height += m_SubmenuBarHeight;

		if (!m_SubmenuStack.empty())
		{
			//height += m_OptionHeight * std::min(m_SubmenuStack.top()->GetNumOptions(), m_OptionsPerPage);
		}

		height += m_FooterHeight;

		return
		{
			{ m_PosX + (m_Width / 2.f), m_PosY + (height / 2.f) },
			{ m_Width, height }
		};
	}









	Vector2 UIManager::GetMousePos()
	{
		POINT point;
		GetCursorPos(&point);

		return Vector2{ static_cast<float>(point.x), static_cast<float>(point.y) };
	}
}
