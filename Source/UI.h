#pragma once
#include "types.h"
namespace Mod_Hub_Base::UserInterface
{
	enum class Font : std::int32_t
	{
		ChaletLondon = 0,
		HouseScript = 1,
		Monospace = 2,
		Wingdings = 3,
		ChaletComprimeCologne = 4,
		Pricedown = 7
	};

	enum class HeaderType : std::int32_t
	{
		Static = 0,
		Gradient = 1,
		Game_YTD = 2,
	
		YTD = 4,


	};

	struct Rectangle
	{
		Vector2 m_Center;
		Vector2 m_Size;

		bool IsInBounds(Vector2 point)
		{
			auto left = m_Center.x - (m_Size.x / 2.f);
			auto right = m_Center.x + (m_Size.x / 2.f);
			auto top = m_Center.y + (m_Size.y / 2.f);
			auto bottom = m_Center.y - (m_Size.y / 2.f);

			if (point.x > right || point.x < left)
				return false;
			if (point.y > top || point.y < bottom)
				return false;

			return true;
		}
	};

	class UIManager
	{
	public:
		explicit UIManager() = default;
		~UIManager() noexcept = default;
		UIManager(UIManager const&) = delete;
		UIManager(UIManager&&) = delete;
		UIManager& operator=(UIManager const&) = delete;
		UIManager& operator=(UIManager&&) = delete;

		template <typename SubmenuType, typename ...TArgs>
		void AddSubmenu(TArgs&&... args)
		{
			auto sub = std::make_unique<SubmenuType>(std::forward<TArgs>(args)...);
			if (m_SubmenuStack.empty())
			{
				m_SubmenuStack.push(sub.get());
			}

			m_AllSubmenus.push_back(std::move(sub));
		}

		void SwitchToSubmenu(std::uint32_t id)
		{
			for (auto&& sub : m_AllSubmenus)
			{
				if (sub->GetId() == id)
				{
					m_SubmenuStack.push(sub.get());
					return;
				}
			}
		}

		void OnTick();
	public:
		std::mutex m_Mutex;

		bool m_Opened = false;
		bool m_MouseLocked = false;
		float m_PosX = 0.8f;
		float m_PosY = 0.1f;
		float m_Width = 0.19f;
		std::size_t m_OptionsPerPage = 15;
		bool m_Sounds = true;
		bool m_Controllerinput = true;

		// Input
		std::int32_t m_OpenDelay = 200;
		std::int32_t m_BackDelay = 300;
		std::int32_t m_EnterDelay = 300;
		std::int32_t m_VerticalDelay = 120;
		std::int32_t m_HorizontalDelay = 120;

		// Header
		float m_HeaderHeight = 0.1f;
		bool m_HeaderText = true;
		bool DrawGlare = true;
		bool Rainbowmenu_titleBool = false;
		float m_HeaderTextSize = 0.95f;
		Font m_HeaderFont = Font::Pricedown;
		Color m_HeaderBackgroundColor{ 255, 255, 255, 205 };
		Color m_HeaderTextColor{ 255, 255, 255, 255 };
		HeaderType m_HeaderType = HeaderType::YTD;
		char* current_header;
		bool m_HeaderGradientTransparent = true;
		bool m_HeaderGradientFlip = false;
		float m_HeaderGradientStretch = 0.f;
		float m_HeaderGradientFiller = 0.f;
		Color m_HeaderGradientColorLeft{ 247, 15, 255, 255 };
		Color m_HeaderGradientColorRight{ 18, 214, 223, 205 };

		// Submenu bar
		float m_SubmenuBarHeight = 0.00f;
		float m_SubmenuBarTextSize = 0.00f;
		Font m_SubmenuBarFont = Font::ChaletLondon;
		float m_SubmenuBarPadding = 2.1f;
		Color m_SubmenuBarBackgroundColor{ 255,255,255, 0 };
		Color m_SubmenuBarTextColor{ 255, 255, 255, 255 };

		// Options
		

		float m_height = 0.f;

		float m_OptionHeight = 0.035f;
		float m_OptionTextSize = 0.35f;
		Font m_OptionFont = Font::ChaletComprimeCologne;
		float m_OptionPadding = 2.1f;
		Color m_OptionSelectedTextColor{ 255, 255, 255, 255 };
		Color m_OptionUnselectedTextColor{ 255, 255, 255, 255 };
		Color m_OptionSelectedBackgroundColor{ 255, 255, 255, 255 };
		Color m_OptionUnselectedBackgroundColor{ 255, 255, 255, 255 };
		Color m_OptionNOTHING{ 0, 0, 0, 0 };

		// Toggle / bool
		bool Toggle_RainbowBool = false;
		Color m_Toggle_On{ 255, 255, 255, 255 };
		Color m_Toggle_Off{ 255, 255, 255, 255 };


		// Footer
		float m_FooterHeight = 0.030f;
		float m_FooterSpriteSize = 0.030f;
		Color m_FooterBackgroundColor{ 255, 255, 255, 255 };
		Color m_FooterSpriteColor{ 181,181,181, 255 };


		bool isLeftScroller = false;
		bool DrawScroller = false;
		float ScrollerPadding = 0.01f;
		bool m_Toggled{ false };

		float infoX = 0.f;

		void Draw_Side_Scroll(AbstractSubmenu* sub);


		void DisplayInfoText(std::string text, RGBAF rgbaf, Vector2 position, float size, bool center, bool right);
		void PlayerInfo(std::string one, std::string two);
		void PlayerInfoText(std::string text, RGBAF rgbaf, Font font, Vector2 position, Vector2 size, bool center, bool right);
		void PlayerMultiInfo(std::string one, std::string two, std::string three, std::string four);
		void HostMigrationManager();
		void draw_globe(float x, float y, float width, float height);
		void GameInfo();
		Color m_OutlineColor{ 77, 77, 255, 255 };
		void conv360(float base, float min, float max);
		void HostMigrationText(std::string token);
		void PlayerBox(std::string name);




		float X_Info{};
		float Y_Info{};
		float X_GameInfo{ 0.96f };
		float Y_GameInfo{};

		float X_Notify{};
		float Y_Notify{};

		bool first = true;
		bool cooldown = false;
		bool negative = false;
		bool editing = false;

		float X_InfoFloat{};
		float Y_InfoFloat{};

		float X_HostMigration{};
		float Y_HostMigration{};



		// Description
		float m_DescriptionHeightPadding = 0.01f;
		float m_DescriptionHeight = 0.025f;
		float m_DescriptionTextSize = 0.35f;
		Font m_DescriptionFont = Font::ChaletComprimeCologne;
		Color m_DescriptionBackgroundColor{ 19, 19, 19, 165 };
		Color m_DescriptionTextColor{ 255, 255, 255, 255 };
		float m_DescriptionSpriteSize = 0.025f;
		float m_DescriptionPadding = 2.1f;
		Color m_DescriptionSpriteColor{ 255, 255, 255, 255 };
	private:
		bool m_OpenKeyPressed = false;
		bool m_BackKeyPressed = false;
		bool m_EnterKeyPressed = false;
		bool m_UpKeyPressed = false;
		bool m_DownKeyPressed = false;
		bool m_LeftKeyPressed = false;
		bool m_RightKeyPressed = false;
		void CheckForInput();
		void HandleInput();
		void ResetInput();

		float m_DrawBaseY{};
		void Rainbow_Title();
		void DrawHeader();

		void DrawBackGround();

		void DrawSubmenuBar(AbstractSubmenu* sub);
		void Toggle_Rainbow();
		void DrawOption(AbstractOption* opt, bool selected, AbstractSubmenu& sub, bool editableVersion);
		void DrawFooter();
		void DrawDescription();

		void DrawRect(float x, float y, float width, float height, Color color);
		void DrawSprite(const char* dict, const char* texture, float x, float y, float width, float height, Color color, float rotation);
		void DrawLeftText(const char* text, float x, float y, float size, Font font, Color color, bool outline, bool shadow);
		void DrawCenteredText(const char* text, float x, float y, float size, Font font, Color color, bool outline, bool shadow);
		void DrawRightText(const char* text, float x, float y, float size, Font font, Color color, bool outline, bool shadow);
		float GetTextHeight(Font font, float size);
		Vector2 GetSpriteScale(float size);

		bool IsMouseLocked();
		Rectangle GetMenuRect();
		Vector2 GetMousePos();

		std::vector<std::unique_ptr<AbstractSubmenu>> m_AllSubmenus;
		std::stack<AbstractSubmenu*, std::vector<AbstractSubmenu*>> m_SubmenuStack;
	};
}

namespace Mod_Hub_Base
{
	inline std::unique_ptr<UserInterface::UIManager> g_UiManager;
}
