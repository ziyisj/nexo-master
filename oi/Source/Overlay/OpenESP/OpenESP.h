#pragma once

#include <SFML/Graphics.hpp>

#include <SelbaWard/Line.hpp>
#include <SelbaWard/Spline.hpp>
#include <SelbaWard/ProgressBar.hpp>

#include <dwmapi.h>
#include <Common/Data.h>
#include "FPS.h"
#include <Utils/Throttler.h>
#include <Utils/Utils.h>
#include <Utils/I18N.h>
#include <Utils/HighResolutionTimer.h>
#include <Utils/ResourceManager.h>
#include "NewHealthBar.h"
#include <cstdint>
#include <variant>
#include <format>
#include <omp.h>
#include <set>
#include <vector>
#include "ArmorEffect.h"

#include <Hack/Radar.h>

#include <Hack/PhysXCollect.h>

namespace OpenESP
{
	struct ShaderSprite {
		sf::Sprite sprite;
		sf::RenderStates states;
	};

	using FDrawItems = std::variant<sf::Text, sf::RectangleShape, sw::Line, sf::Sprite, sf::CircleShape, sw::ProgressBar, sf::VertexArray>;

	inline std::vector<FDrawItems> RenderDrawItems;
	inline FPS OverlayFPS;
	inline sf::Font Font;

	inline Throttler OtherThrottlered;
	inline Throttler RankThrottlered;

	struct PlayerColor {
		sf::Color InfoColor;
		sf::Color SkeletonColor;
		sf::Color DefaultSkeletonColor;
		sf::Color TeamColor;
	};

	inline sf::Color GetColorFromName(const std::string& name) {
		// 使用字符串哈希来生成一个固定的种子
		std::size_t hash = std::hash<std::string>{}(name);

		// 使用哈希值生成HSV颜色空间的色相值（0-360）
		float hue = static_cast<float>(hash % 360);

		// 固定使用较高的饱和度和亮度以确保是亮色
		float saturation = 0.7f;  // 70%饱和度
		float value = 1.0f;       // 100%亮度

		// HSV转RGB
		float c = value * saturation;
		float x = c * (1 - std::abs(std::fmod(hue / 60.0f, 2) - 1));
		float m = value - c;

		float r, g, b;
		if (hue >= 0 && hue < 60) {
			r = c; g = x; b = 0;
		}
		else if (hue >= 60 && hue < 120) {
			r = x; g = c; b = 0;
		}
		else if (hue >= 120 && hue < 180) {
			r = 0; g = c; b = x;
		}
		else if (hue >= 180 && hue < 240) {
			r = 0; g = x; b = c;
		}
		else if (hue >= 240 && hue < 300) {
			r = x; g = 0; b = c;
		}
		else {
			r = c; g = 0; b = x;
		}

		// 转换到0-255范围
		return sf::Color(
			static_cast<sf::Uint8>((r + m) * 255),
			static_cast<sf::Uint8>((g + m) * 255),
			static_cast<sf::Uint8>((b + m) * 255)
		);
	}

	inline sf::Color FloatToSFColor(const float Color[4]) {
		return sf::Color(Color[0] * 255, Color[1] * 255, Color[2] * 255, Color[3] * 255);
	}

	inline sf::Color GetColorForNumber(int number) {
		if (number < 0 || number > 16)
		{
			return FloatToSFColor(GameData.Config.ESP.TeamColor[0]);
		}
		else
		{
			return FloatToSFColor(GameData.Config.ESP.TeamColor[number]);
		}
	}

	inline PlayerColor GetPlayerColor(const PlayerInfo& Player, const PlayerConfig& Config)
	{
		PlayerColor Color;
		Color.TeamColor = GetColorForNumber(Player.PlayerState.TeamId);
		Color.InfoColor = FloatToSFColor(Config.VisibleInfoColor);
		Color.SkeletonColor = FloatToSFColor(Config.VisibleSkeletonColor);
		Color.DefaultSkeletonColor = FloatToSFColor(Config.DefaultSkeletonColor);

		if (!Player.IsVisible)
		{
			Color.InfoColor = FloatToSFColor(Config.DefaultInfoColor);
			Color.SkeletonColor = FloatToSFColor(Config.DefaultSkeletonColor);
		}

		if (Player.AliveState == EPlayerAliveState::ImpendingDeath)
		{
			Color.InfoColor = FloatToSFColor(Config.ImpendingDeathInfoColor);
			if (Player.IsVisible) Color.SkeletonColor = FloatToSFColor(Config.ImpendingDeathSkeletonColor);
		}

		if (Player.IsAI || Player.IsBOSS)
		{
			Color.TeamColor = FloatToSFColor(Config.VisibleInfoColor);
		}

		return Color;
	}

	static std::vector<std::unique_ptr<sf::Shader>> g_shaders;

	inline sf::Shader* GetOutlineShader(const sf::Texture& Texture, float Thickness, const sf::Color& Color) {
		// 使用静态着色器，只在第一次创建
		static sf::Shader* cachedShader = nullptr;

		// 只在第一次调用时创建和编译着色器
		if (!cachedShader) {
			if (!sf::Shader::isAvailable()) {
				return nullptr;
			}

			cachedShader = new sf::Shader();

			const std::string FragmentShaderCode = R"(
				uniform sampler2D texture;
				uniform vec2 textureSize;
				uniform float outlineThickness;
				uniform vec4 outlineColor;

				float getAlpha(vec2 coord) {
					if(coord.x < 0.0 || coord.x > 1.0 || coord.y < 0.0 || coord.y > 1.0)
						return 0.0;
					return texture2D(texture, coord).a;
				}

				void main() {
					vec2 texCoord = gl_TexCoord[0].xy;
					vec4 pixel = texture2D(texture, texCoord);
            
					// 如果当前像素已经不透明，直接使用原始像素
					if (pixel.a >= 0.99) {
						gl_FragColor = pixel;
						return;
					}

					vec2 pixelSize = 1.0 / textureSize;
					float minDistance = outlineThickness;
					bool foundEdge = false;

					// 精确的边缘检测
					for (float y = -outlineThickness; y <= outlineThickness; y++) {
						for (float x = -outlineThickness; x <= outlineThickness; x++) {
							float distance = sqrt(x*x + y*y);
							if (distance > outlineThickness) continue;

							vec2 offset = vec2(x, y) * pixelSize;
							float alpha = getAlpha(texCoord + offset);

							if (alpha >= 0.99) {
								minDistance = min(minDistance, distance);
								foundEdge = true;
							}
						}
					}

					// 如果找到边缘，应用描边
					if (foundEdge) {
						// 使用更锐利的边缘过渡
						float outlineStrength = 1.0 - smoothstep(outlineThickness - 1.0, outlineThickness, minDistance);
						outlineStrength = pow(outlineStrength, 2.0); // 使边缘更加锐利

						// 混合原始像素和描边
						vec4 outlineResult = vec4(outlineColor.rgb, outlineColor.a * outlineStrength);
						gl_FragColor = mix(outlineResult, pixel, pixel.a);
					} else {
						gl_FragColor = pixel;
					}
				}
			)";

			if (!cachedShader->loadFromMemory(FragmentShaderCode, sf::Shader::Fragment)) {
				delete cachedShader;
				cachedShader = nullptr;
				return nullptr;
			}
		}

		// 只更新uniforms
		cachedShader->setUniform("texture", sf::Shader::CurrentTexture);
		cachedShader->setUniform("textureSize", sf::Vector2f(Texture.getSize()));
		cachedShader->setUniform("outlineThickness", Thickness);
		cachedShader->setUniform("outlineColor", sf::Glsl::Vec4(
			Color.r / 255.0f,
			Color.g / 255.0f,
			Color.b / 255.0f,
			Color.a / 255.0f
		));

		return cachedShader;
	}

	inline sf::FloatRect DrawString(
		sf::RenderWindow& Window,
		const std::wstring& infoText,
		sf::Vector2f pos,
		const sf::Color& fillColor,
		const unsigned int fontSize,
		const bool centerHorizontal = false,
		const bool centerVertical = false,
		const bool useRenderDrawItems = false,
		const bool bolder = false,
		const bool alignRight = false,        // 新增：是否右对齐
		const float maxWidth = 0.f)           // 新增：最大宽度，用于右对齐
	{
		// 使用静态text对象避免重复创建
		static thread_local sf::Text text;

		// 设置基本属性
		text.setFont(Font);
		text.setStyle(sf::Text::Regular);
		text.setLetterSpacing(1.2f);
		//if (GameData.Config.Overlay.FontBold) text.setStyle(sf::Text::Bold);
		text.setString(infoText);
		text.setCharacterSize(fontSize);
		text.setFillColor(fillColor);

		// 重置样式和描边
		//text.setStyle(GameData.Config.Overlay.FontBold ? sf::Text::Bold : sf::Text::Regular);

		// 描边设置
		if (GameData.Config.ESP.Stroke) {
			text.setOutlineThickness(1);
			text.setOutlineColor(FloatToSFColor(GameData.Config.ESP.OutlineColor));
		}
		else {
			text.setOutlineThickness(0);
		}

		// 获取边界并设置原点
		const sf::FloatRect textRect = text.getLocalBounds();

		text.setOrigin(
			(int)(alignRight ? textRect.left + textRect.width :      // 右对齐
				centerHorizontal ? textRect.left + textRect.width / 2.0f : 0.f),
			(int)(centerVertical ? textRect.top + textRect.height / 2.0f : 0.f)
		);

		// 如果是右对齐且提供了最大宽度，调整X坐标
		float adjustedX = pos.x;
		if (alignRight && maxWidth > 0.f) {
			adjustedX += maxWidth;
		}

		text.setPosition(sf::Vector2f((int)adjustedX, (int)pos.y));

		// 绘制或存储
		if (useRenderDrawItems) {
			RenderDrawItems.emplace_back(text);
		}
		else {
			Window.draw(text);
		}

		return textRect;
	}

	inline std::string FormatThreadInfo() {
		auto formatCount = [](uint64_t& count) -> uint64_t {
			if (count > 10000) {
				count = 0;  // 直接修改原变量
			}
			return count;
		};

		return std::format(
			"\n\n{}\n"
			"{}{}\n"
			"{}{}\n"
			"{}{}\n"
			"{}{}\n"
			"{}{}\n"
			"{}{}\n"
			"{}{}\n"
			"{}{}\n"
			"{}{}\n"
			"{}{}\n"
			"{}{}\n"
			"{}{}\n"
			"{}{}",
			XorStr("[Thread Stats]"),
			XorStr("Main="), formatCount(GameData.Global.Data.ThreadCount.Main),
			XorStr("Process="), formatCount(GameData.Global.Data.ThreadCount.Process),
			XorStr("KeyState="), formatCount(GameData.Global.Data.ThreadCount.KeyState),
			XorStr("Actor="), formatCount(GameData.Global.Data.ThreadCount.Actor),
			XorStr("Player="), formatCount(GameData.Global.Data.ThreadCount.Player),
			XorStr("AimBot="), formatCount(GameData.Global.Data.ThreadCount.AimBot),
			XorStr("Radar="), formatCount(GameData.Global.Data.ThreadCount.Radar),
			XorStr("PhysX="), formatCount(GameData.Global.Data.ThreadCount.PhysX),
			XorStr("CodedLock="), formatCount(GameData.Global.Data.ThreadCount.CodedLock),
			XorStr("Throw="), formatCount(GameData.Global.Data.ThreadCount.Throw),
			XorStr("Container="), formatCount(GameData.Global.Data.ThreadCount.Container),
			XorStr("Item="), formatCount(GameData.Global.Data.ThreadCount.Item),
			XorStr("Debug="), formatCount(GameData.Global.Data.ThreadCount.Debug)
		);
	}

	inline std::string GetDebugInfo()
	{
		std::string ThreadCount = FormatThreadInfo();

		std::vector<std::string> DebugInfo;
		DebugInfo.push_back(XorStr("\n\n[Debug]"));

		{
            DebugInfo.push_back(std::vformat(XorStr("\nProcess: PID={}, Base=0x{:0X}"), std::make_format_args(GameData.Process.PID, GameData.Process.Base)));
		}
			
		{
			DebugInfo.push_back(std::vformat(XorStr("\nPhysXBase: 0x{:0X}, Scene=0x{:0X}"), std::make_format_args(GameData.Process.PhysXBase, GameData.Physics.PxScene)));
		}

		{
			DebugInfo.push_back(std::vformat(XorStr("\nUWorld: 0x{:0X}"), std::make_format_args(GameData.Global.UWorld)));
		}

		{
			uint8_t Mode = (uint8_t)GameData.Global.Data.DFMGamePlayerMode;
            std::string LevelName = GameData.Global.Data.LevelName != "" ? GameData.Global.Data.LevelName.c_str() : XorStr("Unknown");
			DebugInfo.push_back(std::vformat(XorStr("\nGameState: 0x{:0X}, DFMGamePlayerMode={}, LevelName={}"), std::make_format_args(GameData.Global.GameState, Mode, LevelName)));
		}

		{
			DebugInfo.push_back(std::vformat(XorStr("\nGLocalPlayer: 0x{:0X}"), std::make_format_args(GameData.Global.GLocalPlayer)));
		}

		{
			DebugInfo.push_back(std::vformat(XorStr("\nPlayerController: 0x{:0X}, MyHUD=0x{:0X}"), std::make_format_args(GameData.Global.PlayerController, GameData.Global.MyHUD)));
		}

		{
			DebugInfo.push_back(std::vformat(XorStr("\nPlayerCameraManager: 0x{:0X}, ViewTarget=0x{:0X}"), std::make_format_args(GameData.Global.PlayerCameraManager, GameData.Global.AcknowledgedPawn)));
		}

		{
            DebugInfo.push_back(std::vformat(XorStr("\nCamera: FOV={}"), std::make_format_args(GameData.Global.Data.Camera.FOV)));
            DebugInfo.push_back(std::vformat(XorStr("\nCameraLocation: X={}, Y={}, Z={}"), std::make_format_args(GameData.Global.Data.Camera.Location.X, GameData.Global.Data.Camera.Location.Y, GameData.Global.Data.Camera.Location.Z)));
            DebugInfo.push_back(std::vformat(XorStr("\nCameraRotation: Pitch={}, Yaw={}, Roll={}"), std::make_format_args(GameData.Global.Data.Camera.Rotation.Pitch, GameData.Global.Data.Camera.Rotation.Yaw, GameData.Global.Data.Camera.Rotation.Roll)));
		}

		{
			size_t AllSize = GameData.Global.Data.Entitys.CacheActors.Size();
			size_t PlayersSize = GameData.Global.Data.Entitys.CachePlayers.Size();
			size_t NamesSize = GameData.Global.Data.Entitys.Infos.Size();
			size_t InfosByIdSize = GameData.Global.Data.Entitys.InfosById.Size();
			DebugInfo.push_back(std::vformat(XorStr("\nActors: Players={}, Names={}, InfosById={}, All={}"), std::make_format_args(PlayersSize, NamesSize, InfosByIdSize, AllSize)));
		}

		{
			std::string LocalPlayerName = GameData.Global.Data.LocalPlayerInfo.PlayerState.PlayerNamePrivate != "" ? GameData.Global.Data.LocalPlayerInfo.PlayerState.PlayerNamePrivate.c_str() : XorStr("Unknown");
			DebugInfo.push_back(std::vformat(XorStr("\nLocalPlayerInfo: Name={} (0x{:0X}), TeamId={}, Camp={}, Health={}"), std::make_format_args(LocalPlayerName, GameData.Global.Data.LocalPlayerInfo.Address, GameData.Global.Data.LocalPlayerInfo.PlayerState.TeamId, GameData.Global.Data.LocalPlayerInfo.PlayerState.Camp, GameData.Global.Data.LocalPlayerInfo.Health)));
		}

		{
			uint8_t WeaponType = (uint8_t)GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponType;
			DebugInfo.push_back(std::vformat(XorStr("\nLocalPlayerWeaponInfo: WeaponID={}, WeaponType={}, WeaponInstanceID={}, ClipAmmoCount={}"), std::make_format_args(GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponID, WeaponType, GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponInstanceID, GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponAmmoCount)));
		}

		{
			std::string TargetName = GameData.AimBot.TargetPlayerInfo.PlayerState.PlayerNamePrivate != "" ? GameData.AimBot.TargetPlayerInfo.PlayerState.PlayerNamePrivate.c_str() : XorStr("Unknown");
            DebugInfo.push_back(std::vformat(XorStr("\nAimBot: Target={} (0x{:0X}), Lock={}"), std::make_format_args(TargetName, GameData.AimBot.Target, GameData.AimBot.Lock)));
		}

		std::string Text = "";

		for (const auto& Info : DebugInfo)
		{
			Text += Info;
		}

		Text += ThreadCount;

		return Text;
	}

	inline void DrawNewFPS(sf::RenderWindow& Window)
	{
		auto GameScene = GameData.Process.GameState;
		std::string Scene = XorStr("Unknown");

		if (GameScene == FGameState::Finding) {
			Scene = XorStr("Finding");
			Sleep(6);
		}
		else if (GameScene == FGameState::InLobby) {
			Scene = XorStr("InLobby");
			Sleep(6);
		}
		else if (GameScene == FGameState::InGame) {
			Scene = XorStr("InGame");
		}

		auto Title = Utils::StringToWstring(
			std::format(
				"{} {}",
				Scene,
				(GameScene == FGameState::InGame) ? OverlayFPS.getFormattedFPS() : ""
			)
		);

		auto Text = Utils::StringToWstring(
			std::format(
				"{}{}{}{}{}{}{}{}", 
				GameData.Config.Overlay.ShowAccount ? std::format("\n{}", GameData.Global.bEncrypt ? (GameData.Decrypt.Key != 0 ? I18N::T(XorStr("Status: Decrypted"), true) : I18N::T(XorStr("Status: Encrypt"), true)) : I18N::T(XorStr("Status: Unencrypted"), true)) : "",
				GameData.Config.Overlay.ShowAimBotConfig ? std::format("\n{} {}", I18N::T(XorStr("Aim Config:"), true), GameData.Config.AimBot.ConfigIndex + 1) : "",
				GameData.Config.Overlay.ShowPlayerAlive ? std::format("\n{}: {}", I18N::T(XorStr("Alive Players"), true), GameData.Global.Data.NewAlivePlayers) : "",
				//std::format("\n{} {}", I18N::T(XorStr("Kill Players:"), true), GameData.Global.Data.LocalPlayerInfo.KillCount),
				GameData.Config.Recoil.ShowEnableType ? GameData.Config.Recoil.Enable ? std::format("\n{}: {}", I18N::T(XorStr("Recoil State"), true), I18N::T(XorStr("Enables"), true)) : std::format("\n{}: {}", I18N::T(XorStr("Recoil State"), true), I18N::T(XorStr("Disable"), true)) : "",
				GameData.Config.ESP.BattleMode ? std::format("\n{}", I18N::T(XorStr("Battle Modes"), true)) : "",
				GameData.Physics.Loading.load() ? std::format("\n{}", I18N::T(XorStr("Physics Scene Refreshing"), true)) : "",
				GameData.Decrypt.Loading ? std::format("\n{} ({:0X})", I18N::T(XorStr("Initializing Decryption"), true), GameData.Decrypt.Start) : "",
				GameData.Config.ESP.Debug ? GetDebugInfo() : ""
			)
		);

		auto InfoColor = FloatToSFColor(GameData.Config.ESP.InfoColor);
		auto InfoSize = GameData.Config.ESP.InfoFontSize - 2.f;
		float Size = InfoSize / 14.f;
		float bgWidth = (GameData.CurrentLanguage == Language::Chinese ? 160 : 170) * Size;
		float bgHeight = 40 * Size;
		float leftMargin = GameData.Config.ESP.InfoX;
		float topMargin = GameData.Config.ESP.InfoY;
		float padding = 10 * Size;

		auto Position = sf::Vector2f(leftMargin + padding, topMargin + padding);

		auto TextSize = DrawString(Window, Text, {-1000, -1000}, sf::Color::Transparent, InfoSize, false, false, true);
		bgHeight += TextSize.getSize().y;
		if (bgWidth < TextSize.getSize().x)
		{
			bgWidth += (TextSize.getSize().x - bgWidth) + 16 * Size;
		}

		auto bgColor = FloatToSFColor(GameData.Config.ESP.InfoBgColor);
		sf::RectangleShape bg(sf::Vector2f(bgWidth, bgHeight));
		bg.setPosition(leftMargin, topMargin);
		bg.setFillColor(bgColor);
		bg.setOutlineThickness(1.f);
		//bgColor.a = 220;
		bg.setOutlineColor(sf::Color(40, 40, 40));
		RenderDrawItems.emplace_back(bg);

		{
			sf::RectangleShape bg(sf::Vector2f(bgWidth + 2.f, 1.f * Size + 1.5f));
			bg.setPosition(leftMargin - 1.f, topMargin - 1.f);
			bg.setFillColor(FloatToSFColor(GameData.Config.ESP.InfoHeaderColor));
			RenderDrawItems.emplace_back(bg);
		}

		Position.y += 1 * Size;
		
		const auto* LogoPattern = ResourceManager::GetTextureInfo("Engine/Resource/Icon/Game.png");
		if (LogoPattern && LogoPattern->Sprite.getGlobalBounds().width > 0)
		{
			sf::Sprite bgSprite;
			bgSprite.setTexture(LogoPattern->Texture);

			/*float bgW = LogoPattern->Sprite.getGlobalBounds().width;
			float bgH = LogoPattern->Sprite.getGlobalBounds().height;*/
			float scaleX = 20.f / 200.f * Size;
			float scaleY = 20.f / 200.f * Size;

			bgSprite.setScale(scaleX, scaleY);
			bgSprite.setPosition(Position);
			bgSprite.setColor(InfoColor);
			RenderDrawItems.emplace_back(bgSprite);
		}

		{
			DrawString(Window, Title, { Position.x + 20.f * Size + 5.f * Size, Position.y + 1.f * Size }, InfoColor, InfoSize, false, false, true);
		}

		Position.y += 6.f * Size;

		/*{
			sf::RectangleShape bg(sf::Vector2f(bgWidth, bgHeight));
			bg.setPosition(leftMargin + padding, topMargin + padding);
			bg.setFillColor(sf::Color(24, 24, 24, 200));
			RenderDrawItems.emplace_back(bg);
		}*/

		InfoColor.a = 200.f;

		DrawString(Window, Text, Position, InfoColor, InfoSize, false, false, true);

		GameData.Config.Window.InfoWidth = bgWidth;
		GameData.Config.Window.InfoHeight = bgHeight;
	}

	inline void DrawFPS(sf::RenderWindow& Window)
	{
		if (GameData.Config.ESP.InfoType == 0)
		{
			DrawNewFPS(Window);
			return;
		}

		if (GameData.Config.ESP.InfoType == 2)
		{
			return;
		}

		auto GameScene = GameData.Process.GameState;
		std::string Scene = XorStr("Unknown");

		if (GameScene == FGameState::Finding) {
			Scene = XorStr("Finding");
			Sleep(6);
		}
		else if (GameScene == FGameState::InLobby) {
			Scene = XorStr("InLobby");
			Sleep(6);
		}
		else if (GameScene == FGameState::InGame) {
			Scene = XorStr("InGame");
		}

		auto TextPosition = sf::Vector2f(5, 21);
		auto Text = Utils::StringToWstring(
			std::format(
				"{} {}{}{}{}{}{}{}{}{}",
				Scene,
				GameScene == FGameState::InGame ? OverlayFPS.getFormattedFPS() : "", 
				GameData.Config.Overlay.ShowAccount ? std::format("\n{}", GameData.Global.bEncrypt ? (GameData.Decrypt.Key != 0 ? I18N::T(XorStr("Status: Decrypted"), true) : I18N::T(XorStr("Status: Encrypt"), true)) : I18N::T(XorStr("Status: Unencrypted"), true)) : "",
				GameData.Config.Overlay.ShowAimBotConfig ? std::format("\n{} {}", I18N::T(XorStr("Aim Config:"), true), GameData.Config.AimBot.ConfigIndex + 1) : "",
				GameData.Config.Overlay.ShowPlayerAlive ? std::format("\n{}: {}", I18N::T(XorStr("Alive Players"), true), GameData.Global.Data.NewAlivePlayers) : "",
				//std::format("\n{} {}", I18N::T(XorStr("Kill Players:"), true), GameData.Global.Data.LocalPlayerInfo.KillCount),
				GameData.Config.Recoil.ShowEnableType ? GameData.Config.Recoil.Enable ? std::format("\n{}: {}", I18N::T(XorStr("Recoil State"), true), I18N::T(XorStr("Enables"), true)) : std::format("\n{}: {}", I18N::T(XorStr("Recoil State"), true), I18N::T(XorStr("Disable"), true)) : "",
				GameData.Config.ESP.BattleMode ? std::format("\n{}", I18N::T(XorStr("Battle Modes"), true)) : "",
				GameData.Physics.Loading.load() ? std::format("\n{}", I18N::T(XorStr("Physics Scene Refreshing"), true)) : "",
				GameData.Decrypt.Loading ? std::format("\n{} ({:0X})", I18N::T(XorStr("Initializing Decryption"), true), GameData.Decrypt.Start) : "",
				GameData.Config.ESP.Debug ? GetDebugInfo() : ""
			)
		);

		auto InfoColor = FloatToSFColor(GameData.Config.ESP.InfoColor);
		auto InfoSize = GameData.Config.ESP.InfoFontSize;
		
		DrawString(Window, Text, TextPosition, InfoColor, InfoSize, false, false, true);
	}

	inline void DrawHealthBar(sf::RenderWindow& Window, DWORD Sign, float MaxHealth, float CurrentHealth, sf::Vector2f Pos, sf::Vector2f Size, sf::Color Color, bool Horizontal, bool ShowBackupHealth = true, float CornerRadius = 0)
	{
		static std::map<DWORD, NewHealthBar> HealthBarMap;
		if (!HealthBarMap.count(Sign))
		{
			HealthBarMap.insert({ Sign,NewHealthBar() });
		}
		if (HealthBarMap.count(Sign))
		{
			if (Horizontal)
                HealthBarMap[Sign].DrawHealthBar_Horizontal(Window, MaxHealth, CurrentHealth, Pos, Size, Color, ShowBackupHealth, CornerRadius);
			else
				HealthBarMap[Sign].DrawHealthBar_Vertical(Window, MaxHealth, CurrentHealth, Pos, Size, Color, ShowBackupHealth);
		}
	}

	inline void DrawPxActors(sf::RenderWindow& Window)
	{
		if (!GameData.Config.PhysX.DeBug)
		{
			return;
		}

		physx::PxRaycastBuffer HitBuffer;
		physx::PxHitFlags HitFlags = physx::PxHitFlag::eDEFAULT;//physx::PxHitFlag::ePOSITION | physx::PxHitFlag::eNORMAL | physx::PxHitFlag::eDISTANCE;
		physx::PxQueryFilterData FilterData;
		FilterData.flags |= physx::PxQueryFlag::eSTATIC;
		FilterData.flags |= physx::PxQueryFlag::eDYNAMIC;
		physx::PxQueryFilterCallback* FilterCall = NULL;

		auto Rotation = GameData.Global.Data.Camera.Rotation;
		Rotation.Pitch = -Rotation.Pitch;
		FVector ForwardDir = Rotation.Vector();
		auto Location = GameData.Global.Data.Camera.Location;
		Location.X += GameData.Physics.FWorldOriginLocation.X;
		Location.Y += GameData.Physics.FWorldOriginLocation.Y;
		Location.Z += GameData.Physics.FWorldOriginLocation.Z;

		physx::PxVec3 PStart = U2PVector(Location);
		physx::PxVec3 PDir = U2PVector(ForwardDir);

		if (!GameData.Physics.PhysX.mScene) return;

		std::shared_lock<std::shared_mutex> lock(GameData.Physics.Mutex);
		GameData.Physics.PhysX.mScene->lockRead();

		bool HitAnything = GameData.Physics.PhysX.mScene->raycast(
			PStart,
			PDir,
			1000000.0f,
			HitBuffer,
			HitFlags,
			FilterData
		);

		if (HitAnything && HitBuffer.hasBlock)
		{
			physx::PxRigidActor* HitActor = HitBuffer.block.actor;
            physx::PxShape* Shape = HitBuffer.block.shape; 
			if (HitActor && Shape)
			{
				auto color = HitActor->is<physx::PxRigidStatic>() ? sf::Color::White : sf::Color::Red;
				//uint32_t ShapeCount = HitActor->getNbShapes();
				//if (ShapeCount > 0)
				{
					/*std::vector<physx::PxShape*> Shapes(ShapeCount);
					HitActor->getShapes(Shapes.data(), ShapeCount);*/
					const auto ScreenLocation = VectorHelper::WorldToScreen({
						HitActor->getGlobalPose().p.x - GameData.Physics.FWorldOriginLocation.X,
						HitActor->getGlobalPose().p.y - GameData.Physics.FWorldOriginLocation.Y,
						HitActor->getGlobalPose().p.z - GameData.Physics.FWorldOriginLocation.Z
					});
					//for (auto& Shape : Shapes)
					{
						physx::PxTransform ShapeTransform = physx::PxShapeExt::getGlobalPose(*Shape, *HitActor);
						ShapeTransform.p.x -= GameData.Physics.FWorldOriginLocation.X;
						ShapeTransform.p.y -= GameData.Physics.FWorldOriginLocation.Y;
						ShapeTransform.p.z -= GameData.Physics.FWorldOriginLocation.Z;

						physx::PxGeometryHolder Geometry = Shape->getGeometry();

						//static uint64_t LastShape;
						//if (LastShape != (uint64_t)Shape)
						//{
      //                      for (int32 i = 0; i < 32; ++i)
      //                      {
      //                          if (Shape->getQueryFilterData().word0 & (1 << i))
      //                          {
      //                              std::cout << i << ", ";
      //                          }
      //                      }
      //                      std::cout << std::endl;
      //                      for (int32 i = 0; i < 32; ++i)
      //                      {
      //                          if (Shape->getQueryFilterData().word1 & (1 << i))
      //                          {
      //                              std::cout << i << ", ";
      //                          }
      //                      }
      //                      std::cout << std::endl;
      //                      Utils::Log(4, XorStr("%d, %d, %d, %d | %d, %d, %d, %d"), Shape->getQueryFilterData().word0, Shape->getQueryFilterData().word1, Shape->getQueryFilterData().word2, Shape->getQueryFilterData().word3, Shape->getSimulationFilterData().word0, Shape->getSimulationFilterData().word1, Shape->getSimulationFilterData().word2, Shape->getSimulationFilterData().word3);
      //                      LastShape = (uint64_t)Shape;
						//}

						if (Geometry.getType() == physx::PxGeometryType::eBOX)
                        {
                        	physx::PxBoxGeometry boxGeom = Geometry.box();
                        	physx::PxVec3 halfExtents = boxGeom.halfExtents;
                        
							// 计算Box的Hash
							{
								size_t hash = PhysXTypes::ComputeBoxHash(halfExtents);
								//Utils::Log(4, XorStr("Box Hash: 0x%llX"), hash);
							}
                        
                        	// 定义box的8个顶点（相对于box中心）
                        	physx::PxVec3 vertices[8] = {
                        		physx::PxVec3(-halfExtents.x, -halfExtents.y, -halfExtents.z),
                        		physx::PxVec3( halfExtents.x, -halfExtents.y, -halfExtents.z),
                        		physx::PxVec3( halfExtents.x,  halfExtents.y, -halfExtents.z),
                        		physx::PxVec3(-halfExtents.x,  halfExtents.y, -halfExtents.z),
                        		physx::PxVec3(-halfExtents.x, -halfExtents.y,  halfExtents.z),
                        		physx::PxVec3( halfExtents.x, -halfExtents.y,  halfExtents.z),
                        		physx::PxVec3( halfExtents.x,  halfExtents.y,  halfExtents.z),
                        		physx::PxVec3(-halfExtents.x,  halfExtents.y,  halfExtents.z)
                        	};
                        
                        	sf::VertexArray boxLines(sf::Lines);
                        
                        	// 定义12条边的索引对
                        	int edges[12][2] = {
                        		{0, 1}, {1, 2}, {2, 3}, {3, 0}, // 底面
                        		{4, 5}, {5, 6}, {6, 7}, {7, 4}, // 顶面
                        		{0, 4}, {1, 5}, {2, 6}, {3, 7}  // 竖边
                        	};
                        
                        	// 绘制12条边
                        	for (int i = 0; i < 12; i++)
                        	{
                        		int i0 = edges[i][0];
                        		int i1 = edges[i][1];
                        
                        		// 将顶点变换到世界坐标
                        		physx::PxVec3 v0 = ShapeTransform.transform(vertices[i0]);
                        		physx::PxVec3 v1 = ShapeTransform.transform(vertices[i1]);
                        
                        		FVector w0 = P2UVector(v0);
                        		FVector w1 = P2UVector(v1);
                        
                        		FVector2D s0 = VectorHelper::WorldToScreen(w0);
                        		FVector2D s1 = VectorHelper::WorldToScreen(w1);
                        
                        		sf::Vertex cv1(sf::Vector2f(s0.X, s0.Y), sf::Color::Yellow);
                                sf::Vertex cv2(sf::Vector2f(s1.X, s1.Y), sf::Color::Yellow);
                        		boxLines.append(cv1);
                        		boxLines.append(cv2);
                        	}
                        
                        	if (boxLines.getVertexCount() > 0)
                        	{
                        		RenderDrawItems.emplace_back(boxLines);
                        	}
						}

						if (Geometry.getType() == physx::PxGeometryType::eCONVEXMESH)
                        {
                            // Utils::Log(
							// 	4, 
							// 	"eCONVEXMESH %f %f %f | %f %f %f", 
							// 	ShapeTransform.p.x, 
							// 	ShapeTransform.p.y, 
							// 	ShapeTransform.p.z, 
							// 	GameData.Global.Data.Camera.Location.X, 
							// 	GameData.Global.Data.Camera.Location.Y, 
							// 	GameData.Global.Data.Camera.Location.Z
							// );

                        	
							physx::PxConvexMeshGeometry convexGeom = Geometry.convexMesh();
                        	physx::PxConvexMesh* convexMesh = convexGeom.convexMesh;

                        	physx::PxU32 nbVertices = convexMesh->getNbVertices();
                        	const physx::PxVec3* vertices = convexMesh->getVertices();
                        	physx::PxU32 nbPolygons = convexMesh->getNbPolygons();

                        	const physx::PxU8* indexBuffer = convexMesh->getIndexBuffer();

							// 计算ConvexMesh的Hash
							{
								// 转换顶点为vector
								std::vector<physx::PxVec3> verticesVec(vertices, vertices + nbVertices);
								
								// 收集所有索引数据
								std::vector<uint8_t> indicesVec;
								for (physx::PxU32 j = 0; j < nbPolygons; j++)
								{
									physx::PxHullPolygon polygon;
									if (convexMesh->getPolygonData(j, polygon))
									{
										const physx::PxU8* polyIndices = indexBuffer + polygon.mIndexBase;
										for (physx::PxU16 k = 0; k < polygon.mNbVerts; k++)
										{
											indicesVec.push_back(polyIndices[k]);
										}
									}
								}
								
								// 计算hash
                                size_t hash = PhysXTypes::ComputeConvexHash(verticesVec, indicesVec, nbPolygons);
								//Utils::Log(4, XorStr("Convex Hash: 0x%llX"), hash);
							}

                        	sf::VertexArray convexLines(sf::Lines);

                        	for (physx::PxU32 j = 0; j < nbPolygons; j++)
                        	{
                        		physx::PxHullPolygon polygon;
                        		if (convexMesh->getPolygonData(j, polygon))
                        		{
                        			const physx::PxU8* indices = indexBuffer + polygon.mIndexBase;

                        			for (physx::PxU16 k = 0; k < polygon.mNbVerts; k++)
                        			{
                        				physx::PxU8 i0 = indices[k];
                        				physx::PxU8 i1 = indices[(k + 1) % polygon.mNbVerts];

                        				physx::PxVec3 v0 = ShapeTransform.transform(convexGeom.scale.transform(vertices[i0]));
                        				physx::PxVec3 v1 = ShapeTransform.transform(convexGeom.scale.transform(vertices[i1]));

                                        FVector w0 = P2UVector(v0);
                                        FVector w1 = P2UVector(v1);

                                        FVector2D s0 = VectorHelper::WorldToScreen(w0);
                                        FVector2D s1 = VectorHelper::WorldToScreen(w1);

                                        sf::Vertex cv1(sf::Vector2f(s0.X, s0.Y), sf::Color::Green);
                                        sf::Vertex cv2(sf::Vector2f(s1.X, s1.Y), sf::Color::Green);
                                        convexLines.append(cv1);
                                        convexLines.append(cv2);
                        			}
                        		}
                        	}

                        	if (convexLines.getVertexCount() > 0)
                        	{
                        		RenderDrawItems.emplace_back(convexLines);
                        	}
                        }

						if (Geometry.getType() == physx::PxGeometryType::eTRIANGLEMESH)
						{
							physx::PxTriangleMeshGeometry MeshGeometry = Geometry.triangleMesh();
							const physx::PxMeshScale& MeshScale = MeshGeometry.scale;
							physx::PxTriangleMesh* Mesh = MeshGeometry.triangleMesh;
							physx::PxU32 NumTriangles = Mesh->getNbTriangles();
							physx::PxU32 NumVertices = Mesh->getNbVertices();
							const void* Triangles = Mesh->getTriangles();
							const physx::PxVec3* Vertices = Mesh->getVertices();
							sf::VertexArray Lines(sf::Lines);

							for (physx::PxU32 i = 0; i < NumTriangles; i++)
							{
								const physx::PxU16* Indices = reinterpret_cast<const physx::PxU16*>(Triangles) + i * 3;
								physx::PxVec3 V0 = ShapeTransform.transform(MeshScale.transform(Vertices[Indices[0]]));
								physx::PxVec3 V1 = ShapeTransform.transform(MeshScale.transform(Vertices[Indices[1]]));
								physx::PxVec3 V2 = ShapeTransform.transform(MeshScale.transform(Vertices[Indices[2]]));

								FVector W0 = P2UVector(V0);
								FVector W1 = P2UVector(V1);
								FVector W2 = P2UVector(V2);

								FVector2D S0 = VectorHelper::WorldToScreen(W0);
								FVector2D S1 = VectorHelper::WorldToScreen(W1);
								FVector2D S2 = VectorHelper::WorldToScreen(W2);

								// 添加第一条线的顶点
								sf::Vertex v1(sf::Vector2f(S0.X, S0.Y), color);
								sf::Vertex v2(sf::Vector2f(S1.X, S1.Y), color);
								Lines.append(v1);
								Lines.append(v2);

								// 添加第二条线的顶点
								sf::Vertex v3(sf::Vector2f(S1.X, S1.Y), color);
								sf::Vertex v4(sf::Vector2f(S2.X, S2.Y), color);
								Lines.append(v3);
								Lines.append(v4);

								// 添加第三条线的顶点
								sf::Vertex v5(sf::Vector2f(S2.X, S2.Y), color);
								sf::Vertex v6(sf::Vector2f(S0.X, S0.Y), color);
								Lines.append(v5);
								Lines.append(v6);
							}

							RenderDrawItems.emplace_back(Lines);

							//Utils::Log(1, "%d - %d | %f_%f_%f", (int)NumTriangles, (int)NumVertices, HitActor->getGlobalPose().p.x, HitActor->getGlobalPose().p.y, HitActor->getGlobalPose().p.z);

							//DrawString(Window, Utils::StringToWstring(std::format("{} - {} | {}_{}_{}", (int)NumTriangles, (int)NumVertices, Vertices[0].x, Vertices[0].y, Vertices[0].z)), { ScreenLocation.X, ScreenLocation.Y }, sf::Color::Red, 16, false, false, true);

							//if (GameData.Keyboard.IsKeyDown(VK_MBUTTON))
							//{
							//	Utils::Log(4, "0x%llX", GenerateMeshHash(NumTriangles, NumVertices, Vertices[0].x, Vertices[0].y, Vertices[0].z));
							//}
						}

						if (Geometry.getType() == physx::PxGeometryType::eHEIGHTFIELD)
						{
							physx::PxHeightFieldGeometry HeightFieldGeometry = Geometry.heightField();
							physx::PxHeightField* HeightField = HeightFieldGeometry.heightField;

							physx::PxU32 NumRows = HeightField->getNbRows();
							physx::PxU32 NumCols = HeightField->getNbColumns();
							physx::PxReal RowScale = HeightFieldGeometry.rowScale;
							physx::PxReal ColScale = HeightFieldGeometry.columnScale;
							physx::PxReal HeightScale = HeightFieldGeometry.heightScale;

							sf::VertexArray Lines(sf::Lines);

							for (physx::PxU32 row = 0; row < NumRows - 1; row++)
							{
								for (physx::PxU32 col = 0; col < NumCols - 1; col++)
								{
									physx::PxReal h00 = HeightField->getHeight(row, col) * HeightScale;
									physx::PxReal h01 = HeightField->getHeight(row, col + 1) * HeightScale;
									physx::PxReal h10 = HeightField->getHeight(row + 1, col) * HeightScale;
									physx::PxReal h11 = HeightField->getHeight(row + 1, col + 1) * HeightScale;

									// 交换了row和col的映射
									physx::PxVec3 v00(row * RowScale, h00, col * ColScale);
									physx::PxVec3 v01(row * RowScale, h01, (col + 1) * ColScale);
									physx::PxVec3 v10((row + 1) * RowScale, h10, col * ColScale);
									physx::PxVec3 v11((row + 1) * RowScale, h11, (col + 1) * ColScale);

									physx::PxVec3 worldV00 = ShapeTransform.transform(v00);
									physx::PxVec3 worldV01 = ShapeTransform.transform(v01);
									physx::PxVec3 worldV10 = ShapeTransform.transform(v10);
									physx::PxVec3 worldV11 = ShapeTransform.transform(v11);

									FVector w00 = P2UVector(worldV00);
									FVector w01 = P2UVector(worldV01);
									FVector w10 = P2UVector(worldV10);
									FVector w11 = P2UVector(worldV11);

									FVector2D s00 = VectorHelper::WorldToScreen(w00);
									FVector2D s01 = VectorHelper::WorldToScreen(w01);
									FVector2D s10 = VectorHelper::WorldToScreen(w10);
									FVector2D s11 = VectorHelper::WorldToScreen(w11);

									sf::Color gridColor = sf::Color::Cyan;

									Lines.append(sf::Vertex(sf::Vector2f(s00.X, s00.Y), gridColor));
									Lines.append(sf::Vertex(sf::Vector2f(s01.X, s01.Y), gridColor));
									Lines.append(sf::Vertex(sf::Vector2f(s00.X, s00.Y), gridColor));
									Lines.append(sf::Vertex(sf::Vector2f(s10.X, s10.Y), gridColor));
								}
							}

							RenderDrawItems.emplace_back(Lines);

							/*if (GameData.Keyboard.IsKeyDown(VK_MBUTTON))
							{
								Utils::Log(4, "HeightField: %dx%d, Scales: %.2f/%.2f/%.2f",
									NumRows, NumCols, RowScale, ColScale, HeightScale);
							}*/
						}


					}

				}
				//Utils::Log(1, "HitAnything: %p %d", HitActor, ShapeCount);
			}
		}

		GameData.Physics.PhysX.mScene->unlockRead();

		lock.unlock();

		{
			float GridSize = GameData.Physics.GridSize * 100.f; // 100m
			FVector GridOrigin = FVector(0, 0, 0);

			// 计算相机绝对位置
			FVector CameraAbsolutePos = GameData.Physics.FWorldOriginLocation + GameData.Global.Data.Camera.Location;

			// 计算当前网格索引（使用X和Y）
			int CurrentGridX = (int)floor(CameraAbsolutePos.X / GridSize);
			int CurrentGridY = (int)floor(CameraAbsolutePos.Y / GridSize);

			// 计算当前网格边界（使用X和Y）
			float GridMinX = CurrentGridX * GridSize;
			float GridMaxX = (CurrentGridX + 1) * GridSize;
			float GridMinY = CurrentGridY * GridSize;
			float GridMaxY = (CurrentGridY + 1) * GridSize;

			// 获取所有PhysX Actor
			std::shared_lock<std::shared_mutex> lock(GameData.Physics.Mutex);
			GameData.Physics.PhysX.mScene->lockRead();

			PxU32 NumActors = GameData.Physics.PhysX.mScene->getNbActors(PxActorTypeFlag::eRIGID_DYNAMIC | PxActorTypeFlag::eRIGID_STATIC);
			std::vector<PxActor*> PxSceneActors(NumActors);
			GameData.Physics.PhysX.mScene->getActors(PxActorTypeFlag::eRIGID_DYNAMIC | PxActorTypeFlag::eRIGID_STATIC, reinterpret_cast<PxActor**>(PxSceneActors.data()), NumActors);

			int ActorCount = 0;

			for (PxActor* actor : PxSceneActors) {
				if (!actor) continue;

				PxRigidActor* RigidActor = static_cast<PxRigidActor*>(actor);
				PxTransform actorTransform = RigidActor->getGlobalPose();
				FVector ActorRelativePos = FVector(actorTransform.p.x, actorTransform.p.y, actorTransform.p.z);

				// 储存的就是绝对位置
				FVector ActorAbsolutePos = ActorRelativePos;

				// 判断是否在当前网格范围内（使用X和Y，忽略Z轴高度）
				//if (ActorAbsolutePos.X >= GridMinX && ActorAbsolutePos.X < GridMaxX &&
				//	ActorAbsolutePos.Y >= GridMinY && ActorAbsolutePos.Y < GridMaxY) {  // 改为Y轴
				//GameData.Global.Data.Camera.Location.Distance(GameData.Physics.LastCameraLocation) / 100.0f >= GameData.Config.PhysX.ReDistance

				auto Location = FVector(ActorAbsolutePos.X - GameData.Physics.FWorldOriginLocation.X, ActorAbsolutePos.Y - GameData.Physics.FWorldOriginLocation.Y, ActorAbsolutePos.Z - GameData.Physics.FWorldOriginLocation.Z);
                if (GameData.Global.Data.Camera.Location.Distance(Location) / 100.0f <= GameData.Config.PhysX.ReDistance / 5.f)
                {
					ActorCount++;

					// 将Actor的3D位置转换为屏幕坐标
                    FVector2D ScreenPos = VectorHelper::WorldToScreen(Location);

					// 在屏幕上绘制Actor位置点
					sf::CircleShape actorPoint(3);
					actorPoint.setFillColor(sf::Color::Red);
					actorPoint.setPosition(ScreenPos.X - 3, ScreenPos.Y - 3);
					RenderDrawItems.emplace_back(actorPoint);

					/*if (GameData.Global.Data.Camera.Location.Distance(Location) / 100.0f < 2.f)
                    {
                        DrawString(Window, Utils::StringToWstring(std::format("{}, {}, {}", actorTransform.p.x, actorTransform.p.y, actorTransform.p.z)), {ScreenPos.X, ScreenPos.Y + 14.f}, sf::Color::Red, GameData.Config.ESP.KeyDoorFontSize, true, true, true);
                    }*/
				}
			}

			// Display grid information (using Y axis)
			char GridInfo[512];

			// 计算距离各边界的距离
			float DistToLeftEdge = CameraAbsolutePos.X - GridMinX;
			float DistToRightEdge = GridMaxX - CameraAbsolutePos.X;
			float DistToBottomEdge = CameraAbsolutePos.Y - GridMinY;
			float DistToTopEdge = GridMaxY - CameraAbsolutePos.Y;

			// 找到最近的边界距离
            //float MinDistanceToEdge = std::min({DistToLeftEdge, DistToRightEdge, DistToBottomEdge, DistToTopEdge});

			sprintf_s(GridInfo, "All: %d, ScopeActors: %d\nPercent: (%.1f/%.1f)\n",
				NumActors, ActorCount, GameData.Global.Data.Camera.Location.Distance(GameData.Physics.LastCameraLocation) / 100.0f, (float)GameData.Config.PhysX.ReDistance
			);

			sf::Text gridText;
			gridText.setFont(Font);
			gridText.setString(GridInfo);
			gridText.setCharacterSize(20);
            gridText.setFillColor(sf::Color::Green);
			gridText.setPosition(10, 10);
			gridText.setOutlineThickness(1);
			gridText.setOutlineColor(FloatToSFColor(GameData.Config.ESP.OutlineColor));
			RenderDrawItems.emplace_back(gridText);
			GameData.Physics.PhysX.mScene->unlockRead();
			lock.unlock();
		}
	}

	inline void DrawSkeleton(sf::RenderWindow& window, const bool& IsVisible,
		const std::unordered_map<int, FVector2D>& ScreenBones,
		const std::unordered_map<int, bool>& VisCheckBones,
		PlayerColor Color,
		const float& thickness, bool ShowHead = false, bool HideBody = false, bool FloatHead = true)
	{

		// 1. 预先创建并重用Line对象
		static sw::Line line;
		static bool isLineInitialized = false;
		if (!isLineInitialized) {
			line.setThickness(thickness);
			isLineInitialized = true;
		}

		// 2. 缓存常用值
		const FVector2D& neckpos = ScreenBones.at(EBoneIndex::Neck_01);
		const FVector2D& pelvispos = ScreenBones.at(EBoneIndex::Pelvis);
		const bool neckposVisCheck = VisCheckBones.at(EBoneIndex::Neck_01);
		const bool pelvisposVisCheck = VisCheckBones.at(EBoneIndex::Pelvis);

		const bool useVisCheck = GameData.Config.ESP.VisibleCheck;
		const bool simpleVisCheck = GameData.Config.ESP.VisCheckStyle == 0;
		const sf::Color invisibleColor = Color.DefaultSkeletonColor;

		if (ShowHead) {
			int radius = (ScreenBones.at(EBoneIndex::Head).Y - ScreenBones.at(EBoneIndex::ForeHead).Y);
			radius -= radius * 0.1f; // 减少20%半径
			sf::CircleShape Circle(radius);
			Circle.setFillColor(sf::Color::Transparent);
			Circle.setOutlineThickness(thickness); // 设置2px描边
			Circle.setOutlineColor(VisCheckBones.at(EBoneIndex::ForeHead) ? Color.SkeletonColor : invisibleColor); // 描边颜色
			Circle.setOrigin(radius, radius);
			Circle.setPointCount(50.f);
			Circle.setPosition(ScreenBones.at(EBoneIndex::ForeHead).X, ScreenBones.at(EBoneIndex::ForeHead).Y);
			window.draw(Circle);
		}

		if (HideBody) return;

		// 3. 优化绘制循环
		for (const auto& skeleton : SkeletonLists::Skeleton)
		{
			FVector2D previous(0, 0);
			bool isFirstBone = true;

			for (EBoneIndex bone : skeleton)
			{
				const FVector2D& current = (bone == EBoneIndex::Neck_01) ? neckpos :
					(bone == EBoneIndex::Pelvis) ? pelvispos :
					ScreenBones.at(bone);

				if (!isFirstBone &&
					previous.X != INFINITY && current.X != INFINITY)
				{
					bool VisCheck = simpleVisCheck ? IsVisible :
						(bone == EBoneIndex::Neck_01) ? neckposVisCheck :
						(bone == EBoneIndex::Pelvis) ? pelvisposVisCheck :
						VisCheckBones.at(bone);

					line.setColor((!VisCheck && useVisCheck) ? invisibleColor : Color.SkeletonColor);
					//line.setColor(skeletonUseColor);
					line.setPoints(
						sf::Vector2f(previous.X, previous.Y),
						sf::Vector2f(current.X, current.Y)
					);
					line.setThickness(thickness);
					window.draw(line);
				}
				else
				{
					isFirstBone = false;
				}
				previous = current;
			}
		}
	}

	inline ImVec4 Get2DBox(const std::unordered_map<int, FVector2D>& ScreenBones)
	{
		static constexpr float HEIGHT_SCALE = 1.09f;
		static constexpr float WIDTH_RATIO = 0.6f;
		static constexpr float Y_OFFSET_RATIO = 0.08f;
		static constexpr float HALF = 0.5f;

		const FVector2D& Head = ScreenBones.at(EBoneIndex::Head);
		const FVector2D& Root = ScreenBones.at(EBoneIndex::Root);

		const float height = (Root.Y - Head.Y) * HEIGHT_SCALE;
		const float width = height * WIDTH_RATIO;

		return ImVec4{
			Root.X - width * HALF,      // x
			Head.Y - height * Y_OFFSET_RATIO,  // y
			width,                      // width
			height                      // height
		};
	}

	inline float CalculateWidth(float distance, float minWidth = 22.0f, float maxWidth = 100.0f) {
		// 基本检查
		if (distance <= 3.0f) return maxWidth; // 距离为0则返回最大宽度

		// 定义两个关键点的距离
		float closeDistance = 10.0f;   // 近距离(接近最大宽度)
		float farDistance = 20.0f;    // 远距离(接近最小宽度)

		// 简单线性插值
		float t = (distance - closeDistance) / (farDistance - closeDistance);
		t = std::max(0.0f, std::min(1.0f, t)); // 限制t在0-1范围

		// 反转t，使得距离小时宽度大
		t = 1.0f - t;

		// 计算宽度
		float width = minWidth + t * (maxWidth - minWidth);

		return std::round(width);
	}

	static const sf::Color QualityColor[7] = {
		sf::Color(197, 197, 195),
		sf::Color(197, 197, 195),
		sf::Color(42, 202, 150),
		sf::Color(89, 160, 221),
		sf::Color(157, 115, 223),
		sf::Color(211, 136, 87),
		sf::Color(218, 87, 88)
	};

	static const sf::Color GetSafeQualityColor(int quality) {
		//return sf::Color::Red;
		// 确保quality在有效范围内（0-6）
		if (quality < 0 || quality >= 7) {
			// 如果超出范围，返回默认颜色（使用第一个颜色）
			return FloatToSFColor(GameData.Config.Item.QualityColor[0]);
		}
		return FloatToSFColor(GameData.Config.Item.QualityColor[quality]);
	}

	template<typename T>
	inline bool GetBoxItemsCanShow(const T& ItemInfo)
	{
		using ItemDataTableInfo = std::decay_t<decltype(ItemInfo.Items.begin()->second.front())>;

		struct ItemStat {
			const ItemDataTableInfo* data = nullptr;
			int count = 0;
		};

		std::unordered_map<uint64_t, ItemStat> itemMap;

		for (const auto& Item : ItemInfo.Items)
		{
			for (const auto& ItemData : Item.second)
			{
				int ItemIndex = -1;
				auto it = GameData.Config.Item.IDToIndex.find(ItemData.ItemID);
				if (it != GameData.Config.Item.IDToIndex.end()) {
					ItemIndex = it->second;
				}

				if (ItemIndex >= 0 && !GameData.Config.Item.Items[ItemIndex])
				{
					continue;
				}

				if (ItemIndex == -1 || (ItemIndex >= 0 && !GameData.Config.Item.ItemsForce[ItemIndex]))
				{
					if (GameData.Config.Item.EnablePriceFilter && (ItemData.InitialGuidePrice < GameData.Config.Item.PriceGreaterThan * 1000)) continue;
					if (GameData.Config.Item.EnableQualityFilter && (ItemData.Quality < GameData.Config.Item.QualityGreaterThan)) continue;
				}

				if (ItemData.InitialGuidePrice <= 0) continue;

				auto& stat = itemMap[ItemData.ItemID];
				stat.count++;
				if (!stat.data || ItemData.InitialGuidePrice > stat.data->InitialGuidePrice)
					stat.data = &ItemData;
			}
		}

		return itemMap.size() > 0;
	}

	inline void DrawDoors(sf::RenderWindow& Window)
	{
		if (GameData.Config.ESP.BattleMode && GameData.Config.ESP.HideKeyDoor) return;
		if (!GameData.Config.ESP.ShowKeyDoor) return;
		GameData.Global.Data.Entitys.DoorDatas.GetReadLock();
		const auto& Items = GameData.Global.Data.Entitys.DoorDatas.Map();
		for (const auto& pItem : *Items)
		{
			const auto& Item = pItem.second;
			const float Distance = GameData.Global.Data.Camera.Location.Distance(Item.Location) / 100.0f;

			if (Distance > GameData.Config.ESP.KeyDoorMaxDistance) continue;

			auto ScreenLocation = VectorHelper::WorldToScreen(Item.Location);
			const auto InScreen = VectorHelper::IsInScreen(ScreenLocation);
			if (!InScreen) continue;

			std::string Text = std::format("{} ({}M)", Item.Name != "" ? Item.Name : "Unk Key Door", (int)Distance);

			const auto SafeColor = GetSafeQualityColor(Item.Info.Quality);

			sf::FloatRect InfoSize = DrawString(Window, Utils::StringToWstring(Text), { ScreenLocation.X, ScreenLocation.Y }, SafeColor, GameData.Config.ESP.KeyDoorFontSize, true, true, true);
			ScreenLocation.Y += InfoSize.height / 2;
		}
		GameData.Global.Data.Entitys.DoorDatas.ReleaseReadLock();
	}

	template<typename T>
	inline void DrawBoxItems(sf::RenderWindow& Window, const T& ItemInfo, FVector2D& ScreenLocation, sf::FloatRect& HeadTextRect, bool IsBox = false)
	{
		float FontSize = GameData.Config.Container.BoxFontSize;
		FontSize -= 2.f;
		float Scale = FontSize / 14.f;
		float IconBoxSize = 28.f * Scale; // 图标显示区域的宽高

		// 计算标题左上角
		float titleLeftX = ScreenLocation.X - HeadTextRect.width / 2.f;
		float listStartX = titleLeftX;
		float listStartY = ScreenLocation.Y + HeadTextRect.height / 2.f;

		using ItemDataTableInfo = std::decay_t<decltype(ItemInfo.Items.begin()->second.front())>;

		// 1. 统计每种ItemID的数量和最大价格的那条数据
		struct ItemStat {
			const ItemDataTableInfo* data = nullptr;
			int count = 0;
		};
		std::unordered_map<uint64_t, ItemStat> itemMap; // 假设ItemID是uint64_t

		for (const auto& Item : ItemInfo.Items)
		{
			for (const auto& ItemData : Item.second)
			{
				int ItemIndex = -1;
				auto it = GameData.Config.Item.IDToIndex.find(ItemData.ItemID);
				if (it != GameData.Config.Item.IDToIndex.end()) {
					ItemIndex = it->second;
				}

				if (ItemIndex >= 0 && !GameData.Config.Item.Items[ItemIndex])
				{
					continue;
				}

				if (ItemIndex == -1 || (ItemIndex >= 0 && !GameData.Config.Item.ItemsForce[ItemIndex]))
				{
					if (GameData.Config.Item.EnablePriceFilter && (ItemData.InitialGuidePrice < GameData.Config.Item.PriceGreaterThan * 1000)) continue;
					if (GameData.Config.Item.EnableQualityFilter && (ItemData.Quality < GameData.Config.Item.QualityGreaterThan)) continue;
				}

				if (ItemData.InitialGuidePrice <= 0) continue;

				auto& stat = itemMap[ItemData.ItemID];
				stat.count++;
				if (!stat.data || ItemData.InitialGuidePrice > stat.data->InitialGuidePrice)
					stat.data = &ItemData;
			}
		}

		// 2. 收集到vector并排序
		std::vector<const ItemStat*> allItems;
		for (const auto& kv : itemMap)
		{
			allItems.push_back(&kv.second);
		}
		std::sort(allItems.begin(), allItems.end(), [](const ItemStat* a, const ItemStat* b) {
			return a->data->InitialGuidePrice > b->data->InitialGuidePrice;
		});

		// 3. 绘制
		int Index = 0;
		for (const auto* stat : allItems)
		{
			const auto* ItemData = stat->data;
			int count = stat->count;

			std::string Text = GetItemTranslate(ItemData->ItemID);

			{
				int ItemIndex = -1;
				auto it = GameData.Config.Item.IDToIndex.find(ItemData->ItemID);
				if (it != GameData.Config.Item.IDToIndex.end()) {
					ItemIndex = it->second;
				}

				if (ItemIndex >= 0 && GameData.Config.Item.ItemsForce[ItemIndex])
				{
					Text = "★" + Text;
				}
			}

			if (count > 1)
			{
				Text += " x" + std::to_string(count);
			}

			sf::Color TextColor = GetSafeQualityColor(ItemData->Quality);

			// 每一行的Y坐标
			float RowY = listStartY + Index * (IconBoxSize + 5);

			// 1. 画左侧竖线
			float lineWidth = 3.f;
			sf::RectangleShape lineShape(sf::Vector2f(lineWidth, IconBoxSize));
			lineShape.setPosition(listStartX, RowY);
			lineShape.setFillColor(TextColor);
			RenderDrawItems.emplace_back(lineShape);

			// 2. 画图标
			std::string IconUrl = std::format("Engine/Resource/Icon/Hub/{}.png", ItemData->ItemID);
			const auto* Icon = ResourceManager::GetTextureInfo(IconUrl);

			float iconDrawX = listStartX + lineWidth + 4; // 竖线右侧留4像素
			float iconDrawY = RowY;

			if (GameData.Config.Container.BoxItemRender == 0 && Icon && Icon->Sprite.getGlobalBounds().width > 0 && Icon->Sprite.getGlobalBounds().height > 0)
			{
				sf::Sprite IconSprite;
				IconSprite.setTexture(Icon->Texture);

				// 保持比例缩放
				float texW = Icon->Sprite.getGlobalBounds().width;
				float texH = Icon->Sprite.getGlobalBounds().height;
				float scale = std::min(IconBoxSize / texW, IconBoxSize / texH);

				IconSprite.setScale(scale, scale);

				// 居中到IconBoxSize区域
				float offsetX = (IconBoxSize - texW * scale) / 2.f;
				float offsetY = (IconBoxSize - texH * scale) / 2.f;
				IconSprite.setPosition(iconDrawX + offsetX, iconDrawY + offsetY);

				RenderDrawItems.emplace_back(IconSprite);
			}

			float textDrawX = iconDrawX + (GameData.Config.Container.BoxItemRender == 1 ? 0 : IconBoxSize) + 5;
			float textDrawY = RowY + (IconBoxSize - FontSize) / 2.f;

			DrawString(Window, Utils::StringToWstring(Text), { textDrawX, textDrawY }, TextColor, FontSize, false, false, true);

			Index++;
		}
	}

	inline void DrawDeadBodys(sf::RenderWindow& Window)
	{
		if (!GameData.Config.Container.BoxEnable || (GameData.Config.ESP.BattleMode && GameData.Config.ESP.HideBox)) return;
		GameData.Global.Data.Entitys.DeadBodys.GetReadLock();
		const auto& Items = GameData.Global.Data.Entitys.DeadBodys.Map();
		for (const auto& pItem : *Items)
		{
			const auto& Item = pItem.second;

			if (GameData.Config.Container.BoxHideOpened && Item.bIsOpened &&
				!(GameData.Config.Item.AutoShow && GetBoxItemsCanShow(Item))) continue;
			if (!GameData.Config.Container.AI && Item.bIsAI) continue;
			if (!GameData.Config.Container.Player && !Item.bIsAI) continue;

			const float Distance = GameData.Global.Data.Camera.Location.Distance(Item.Location) / 100.0f;

			if (Distance > GameData.Config.Container.BoxMaxDistance) continue;
			auto ScreenLocation = VectorHelper::WorldToScreen(Item.Location);
			const auto InScreen = VectorHelper::IsInScreen(ScreenLocation);
			if (!InScreen) continue;

			std::string Name = Item.bIsAI ? GameData.CurrentLanguage == Language::English ? "AI Box" : "人机盒子" : GameData.CurrentLanguage == Language::English ? "Player Box" : "玩家盒子";


			std::string Text = std::format("{}{} ({}M)", (GameData.Config.Container.Price && Item.InitialGuidePrice > 0) ? std::format("${} ", FormatMoney(Item.InitialGuidePrice)) : "", Name, (int)Distance);
			//std::string Text = std::format("{} ({}M)", Container.Entity.Name, (int)Distance);
			//Text += std::format(" / 0x{:0X}", Item.Address);
			sf::FloatRect InfoSize = DrawString(Window, Utils::StringToWstring(Text), { ScreenLocation.X, ScreenLocation.Y }, FloatToSFColor(Item.bIsAI ? GameData.Config.Container.AIDeadBoxInfoColor : GameData.Config.Container.PlayerDeadBoxInfoColor), GameData.Config.Container.BoxFontSize, true, true, true);
			ScreenLocation.Y += InfoSize.height / 2;

			if (GameData.Config.Container.BoxItem && Distance <= GameData.Config.Container.BoxItemMaxDistance) {
				DrawBoxItems(Window, Item, ScreenLocation, InfoSize, true);
			}
		}
		GameData.Global.Data.Entitys.DeadBodys.ReleaseReadLock();
	}

	inline void DrawContainers(sf::RenderWindow& Window)
	{
		if (!GameData.Config.Container.Enable || (GameData.Config.ESP.BattleMode && GameData.Config.ESP.HideContainer)) return;
		GameData.Global.Data.Entitys.Containers.GetReadLock();
		const auto& Containers = GameData.Global.Data.Entitys.Containers.Map();

		using NowType = std::remove_reference_t<decltype(Containers->begin()->second)>;
		std::vector<std::pair<const NowType*, float>> SortedItems;
		SortedItems.reserve(Containers->size());

		for (const auto& [key, item] : *Containers) {
			float Distance = GameData.Global.Data.Camera.Location.Distance(item.Location) / 100.0f;
			SortedItems.emplace_back(&item, Distance);
		}

		std::sort(SortedItems.begin(), SortedItems.end(),
			[](const auto& a, const auto& b) {
				return a.second > b.second;
			});

		for (const auto& SortedItem : SortedItems) {
			const auto& Container = *SortedItem.first;
			const float Distance = SortedItem.second;
			
			auto it = GameData.Config.Container.BoxNameToIndex.find(Container.Entity.DisplayName);
			if (it != GameData.Config.Container.BoxNameToIndex.end() &&
				!GameData.Config.Container.Boxs[it->second])
				continue;

			auto Color = FloatToSFColor(GameData.Config.Container.BoxsColor[GameData.Config.Container.BoxNameToIndex.at(Container.Entity.DisplayName)]);

			if (GameData.Config.Container.HideOpened && Container.bIsOpened &&
				!(GameData.Config.Item.AutoShow && GetBoxItemsCanShow(Container))) continue;

			if (Distance > GameData.Config.Container.MaxDistance) continue;
			auto ScreenLocation = VectorHelper::WorldToScreen(Container.Location);
			const auto InScreen = VectorHelper::IsInScreen(ScreenLocation);
			if (!InScreen) continue;

			if (GameData.Global.Data.bShowMouseCursor && (Distance > 10.f || Container.Entity.DisplayName != XorStr("Computer"))) continue;

			std::string Text = std::format("{}{}{}{}", (Distance < 10.f && Container.Entity.DisplayName == XorStr("Computer")) ? std::format("#{} ", Container.PwdSum < 100 ? "0" + std::to_string(Container.PwdSum) : std::to_string(Container.PwdSum)) : "", (GameData.Config.Container.ContainerPrice && Container.InitialGuidePrice > 0 && Container.Entity.DisplayName != XorStr("Computer") && Container.Entity.DisplayName != XorStr("Storage Cabinet")) ? std::format("${} ", FormatMoney(Container.InitialGuidePrice)) : "", GameData.Config.Container.Name ? I18N::T(Container.Entity.DisplayName, true) : "", GameData.Config.Container.Distance ? std::format(" ({}M)", (int)Distance) : "");
			
			//Text += std::format(" / 0x{:0X}", Container.Address);
			//std::string Text = std::format("{} ({}M)", Container.Entity.Name, (int)Distance);
			Utils::Trim(Text);

			sf::FloatRect InfoSize = DrawString(Window, Utils::StringToWstring(Text), { ScreenLocation.X, ScreenLocation.Y }, Color, GameData.Config.Container.FontSize, true, true, true);
			ScreenLocation.Y += InfoSize.height / 2;

			if (GameData.Config.Container.ContainerIconRender != 2) {
				std::string IconUrl = "Engine/Resource/Icon/Box/White/" + Container.Entity.DisplayName + ".png";
				if (GameData.Config.Container.ContainerIconRender == 1) {
					IconUrl = "Engine/Resource/Icon/Box/" + Container.Entity.DisplayName + ".png";
				}

				const auto* Icon = ResourceManager::GetTextureInfo(IconUrl);

				if (Icon && Icon->Sprite.getGlobalBounds().width > 0)
				{
					sf::Sprite IconSprite;
					IconSprite.setTexture(Icon->Texture);
					if (GameData.Config.Container.ContainerIconRender == 0)
					{
						IconSprite.setColor(Color);
					}

					float TargetHeight = 24.f * (GameData.Config.Container.IconSize / 14.f) * (GameData.Config.Container.IconSize / 14.f);
					float HeightZoom = TargetHeight / Icon->Sprite.getGlobalBounds().height;
					float IconWidth = Icon->Sprite.getGlobalBounds().width * HeightZoom;
					float IconHeight = TargetHeight;
					auto CacheScreenLocation = ScreenLocation;
					CacheScreenLocation.X -= IconWidth / 2;
					CacheScreenLocation.Y -= (IconHeight + GameData.Config.Container.IconSize + 2);


					IconSprite.setPosition(CacheScreenLocation.X, CacheScreenLocation.Y);
					IconSprite.setScale(HeightZoom, HeightZoom);

					RenderDrawItems.emplace_back(IconSprite);
				}
			}
			
			if (GameData.Config.Container.ContainerItem && Distance <= GameData.Config.Container.BoxItemMaxDistance) {
				DrawBoxItems(Window, Container, ScreenLocation, InfoSize, false);
			}
		}
		GameData.Global.Data.Entitys.Containers.ReleaseReadLock();
	}

	inline void DrawItems(sf::RenderWindow& Window)
	{
		if (!GameData.Config.Item.Enable || (GameData.Config.ESP.BattleMode && GameData.Config.ESP.HideItem)) return;

		GameData.Global.Data.Entitys.Items.GetReadLock();
		const auto& Items = GameData.Global.Data.Entitys.Items.Map();

		using NowType = std::remove_reference_t<decltype(Items->begin()->second)>;
		std::vector<std::pair<const NowType*, float>> SortedItems;
		SortedItems.reserve(Items->size());

		for (const auto& [key, item] : *Items) {
			float Distance = GameData.Global.Data.Camera.Location.Distance(item.Location) / 100.0f;
			SortedItems.emplace_back(&item, Distance);
		}

		std::sort(SortedItems.begin(), SortedItems.end(),
			[](const auto& a, const auto& b) {
				return a.second > b.second;
			});

		for (const auto& SortedItem : SortedItems) {
			const auto& Item = *SortedItem.first;
			const float Distance = SortedItem.second;

			int ItemIndex = -1;
			auto it = GameData.Config.Item.IDToIndex.find(Item.ItemID);
			if (it != GameData.Config.Item.IDToIndex.end()) {
				ItemIndex = it->second;
			}

			if (ItemIndex >= 0 && !GameData.Config.Item.Items[ItemIndex])
			{
				continue;
			}

			if (ItemIndex == -1 || (ItemIndex >= 0 && !GameData.Config.Item.ItemsForce[ItemIndex]))
			{
				if (GameData.Config.Item.EnablePriceFilter && (Item.Info.InitialGuidePrice < GameData.Config.Item.PriceGreaterThan * 1000)) continue;
				if (GameData.Config.Item.EnableQualityFilter && (Item.Info.Quality < GameData.Config.Item.QualityGreaterThan)) continue;
			}

			if (Item.Info.InitialGuidePrice <= 0) continue;

			if (Distance > GameData.Config.Item.MaxDistance) continue;

			//if (Item.Info.Weight <= 0.f) continue;

			if (!GameData.Config.Item.ItemsForce[ItemIndex])
			{
				//if (GameData.Config.Item.EnablePriceFilter)
				{
					if (GameData.Config.Item.EnablePriceFilter && (Item.Info.InitialGuidePrice < GameData.Config.Item.PriceGreaterThan * 1000)) continue;
				}

				//if (GameData.Config.Item.EnableQualityFilter)
				{
					if (GameData.Config.Item.EnableQualityFilter && (Item.Info.Quality < GameData.Config.Item.QualityGreaterThan)) continue;
				}
			}

			auto ScreenLocation = VectorHelper::WorldToScreen(Item.Location);
			const auto InScreen = VectorHelper::IsInScreenStrict(ScreenLocation);
			if (!InScreen) continue;

			const auto Color = GetSafeQualityColor(Item.Info.Quality);

			if (GameData.Config.Item.ShowLine) {
				// Calculate the center of the screen
				float ScreenCenterX = GameData.Config.Overlay.ScreenWidth / 2.0f;
				float ScreenCenterY = GameData.Config.Overlay.ScreenHeight * (GameData.Config.Item.LinePosY / 100);

				// Create a line from the screen center to the player's location
				sw::Line Line(
					sf::Vector2f(ScreenCenterX, ScreenCenterY),
					sf::Vector2f(ScreenLocation.X, ScreenLocation.Y),
					GameData.Config.Item.LineWidth,
					Color
				);
				Window.draw(Line);
			}

			std::string ItemName = Item.Name;

			{
				int ItemIndex = -1;
				auto it = GameData.Config.Item.IDToIndex.find(Item.ItemID);
				if (it != GameData.Config.Item.IDToIndex.end()) {
					ItemIndex = it->second;
				}

				if (ItemIndex >= 0 && GameData.Config.Item.ItemsForce[ItemIndex])
				{
					ItemName = "★" + ItemName;
				}
			}

			//std::string Text = std::format("{} {} ({}M)", GetItemTranslate(Item.ItemID), Item.ItemID, (int)Distance);
			std::string Text = std::format("{}{}", GameData.Config.Item.Name ? ItemName : GameData.Config.Item.Price ? std::format("${}", FormatMoney(Item.Info.InitialGuidePrice)) : "", GameData.Config.Item.Distance ? std::format(" ({}M)", (int)Distance) : "");
			Utils::Trim(Text);

			sf::FloatRect InfoSize = DrawString(Window, Utils::StringToWstring(Text), { ScreenLocation.X, ScreenLocation.Y }, Color, GameData.Config.Item.FontSize, true, true, true);
			ScreenLocation.Y += InfoSize.height / 2;

			if (GameData.Config.Item.Price && GameData.Config.Item.Name) DrawString(Window, Utils::StringToWstring(std::format("${}", FormatMoney(Item.Info.InitialGuidePrice))), { ScreenLocation.X, ScreenLocation.Y }, sf::Color(230, 230, 230, 255), GameData.Config.Item.FontSize - 1, true, false, true);

			if (GameData.Config.Item.ItemRender != 1) {
				std::string IconUrl = std::format("Engine/Resource/Icon/Hub/{}.png", Item.ItemID);

				const auto* Icon = ResourceManager::GetTextureInfo(IconUrl);

				if (Icon && Icon->Sprite.getGlobalBounds().width > 0)
				{
					sf::Sprite IconSprite;
					IconSprite.setTexture(Icon->Texture);

					float TargetHeight = 24.f * (GameData.Config.Item.IconSize / 14.f) * (GameData.Config.Item.IconSize / 14.f);
					float HeightZoom = TargetHeight / Icon->Sprite.getGlobalBounds().height;
					float IconWidth = Icon->Sprite.getGlobalBounds().width * HeightZoom;
					float IconHeight = TargetHeight;
					ScreenLocation.X -= IconWidth / 2;
					ScreenLocation.Y -= (IconHeight + GameData.Config.Item.IconSize + 2);


					IconSprite.setPosition(ScreenLocation.X, ScreenLocation.Y);
					IconSprite.setScale(HeightZoom, HeightZoom);

					RenderDrawItems.emplace_back(IconSprite);

					/*auto outlineShader = GetOutlineShader(GTextureMap[IconUrl].Texture, 15.0f * (GameData.Config.Item.IconSize / 14.f), Color);
					if (outlineShader) {
						ShaderSprite shaderSprite{
							IconSprite,
							outlineShader
						};
						RenderDrawItems.push_back(shaderSprite);
					}
					else 
					{
						RenderDrawItems.emplace_back(IconSprite);
					}*/
				}
			}
		}
		GameData.Global.Data.Entitys.Items.ReleaseReadLock();
	}

	inline void DrawDebug(sf::RenderWindow& Window)
	{
		GameData.Global.Data.Entitys.DebugActors.GetReadLock();
		const auto& Items = GameData.Global.Data.Entitys.DebugActors.Map();
		for (const auto& pItem : *Items)
		{
			const auto& Item = pItem.second;
			const float Distance = GameData.Global.Data.Camera.Location.Distance(Item.Location) / 100.0f;
			if (Distance > GameData.Config.ESP.DebugMaxDistance) continue;

			auto ScreenLocation = VectorHelper::WorldToScreen(Item.Location);
			const auto InScreen = VectorHelper::IsInScreen(ScreenLocation);
			if (!InScreen) continue;

		/*	if (Item.Entity.Name == "BP_Interact_Door_AcquireCard_C_Key_None21")
			{
				Utils::Log(4, "%f %f %f", Item.Location.X, Item.Location.Y, Item.Location.Z);
			}*/

			std::string Text = std::format("{} ({}M)", Item.Entity.Name, (int)Distance);
			sf::FloatRect InfoSize = DrawString(Window, Utils::StringToWstring(Text), { ScreenLocation.X, ScreenLocation.Y }, GetColorFromName(Item.Entity.Name), 14.f, true, true, true);
			ScreenLocation.Y += InfoSize.height / 2;
		}
		GameData.Global.Data.Entitys.DebugActors.ReleaseReadLock();
	}

	inline void DrawFastItems(sf::RenderWindow& Window)
	{
		if (!GameData.Config.Container.FastItems) return;

		if (!GameData.Global.Data.bShowMouseCursor || !GameData.Global.Data.bIsOpening) return;

		GameData.Global.Data.Entitys.CurrentOpeningContainerBoxInfo.GetReadLock();
		const auto& Items = GameData.Global.Data.Entitys.CurrentOpeningContainerBoxInfo.Map();
		if (Items->size() == 0) {
			GameData.Global.Data.Entitys.CurrentOpeningContainerBoxInfo.ReleaseReadLock();
			return;
		}

		const auto& Data = Items->at(0);

		// 缩放系数
		float scaleFactor = GameData.Config.Container.FastItemsSize;
		if (scaleFactor > 1)
		{
			scaleFactor = 1 + GameData.Config.Container.FastItemsSize / 100.f;
		}

		// 1. 收集所有Item到一个列表
		std::vector<std::decay_t<decltype(Data.Items.begin()->second[0])>> itemsList;
		for (const auto& v : Data.Items)
		{
			for (const auto& Item : v.second)
			{
				if (Item.InitialGuidePrice <= 0 && Item.ItemID < 99999990000) continue;
				itemsList.push_back(Item);
			}
		}

		if (itemsList.size() == 0)
		{
			GameData.Global.Data.Entitys.CurrentOpeningContainerBoxInfo.ReleaseReadLock();
			return;
		}

		// 2. 按价格高到低排序
		std::sort(itemsList.begin(), itemsList.end(), [](const auto& a, const auto& b) {
			return a.InitialGuidePrice > b.InitialGuidePrice;
		});

		const int itemsPerRow = 4;
		const float itemSize = 75.f * scaleFactor;
		const float padding = 4.f * scaleFactor;           // 整体外边距
		const float itemInnerPadding = 8.f * scaleFactor;   // 格子之间的间距
		const float startX = GameData.Config.Container.ItemListX;
		const float startY = GameData.Config.Container.ItemListY;
		const float titleBarHeight = 33.f * scaleFactor;

		// 统计总占用格子数
		int totalSlots = 0;
		std::vector<int> itemSlotSize; // 记录每个物品占用的格子数
		for (const auto& Item : itemsList) {
			bool isRect = (Item.Length != Item.Width) && (Item.Width == 2 && Item.Length != 1);
			int slots = isRect ? 2 : 1;
			itemSlotSize.push_back(slots);
			totalSlots += slots;
		}
		int itemRows = (totalSlots + itemsPerRow - 1) / itemsPerRow;

		// 计算背景宽高（包含外边距）
		const float bgWidth = itemsPerRow * itemSize + (itemsPerRow + 1) * itemInnerPadding + 2 * padding;
		const float bgHeight = itemRows * itemSize + (itemRows + 1) * itemInnerPadding + titleBarHeight + 2 * padding;
		const float leftMargin = startX - padding;
		const float topMargin = startY - padding - titleBarHeight;

		// 背景
		sf::RectangleShape bg(sf::Vector2f(bgWidth, bgHeight));
		bg.setPosition(leftMargin, topMargin);
		bg.setFillColor(sf::Color(18, 18, 18, 255));
		RenderDrawItems.emplace_back(bg);

		{
			float lineMargin = padding + itemInnerPadding;
			sf::RectangleShape line(sf::Vector2f(bgWidth, 3 * scaleFactor));
			line.setPosition(leftMargin, topMargin);
			line.setFillColor(sf::Color(40, 40, 40, 255));
			RenderDrawItems.emplace_back(line);
		}

		// 标题文字（宽字符），左对齐
		sf::Text titleText;
		titleText.setFont(Font);
		titleText.setString(GameData.CurrentLanguage == Language::Chinese ? L"战利物品" : L"Loot");
		titleText.setCharacterSize(static_cast<unsigned int>(12 * scaleFactor));
		titleText.setFillColor(sf::Color(245, 245, 245, 180));
		titleText.setStyle(sf::Text::Regular);
		titleText.setPosition(leftMargin + padding + itemInnerPadding, topMargin + padding + (int)(padding / 2) + 5 * scaleFactor);
		RenderDrawItems.emplace_back(titleText);

		// 金额文字（宽字符），右对齐
		sf::Text valueText;
		valueText.setFont(Font);
		valueText.setString(Utils::StringToWstring(std::format("${}", FormatMoney(Data.InitialGuidePrice))));
		valueText.setCharacterSize(static_cast<unsigned int>(12 * scaleFactor));
		valueText.setFillColor(sf::Color(245, 245, 245, 190));
		float valueTextWidth = valueText.getLocalBounds().width;
		valueText.setPosition(leftMargin + bgWidth - padding - itemInnerPadding - valueTextWidth, topMargin + padding + (int)(padding / 2) + 5 * scaleFactor);
		RenderDrawItems.emplace_back(valueText);

		// 标题下横线（有左右间距）
		float lineMargin = padding + itemInnerPadding;
		sf::RectangleShape line(sf::Vector2f(bgWidth - 2 * lineMargin + 2, 1 * scaleFactor));
		line.setPosition(leftMargin + lineMargin - 1, topMargin + padding + titleBarHeight - 1 * scaleFactor);
		line.setFillColor(sf::Color(45, 45, 45, 255));
		RenderDrawItems.emplace_back(line);

		// 物品格子排布
		std::vector<std::vector<bool>> gridUsed(itemRows, std::vector<bool>(itemsPerRow, false));
		int curItem = 0;
		for (int i = 0, slotIdx = 0; i < itemRows && curItem < (int)itemsList.size(); ++i)
		{
			for (int j = 0; j < itemsPerRow && curItem < (int)itemsList.size(); ++j, ++slotIdx)
			{
				if (gridUsed[i][j]) continue;

				const auto& Item = itemsList[curItem];
				int slots = itemSlotSize[curItem];
				bool isRect = (slots == 2);

				// 判断是否可以横跨两个格子
				bool canRenderRect = isRect && (j + 1 < itemsPerRow) && !gridUsed[i][j + 1];

				float x = leftMargin + padding + itemInnerPadding + j * (itemSize + itemInnerPadding);
				float y = topMargin + padding + titleBarHeight + itemInnerPadding + i * (itemSize + itemInnerPadding);
				float boxWidth = itemSize;
				float boxHeight = itemSize;

				if (canRenderRect)
				{
					boxWidth = itemSize * 2 + itemInnerPadding;
					gridUsed[i][j] = true;
					gridUsed[i][j + 1] = true;
					j++; // 跳过右侧格子
				}
				else
				{
					gridUsed[i][j] = true;
				}

				// 格子背景
				sf::RectangleShape itemBox(sf::Vector2f(boxWidth, boxHeight));
				itemBox.setPosition(x, y);
				const auto SafeColor = GetSafeQualityColor(Item.Quality);
				itemBox.setFillColor(sf::Color(SafeColor.r, SafeColor.g, SafeColor.b, 50));
				RenderDrawItems.emplace_back(itemBox);

				// 背景图片（拉伸填满格子）
				//const auto* BgPattern = ResourceManager::GetTextureInfo("Engine/Resource/Icon/Background.png");
				//if (BgPattern && BgPattern->Sprite.getGlobalBounds().width > 0)
				//{
				//	sf::Sprite bgSprite;
				//	bgSprite.setTexture(BgPattern->Texture);

				//	float bgW = BgPattern->Sprite.getGlobalBounds().width;
				//	float bgH = BgPattern->Sprite.getGlobalBounds().height;
				//	float scaleX = boxWidth / bgW;
				//	float scaleY = boxHeight / bgH;

				//	bgSprite.setScale(scaleX, scaleY);
				//	bgSprite.setPosition(x, y);
				//	RenderDrawItems.emplace_back(bgSprite);
				//}

				// 品质ICON
				const auto* QualityIcon = ResourceManager::GetTextureInfo("Engine/Resource/Icon/" + std::to_string(Item.Quality) + ".png");
				if (QualityIcon && QualityIcon->Sprite.getGlobalBounds().width > 0)
				{
					sf::Sprite qualitySprite;
					qualitySprite.setTexture(QualityIcon->Texture);

					float iconSize = 12.f * scaleFactor;
					float scale = iconSize / std::max(QualityIcon->Sprite.getGlobalBounds().width, QualityIcon->Sprite.getGlobalBounds().height);
					qualitySprite.setScale(scale, scale);
					qualitySprite.setPosition(x + 3 * scaleFactor, y + 3 * scaleFactor);
					RenderDrawItems.emplace_back(qualitySprite);

					// LV.等级
					sf::Text lvText;
					lvText.setFont(Font);
					lvText.setString(L"Lv." + std::to_wstring(Item.Quality));
					lvText.setCharacterSize(static_cast<unsigned int>(9 * scaleFactor));
					lvText.setFillColor(sf::Color(255, 255, 255, 180));
					lvText.setPosition(x + 3 * scaleFactor + iconSize + 2 * scaleFactor, y + 4 * scaleFactor);
					RenderDrawItems.emplace_back(lvText);
				}
				else {
					if (canRenderRect)
					{
						sf::Text lvText;
						lvText.setFont(Font);
						lvText.setString(Utils::StringToWstring(GetItemTranslate(Item.ItemID)));
						lvText.setCharacterSize(static_cast<unsigned int>(9 * scaleFactor));
						lvText.setFillColor(sf::Color(255, 255, 255, 180));
						lvText.setPosition(x + 3 * scaleFactor, y + 4 * scaleFactor);
						RenderDrawItems.emplace_back(lvText);
					}
				}

				// 物品图片
				const auto* ItemIcon = ResourceManager::GetTextureInfo("Engine/Resource/Icon/Hub/" + std::to_string(Item.ItemID) + ".png");
				if (ItemIcon && ItemIcon->Sprite.getGlobalBounds().width > 0)
				{
					sf::Sprite itemSprite;
					itemSprite.setTexture(ItemIcon->Texture);

					float maxIconW = boxWidth - 12.f * scaleFactor;
					float maxIconH = boxHeight - 24.f * scaleFactor;
					float realW = ItemIcon->Sprite.getGlobalBounds().width;
					float realH = ItemIcon->Sprite.getGlobalBounds().height;
					float scale = std::min(maxIconW / realW, maxIconH / realH);

					float drawW = realW * scale;
					float drawH = realH * scale;
					float drawX = x + (boxWidth - drawW) / 2;
					float drawY = y + (boxHeight - drawH) / 2 + 2 * scaleFactor;

					itemSprite.setScale(scale, scale);
					itemSprite.setPosition(drawX, drawY);
					RenderDrawItems.emplace_back(itemSprite);
				}

				//// 右下角金额
				//sf::Text priceText;
				//priceText.setFont(Font);
				//priceText.setString(Utils::StringToWstring(std::format("${}", FormatMoney(Item.InitialGuidePrice))));
				//priceText.setCharacterSize(static_cast<unsigned int>(9 * scaleFactor));
				//priceText.setFillColor(sf::Color(255, 255, 255, 200));
				//float priceTextWidth = priceText.getLocalBounds().width;
				//priceText.setPosition(x + boxWidth - priceTextWidth - 5 * scaleFactor, y + boxHeight - 14 * scaleFactor);
				//RenderDrawItems.emplace_back(priceText);

				if (!canRenderRect && Item.ItemID < 99999990000)
				{
					std::string Name = GetItemTranslate(Item.ItemID);
					if (Name.length() > 10) {
						Name = Name.substr(0, 10) + "...";
					}
					sf::Text priceText;
					priceText.setFont(Font);
					priceText.setString(Utils::StringToWstring(Name));
					priceText.setCharacterSize(static_cast<unsigned int>(9 * scaleFactor));
					priceText.setFillColor(sf::Color(255, 255, 255, 200));
					float priceTextWidth = priceText.getLocalBounds().width;
					priceText.setPosition(x + 5 * scaleFactor, y + boxHeight - 14 * scaleFactor);
					RenderDrawItems.emplace_back(priceText);

					/*{
						sf::Text priceText;
						priceText.setFont(Font);
						priceText.setString(Utils::StringToWstring(std::format("${}", FormatMoney(Item.InitialGuidePrice))));
						priceText.setCharacterSize(static_cast<unsigned int>(9 * scaleFactor));
						priceText.setFillColor(sf::Color(255, 255, 255, 200));
						float priceTextWidth = priceText.getLocalBounds().width;
						priceText.setPosition(x + boxWidth - priceTextWidth - 5 * scaleFactor, y - 14 * scaleFactor);
						RenderDrawItems.emplace_back(priceText);
					}*/
				}
				if (Item.ItemID < 99999990000) {
					sf::Text priceText;
					priceText.setFont(Font);
					priceText.setString(Utils::StringToWstring(std::format("${}", FormatMoney(Item.InitialGuidePrice))));
					priceText.setCharacterSize(static_cast<unsigned int>(9 * scaleFactor));
					priceText.setFillColor(sf::Color(255, 255, 255, 200));
					float priceTextWidth = priceText.getLocalBounds().width;
					priceText.setPosition(x + boxWidth - priceTextWidth - 5 * scaleFactor, y + 4 * scaleFactor);
					RenderDrawItems.emplace_back(priceText);
				}
				/*else {
					sf::Text priceText;
					priceText.setFont(Font);
					priceText.setString(Utils::StringToWstring(std::format("${}", FormatMoney(Item.InitialGuidePrice))));
					priceText.setCharacterSize(static_cast<unsigned int>(9 * scaleFactor));
					priceText.setFillColor(sf::Color(255, 255, 255, 200));
					float priceTextWidth = priceText.getLocalBounds().width;
					priceText.setPosition(x + boxWidth - priceTextWidth - 5 * scaleFactor, y + boxHeight - 14 * scaleFactor);
					RenderDrawItems.emplace_back(priceText);
				}*/

				curItem++;
			}
		}

		GameData.Global.Data.Entitys.CurrentOpeningContainerBoxInfo.ReleaseReadLock();
	}

	inline void DrawScatteredItems(sf::RenderWindow& Window)
	{
		if (!GameData.Config.Item.List || (GameData.Config.ESP.BattleMode && GameData.Config.ESP.HideItemList)) return;

		// 读取三个物品表
		GameData.Global.Data.Entitys.Items.GetReadLock();
		const auto& Items = GameData.Global.Data.Entitys.Items.Map();
		GameData.Global.Data.Entitys.DeadBodyItems.GetReadLock();
		const auto& DeadBodyItems = GameData.Global.Data.Entitys.DeadBodyItems.Map();
		GameData.Global.Data.Entitys.ContainerItems.GetReadLock();
		const auto& ContainerItems = GameData.Global.Data.Entitys.ContainerItems.Map();

		// 缩放系数
		float scaleFactor = GameData.Config.Item.ListSize;
		if (scaleFactor > 1)
		{
			scaleFactor = 1 + GameData.Config.Item.ListSize / 100.f;
		}

		const float rowHeight = round(48.f * scaleFactor);
		const float boxSize = round(48.f * scaleFactor);
		const float rowWidth = round(180.f * scaleFactor);
		const float rowSpacing = round(2.f * scaleFactor);
		const float rightMargin = 0.f;
		const float iconPadding = round(6.f * scaleFactor);

		// 1. 收集所有要显示的物品
		struct ItemWithDistance {
			const std::remove_reference_t<decltype(Items->begin()->second)>* ptr;
			float distance;
			int source; // 0:地面 1:尸体 2:箱子
			std::string containerName; // 仅箱子用
		};
		std::vector<ItemWithDistance> showItems;

		// 地面
		for (const auto& pItem : *Items)
		{
			const auto& Item = pItem.second;
			/*auto it = GameData.Config.Item.IDToIndex.find(Item.ItemID);
			if (it != GameData.Config.Item.IDToIndex.end() &&
				!GameData.Config.Item.Items[it->second])
				continue;*/
			const float Distance = GameData.Global.Data.Camera.Location.Distance(Item.Location) / 100.0f;
			if (Distance > GameData.Config.Item.MaxDistance) continue;

			int ItemIndex = -1;
			auto it = GameData.Config.Item.IDToIndex.find(Item.ItemID);
			if (it != GameData.Config.Item.IDToIndex.end()) {
				ItemIndex = it->second;
			}

			if (ItemIndex >= 0 && !GameData.Config.Item.Items[ItemIndex])
			{
				continue;
			}

			if (ItemIndex == -1 || (ItemIndex >= 0 && !GameData.Config.Item.ItemsForce[ItemIndex]))
			{
				if (GameData.Config.Item.EnablePriceFilter && (Item.Info.InitialGuidePrice < GameData.Config.Item.PriceGreaterThan * 1000)) continue;
				if (GameData.Config.Item.EnableQualityFilter && (Item.Info.Quality < GameData.Config.Item.QualityGreaterThan)) continue;
			}

			if (Item.Info.InitialGuidePrice <= 0) continue;

			/*if (GameData.Config.Item.EnablePriceFilter)
			{
				if (GameData.Config.Item.EnablePriceFilter && (Item.Info.InitialGuidePrice < GameData.Config.Item.PriceGreaterThan * 1000)) continue;
			}
			if (GameData.Config.Item.EnableQualityFilter)
			{
				if (GameData.Config.Item.EnableQualityFilter && (Item.Info.Quality < GameData.Config.Item.QualityGreaterThan)) continue;
			}*/

			showItems.push_back({ &Item, Distance, 0, "" });
		}

		if (GameData.Config.Item.ShowBoxItems)
		{
			// 尸体
			for (const auto& pItem : *DeadBodyItems)
			{
				const auto& Item = pItem.second;
				/*auto it = GameData.Config.Item.IDToIndex.find(Item.ItemID);
				if (it != GameData.Config.Item.IDToIndex.end() &&
					!GameData.Config.Item.Items[it->second])
					continue;*/
				const float Distance = GameData.Global.Data.Camera.Location.Distance(Item.Location) / 100.0f;
				if (Distance > GameData.Config.Item.MaxDistance) continue;

				int ItemIndex = -1;
				auto it = GameData.Config.Item.IDToIndex.find(Item.ItemID);
				if (it != GameData.Config.Item.IDToIndex.end()) {
					ItemIndex = it->second;
				}

				if (ItemIndex >= 0 && !GameData.Config.Item.Items[ItemIndex])
				{
					continue;
				}

				if (ItemIndex == -1 || (ItemIndex >= 0 && !GameData.Config.Item.ItemsForce[ItemIndex]))
				{
					if (GameData.Config.Item.EnablePriceFilter && (Item.Info.InitialGuidePrice < GameData.Config.Item.PriceGreaterThan * 1000)) continue;
					if (GameData.Config.Item.EnableQualityFilter && (Item.Info.Quality < GameData.Config.Item.QualityGreaterThan)) continue;
				}

				if (Item.Info.InitialGuidePrice <= 0) continue;
				showItems.push_back({ &Item, Distance, 1, "" });
			}
		}

		if (GameData.Config.Item.ShowConItems)
		{
			// 箱子
			for (const auto& pItem : *ContainerItems)
			{
				const auto& Item = pItem.second;
				/*auto it = GameData.Config.Item.IDToIndex.find(Item.ItemID);
				if (it != GameData.Config.Item.IDToIndex.end() &&
					!GameData.Config.Item.Items[it->second])
					continue;*/
				const float Distance = GameData.Global.Data.Camera.Location.Distance(Item.Location) / 100.0f;
				if (Distance > GameData.Config.Item.MaxDistance) continue;
				if (Item.Entity.DisplayName == XorStr("Computer")) continue;
				if (Item.Entity.DisplayName == XorStr("Storage Cabinet")) continue;

				int ItemIndex = -1;
				auto it = GameData.Config.Item.IDToIndex.find(Item.ItemID);
				if (it != GameData.Config.Item.IDToIndex.end()) {
					ItemIndex = it->second;
				}

				if (ItemIndex >= 0 && !GameData.Config.Item.Items[ItemIndex])
				{
					continue;
				}

				if (ItemIndex == -1 || (ItemIndex >= 0 && !GameData.Config.Item.ItemsForce[ItemIndex]))
				{
					if (GameData.Config.Item.EnablePriceFilter && (Item.Info.InitialGuidePrice < GameData.Config.Item.PriceGreaterThan * 1000)) continue;
					if (GameData.Config.Item.EnableQualityFilter && (Item.Info.Quality < GameData.Config.Item.QualityGreaterThan)) continue;
				}

				if (Item.Info.InitialGuidePrice <= 0) continue;

				std::string containerName = I18N::T(Item.Entity.DisplayName, true);
				showItems.push_back({ &Item, Distance, 2, containerName });
			}
		}

		// 2. 排序
		if (GameData.Config.Item.bSortByPrice)
		{
			std::sort(showItems.begin(), showItems.end(), [](const auto& a, const auto& b) {
				return a.ptr->Info.InitialGuidePrice > b.ptr->Info.InitialGuidePrice;
				});
		}
		else
		{
			std::sort(showItems.begin(), showItems.end(), [](const auto& a, const auto& b) {
				return a.distance < b.distance;
				});
		}

		// 3. 最多只显示10个
		if (GameData.Config.Item.ItemMaxCount > 0 && showItems.size() > GameData.Config.Item.ItemMaxCount)
			showItems.resize(GameData.Config.Item.ItemMaxCount);

		// 4. 计算整体高度和起始坐标
		int itemCount = (int)showItems.size();
		float totalHeight = itemCount * rowHeight + (itemCount - 1) * rowSpacing;
		float startX;
		if (GameData.Config.Item.OnLeft) {
			startX = rightMargin; // 靠左显示
		}
		else {
			startX = (float)(int)(GameData.Config.Overlay.ScreenWidth - rowWidth - rightMargin); // 靠右显示
		}
		float startY = (float)(int)((GameData.Config.Overlay.ScreenHeight - totalHeight) / 2.0f);

		// 5. 渲染
		for (int row = 0; row < itemCount; ++row)
		{
			const auto& Item = *showItems[row].ptr;
			const float Distance = showItems[row].distance;
			int source = showItems[row].source;
			const std::string& containerName = showItems[row].containerName;
			float y = startY + row * (rowHeight + rowSpacing);

			// 品质色竖线
			float lineHeight = boxSize;
			float lineWidth = round(3.f * scaleFactor);
			float lineX;
			if (GameData.Config.Item.OnLeft) {
				lineX = startX; // 左侧显示时，竖线放在最左边
			}
			else {
				lineX = startX + rowWidth - lineWidth; // 右侧显示时，竖线放在最右边
			}
			float lineY = y + (rowHeight - lineHeight) / 2;

			sf::RectangleShape qualityLine(sf::Vector2f(lineWidth, lineHeight));
			qualityLine.setPosition(lineX, lineY);
			const auto SafeColor = GetSafeQualityColor(Item.Info.Quality);
			qualityLine.setFillColor(sf::Color(SafeColor.r, SafeColor.g, SafeColor.b, 230));
			RenderDrawItems.emplace_back(qualityLine);

			float itemStartX = GameData.Config.Item.OnLeft ? startX + lineWidth : startX;

			// 1. 正方形格子背景
			sf::RectangleShape itemBox(sf::Vector2f(boxSize, boxSize));
			itemBox.setPosition(itemStartX, y + (rowHeight - boxSize) / 2);
			itemBox.setFillColor(sf::Color(SafeColor.r, SafeColor.g, SafeColor.b, 50));
			RenderDrawItems.emplace_back(itemBox);

			// 2. 背景图片（拉伸填满正方形）
			const auto* BgPattern = ResourceManager::GetTextureInfo("Engine/Resource/Icon/Background.png");
			if (false && BgPattern && BgPattern->Sprite.getGlobalBounds().width > 0)
			{
				sf::Sprite bgSprite;
				bgSprite.setTexture(BgPattern->Texture);

				float bgW = BgPattern->Sprite.getGlobalBounds().width;
				float bgH = BgPattern->Sprite.getGlobalBounds().height;
				float scaleX = boxSize / bgW;
				float scaleY = boxSize / bgH;

				bgSprite.setScale(scaleX, scaleY);
				bgSprite.setPosition(itemStartX, y + (rowHeight - boxSize) / 2);
				RenderDrawItems.emplace_back(bgSprite);
			}

			// 3. 品质ICON（更小，紧贴左上角）
			const auto* QualityIcon = ResourceManager::GetTextureInfo("Engine/Resource/Icon/" + std::to_string(Item.Info.Quality) + ".png");
			if (QualityIcon && QualityIcon->Sprite.getGlobalBounds().width > 0)
			{
				sf::Sprite qualitySprite;
				qualitySprite.setTexture(QualityIcon->Texture);
				float iconSize = round(10.f * scaleFactor);
				float scale = iconSize / std::max(QualityIcon->Sprite.getGlobalBounds().width, QualityIcon->Sprite.getGlobalBounds().height);
				qualitySprite.setScale(scale, scale);
				qualitySprite.setPosition(itemStartX + 1, y + (rowHeight - boxSize) / 2 + round(2 * scaleFactor));
				RenderDrawItems.emplace_back(qualitySprite);
			}

			// 4. 物品图片（居中等比例缩放）
			const auto* ItemIcon = ResourceManager::GetTextureInfo("Engine/Resource/Icon/Hub/" + std::to_string(Item.ItemID) + ".png");
			if (ItemIcon && ItemIcon->Sprite.getGlobalBounds().width > 0)
			{
				sf::Sprite itemSprite;
				itemSprite.setTexture(ItemIcon->Texture);

				float realW = ItemIcon->Sprite.getGlobalBounds().width;
				float realH = ItemIcon->Sprite.getGlobalBounds().height;
				float scale = std::min((boxSize - round(10.f * scaleFactor)) / realW, (boxSize - round(10.f * scaleFactor)) / realH);

				float drawW = realW * scale;
				float drawH = realH * scale;
				float drawX = itemStartX + (boxSize - drawW) / 2;
				float drawY = y + (rowHeight - boxSize) / 2 + (boxSize - drawH) / 2;

				itemSprite.setScale(scale, scale);
				itemSprite.setPosition(drawX, drawY);
				RenderDrawItems.emplace_back(itemSprite);
			}

			// 5. 金额（右下角）
			sf::Text priceText;
			priceText.setFont(Font);
			priceText.setString(Utils::StringToWstring(std::format("${}", FormatMoney(Item.Info.InitialGuidePrice))));
			priceText.setCharacterSize(static_cast<unsigned int>(round(10 * scaleFactor)));
			priceText.setFillColor(sf::Color(255, 255, 255, 200));
			priceText.setOutlineThickness(round(1 * scaleFactor));
			priceText.setOutlineColor(FloatToSFColor(GameData.Config.ESP.OutlineColor));
			float priceTextWidth = priceText.getLocalBounds().width;
			priceText.setPosition(itemStartX + boxSize - priceTextWidth - round(2 * scaleFactor),
				y + (rowHeight - boxSize) / 2 + boxSize - round(16 * scaleFactor));
			RenderDrawItems.emplace_back(priceText);

			// 6. 名称
			std::wstring nameStr = Utils::StringToWstring(GetItemTranslate(Item.ItemID));

			{
				int ItemIndex = -1;
				auto it = GameData.Config.Item.IDToIndex.find(Item.ItemID);
				if (it != GameData.Config.Item.IDToIndex.end()) {
					ItemIndex = it->second;
				}

				if (ItemIndex >= 0 && GameData.Config.Item.ItemsForce[ItemIndex])
				{
					nameStr = L"★" + nameStr;
				}
			}

			sf::Text nameText;
			nameText.setFont(Font);
			nameText.setString(nameStr);
			nameText.setCharacterSize(static_cast<unsigned int>(round(12 * scaleFactor)));
			nameText.setFillColor(sf::Color(245, 245, 245, 220));
			nameText.setOutlineThickness(round(1 * scaleFactor));
			nameText.setOutlineColor(FloatToSFColor(GameData.Config.ESP.OutlineColor));
			float maxNameWidth = rowWidth - boxSize - iconPadding * 2 - round(5 * scaleFactor);
			std::wstring ellipsis = L"...";
			if (nameText.getLocalBounds().width > maxNameWidth)
			{
				std::wstring shortName = nameStr;
				while (!shortName.empty())
				{
					shortName.pop_back();
					nameText.setString(shortName + ellipsis);
					if (nameText.getLocalBounds().width <= maxNameWidth)
						break;
				}
			}

			// 7. 距离+来源
			std::string sourceStr;
			if (source == 1)
				sourceStr = GameData.CurrentLanguage == Language::Chinese ? "盒子" : "Box";
			else if (source == 2)
				sourceStr = containerName;

			std::wstring distStr = Utils::StringToWstring(std::format("{}M · {}", (int)Distance, sourceStr));
			if (sourceStr == "") distStr = Utils::StringToWstring(std::format("{}M", (int)Distance));

			sf::Text distText;
			distText.setFont(Font);
			distText.setString(distStr);
			distText.setCharacterSize(static_cast<unsigned int>(round(10 * scaleFactor)));
			distText.setFillColor(sf::Color(180, 180, 180, 220));
			distText.setOutlineThickness(round(1 * scaleFactor));
			distText.setOutlineColor(FloatToSFColor(GameData.Config.ESP.OutlineColor));

			// 计算整体高度并垂直居中
			float nameHeight = nameText.getLocalBounds().height;
			float distHeight = distText.getLocalBounds().height;
			float totalTextHeight = nameHeight + distHeight + round(4 * scaleFactor);
			float baseY = (float)(int)(y + (rowHeight - totalTextHeight) / 2);

			float nameX = itemStartX + boxSize + iconPadding;
			nameText.setPosition(nameX, baseY);
			distText.setPosition(nameX, baseY + nameHeight + round(4 * scaleFactor));

			RenderDrawItems.emplace_back(nameText);
			RenderDrawItems.emplace_back(distText);
		}

		GameData.Global.Data.Entitys.Items.ReleaseReadLock();
		GameData.Global.Data.Entitys.DeadBodyItems.ReleaseReadLock();
		GameData.Global.Data.Entitys.ContainerItems.ReleaseReadLock();
	}

	inline void DrawOffscreenItemIndicators(sf::RenderWindow& Window)
	{
		if (!GameData.Config.Item.Indicator || (GameData.Config.ESP.BattleMode && GameData.Config.ESP.HideOffscreenItem)) return;

		GameData.Global.Data.Entitys.Items.GetReadLock();
		const auto& Items = GameData.Global.Data.Entitys.Items.Map();
		GameData.Global.Data.Entitys.DeadBodyItems.GetReadLock();
		const auto& DeadBodyItems = GameData.Global.Data.Entitys.DeadBodyItems.Map();
		GameData.Global.Data.Entitys.ContainerItems.GetReadLock();
		const auto& ContainerItems = GameData.Global.Data.Entitys.ContainerItems.Map();

		// 缩放系数
		float scaleFactor = GameData.Config.Item.IndicatorSize;
		if (scaleFactor > 1)
		{
			scaleFactor = 1 + GameData.Config.Item.IndicatorSize / 100.f;
		}

		const float boxSize = 35.f * scaleFactor;
		const float margin = 25.f * scaleFactor;

		struct ItemWithScreen {
			const std::remove_reference_t<decltype(Items->begin()->second)>* ptr;
			FVector2D screen;
			int source;
		};

		// 用整数坐标去重，key为(x, y, z)
		std::map<std::tuple<int, int, int>, ItemWithScreen> uniqueItems;

		auto collect = [&](const auto& Map, int source) {
			for (const auto& pItem : *Map)
			{
				const auto& Item = pItem.second;
				/*auto it = GameData.Config.Item.IDToIndex.find(Item.ItemID);
				if (it != GameData.Config.Item.IDToIndex.end() &&
					!GameData.Config.Item.Items[it->second])
					continue;*/
				const float Distance = GameData.Global.Data.Camera.Location.Distance(Item.Location) / 100.0f;
				if (Distance > GameData.Config.Item.MaxDistance) continue;
				if (Item.Entity.DisplayName == XorStr("Computer")) continue;
				if (Item.Entity.DisplayName == XorStr("Storage Cabinet")) continue;
				//if (Item.Info.Weight <= 0.f) continue;

				int ItemIndex = -1;
				auto it = GameData.Config.Item.IDToIndex.find(Item.ItemID);
				if (it != GameData.Config.Item.IDToIndex.end()) {
					ItemIndex = it->second;
				}

				if (ItemIndex >= 0 && !GameData.Config.Item.Items[ItemIndex])
				{
					continue;
				}

				if (ItemIndex == -1 || (ItemIndex >= 0 && !GameData.Config.Item.ItemsForce[ItemIndex]))
				{
					if (GameData.Config.Item.EnablePriceFilter && (Item.Info.InitialGuidePrice < GameData.Config.Item.PriceGreaterThan * 1000)) continue;
					if (GameData.Config.Item.EnableQualityFilter && (Item.Info.Quality < GameData.Config.Item.QualityGreaterThan)) continue;
				}

				if (Item.Info.InitialGuidePrice <= 0) continue;

				/*if (GameData.Config.Item.EnablePriceFilter)
				{
					if (GameData.Config.Item.EnablePriceFilter && (Item.Info.InitialGuidePrice < GameData.Config.Item.PriceGreaterThan * 1000)) continue;
				}
				if (GameData.Config.Item.EnableQualityFilter)
				{
					if (GameData.Config.Item.EnableQualityFilter && (Item.Info.Quality < GameData.Config.Item.QualityGreaterThan)) continue;
				}*/

				auto screen = VectorHelper::WorldToScreen(Item.Location);
				if (VectorHelper::IsInScreenStrict(screen)) continue;
				auto edgePos = VectorHelper::ClampToScreenEdge(Item.Location, margin, boxSize);

				int x = (int)(Item.Location.X + 0.5f);
				int y = (int)(Item.Location.Y + 0.5f);
				int z = (int)(Item.Location.Z + 0.5f);
				auto key = std::make_tuple(x, y, z);

				int price = Item.Info.InitialGuidePrice;
				auto it2 = uniqueItems.find(key);
				if (it2 == uniqueItems.end() || price > it2->second.ptr->Info.InitialGuidePrice) {
					uniqueItems[key] = { &Item, edgePos, source };
				}
			}
			};
		collect(Items, 0);
		if (GameData.Config.Item.ShowBoxItems) collect(DeadBodyItems, 1);
		if (GameData.Config.Item.ShowConItems) collect(ContainerItems, 2);

		// 转为vector并按距离排序（距离近的后画）
		std::vector<ItemWithScreen> showItems;
		for (auto& kv : uniqueItems) showItems.push_back(kv.second);
		std::sort(showItems.begin(), showItems.end(), [&](const ItemWithScreen& a, const ItemWithScreen& b) {
			float da = GameData.Global.Data.Camera.Location.Distance(a.ptr->Location);
			float db = GameData.Global.Data.Camera.Location.Distance(b.ptr->Location);
			return da > db; // 距离近的排后面，后画
			});

		float w = GameData.Config.Overlay.ScreenWidth;
		float h = GameData.Config.Overlay.ScreenHeight;
		FVector2D center(w / 2.f, h / 2.f);

		for (const auto& info : showItems)
		{
			const auto& Item = *info.ptr;
			FVector2D pos = info.screen;

			const auto SafeColor = GetSafeQualityColor(Item.Info.Quality);

			if (GameData.Config.Item.ShowLine) {
				// Calculate the center of the screen
				float ScreenCenterX = GameData.Config.Overlay.ScreenWidth / 2.0f;
				float ScreenCenterY = GameData.Config.Overlay.ScreenHeight * (GameData.Config.Item.LinePosY / 100.f);

				// Create a line from the screen center to the player's location
				sw::Line Line(
					sf::Vector2f(ScreenCenterX, ScreenCenterY),
					sf::Vector2f(pos.X, pos.Y),
					GameData.Config.Item.LineWidth,
					SafeColor
				);
				Window.draw(Line);
			}

			// 正方形格子背景
			sf::RectangleShape itemBox(sf::Vector2f(boxSize, boxSize));
			itemBox.setPosition(pos.X - boxSize / 2, pos.Y - boxSize / 2);
			itemBox.setFillColor(sf::Color(SafeColor.r, SafeColor.g, SafeColor.b, 50));
			RenderDrawItems.emplace_back(itemBox);

			float bracketLen = 8.f * scaleFactor;
			int thick = std::max(1, int(2 * scaleFactor));
			float left = pos.X - boxSize / 2;
			float right = pos.X + boxSize / 2;
			float top = pos.Y - boxSize / 2;
			float bottom = pos.Y + boxSize / 2;
			sf::Color color = sf::Color(SafeColor.r, SafeColor.g, SafeColor.b, 255);

			for (int t = 0; t < thick; ++t)
			{
				float offset = t - (thick - 1) / 2.0f;
				sf::VertexArray brackets(sf::Lines, 16);

				// 左上角
				brackets[0].position = sf::Vector2f(left + offset, top + bracketLen);
				brackets[1].position = sf::Vector2f(left + offset, top);
				brackets[2].position = sf::Vector2f(left, top + offset);
				brackets[3].position = sf::Vector2f(left + bracketLen, top + offset);

				// 右上角
				brackets[4].position = sf::Vector2f(right + offset, top + bracketLen);
				brackets[5].position = sf::Vector2f(right + offset, top);
				brackets[6].position = sf::Vector2f(right - bracketLen, top + offset);
				brackets[7].position = sf::Vector2f(right, top + offset);

				// 右下角
				brackets[8].position = sf::Vector2f(right + offset, bottom - bracketLen);
				brackets[9].position = sf::Vector2f(right + offset, bottom);
				brackets[10].position = sf::Vector2f(right - bracketLen, bottom + offset);
				brackets[11].position = sf::Vector2f(right, bottom + offset);

				// 左下角
				brackets[12].position = sf::Vector2f(left + offset, bottom - bracketLen);
				brackets[13].position = sf::Vector2f(left + offset, bottom);
				brackets[14].position = sf::Vector2f(left, bottom + offset);
				brackets[15].position = sf::Vector2f(left + bracketLen, bottom + offset);

				for (int i = 0; i < 16; ++i) brackets[i].color = color;
				RenderDrawItems.emplace_back(brackets);
			}

			// 物品图片
			const auto* ItemIcon = ResourceManager::GetTextureInfo("Engine/Resource/Icon/Hub/" + std::to_string(Item.ItemID) + ".png");
			if (ItemIcon && ItemIcon->Sprite.getGlobalBounds().width > 0)
			{
				sf::Sprite itemSprite;
				itemSprite.setTexture(ItemIcon->Texture);

				float realW = ItemIcon->Sprite.getGlobalBounds().width;
				float realH = ItemIcon->Sprite.getGlobalBounds().height;
				float scale = std::min((boxSize - 10.f * scaleFactor) / realW, (boxSize - 10.f * scaleFactor) / realH);

				float drawW = realW * scale;
				float drawH = realH * scale;
				float drawX = pos.X - drawW / 2;
				float drawY = pos.Y - drawH / 2;

				itemSprite.setScale(scale, scale);
				itemSprite.setPosition(drawX, drawY);
				RenderDrawItems.emplace_back(itemSprite);
			}

			// 箭头图片
			float dirX = pos.X - center.X;
			float dirY = pos.Y - center.Y;
			float angle = atan2f(dirY, dirX);

			const auto* ArrowIcon = ResourceManager::GetTextureInfo("Engine/Resource/Icon/Arrow.png");
			if (ArrowIcon && ArrowIcon->Sprite.getGlobalBounds().width > 0)
			{
				sf::Sprite arrowSprite;
				arrowSprite.setTexture(ArrowIcon->Texture);

				float arrowSize = 20.f * scaleFactor;
				float realW = ArrowIcon->Sprite.getGlobalBounds().width;
				float realH = ArrowIcon->Sprite.getGlobalBounds().height;
				float scale = arrowSize / realH;
				arrowSprite.setScale(scale, scale);

				arrowSprite.setOrigin(realW / 2.f, realH);

				float arrowOffset = boxSize / 2 + arrowSize / 2 + 10 * scaleFactor;
				float arrowX = pos.X + cosf(angle) * arrowOffset;
				float arrowY = pos.Y + sinf(angle) * arrowOffset;
				arrowSprite.setPosition((float)(int)(arrowX), (float)(int)(arrowY));
				arrowSprite.setRotation((float)(int)(angle * 180.0f / 3.1415926f - 90.f));

				RenderDrawItems.emplace_back(arrowSprite);
			}

			// 距离文本
			float distance = GameData.Global.Data.Camera.Location.Distance(Item.Location) / 100.0f;
			sf::Text distText;
			distText.setFont(Font);
			distText.setString(Utils::StringToWstring(std::format("{:.0f}M", distance)));
			distText.setCharacterSize(static_cast<unsigned int>(11 * scaleFactor));
			distText.setFillColor(sf::Color(245, 245, 245, 200));
			distText.setOutlineThickness(1 * scaleFactor);
			distText.setOutlineColor(FloatToSFColor(GameData.Config.ESP.OutlineColor));

			float deg = angle * 180.0f / 3.1415926f;
			float distPad = 5.f * scaleFactor;
			float distX = 0, distY = 0;
			if (deg > -45 && deg <= 45) { // 右侧
				distX = pos.X - boxSize / 2 - distPad - distText.getLocalBounds().width;
				distY = pos.Y - distText.getLocalBounds().height / 2;
			}
			else if (deg > 45 && deg <= 135) { // 下方
				distX = pos.X - distText.getLocalBounds().width / 2;
				distY = pos.Y - boxSize / 2 - distPad - distText.getLocalBounds().height;
			}
			else if (deg > -135 && deg <= -45) { // 上方
				distX = pos.X - distText.getLocalBounds().width / 2;
				distY = pos.Y + boxSize / 2 + distPad;
			}
			else { // 左侧
				distX = pos.X + boxSize / 2 + distPad;
				distY = pos.Y - distText.getLocalBounds().height / 2;
			}
			distText.setPosition((float)(int)(distX), (float)(int)(distY));
			RenderDrawItems.emplace_back(distText);
		}

		GameData.Global.Data.Entitys.Items.ReleaseReadLock();
		GameData.Global.Data.Entitys.DeadBodyItems.ReleaseReadLock();
		GameData.Global.Data.Entitys.ContainerItems.ReleaseReadLock();
	}

	inline void DrawOffscreenPlayerIndicators(sf::RenderWindow& Window)
	{
		if (!GameData.Config.ESP.Indicator) return;

		GameData.Global.Data.Entitys.Players.GetReadLock();
		const auto& Players = GameData.Global.Data.Entitys.Players.Map();

		using NowType = std::remove_reference_t<decltype(Players->begin()->second)>;
		std::vector<std::pair<const NowType*, float>> SortedItems;
		SortedItems.reserve(Players->size());

		for (const auto& [key, player] : *Players) {
			float Distance = GameData.Global.Data.Camera.Location.Distance(player.Location) / 100.0f;
			if (Distance > GameData.Config.ESP.IndicatorMax) continue;
			SortedItems.emplace_back(&player, Distance);
		}

		std::sort(SortedItems.begin(), SortedItems.end(),
			[](const auto& a, const auto& b) {
				return a.second > b.second;
		});

		// 缩放系数
		float scaleFactor = GameData.Config.ESP.IndicatorSize;
		if (scaleFactor > 1)
		{
			scaleFactor = 1 + GameData.Config.ESP.IndicatorSize / 100.f;
		}

		const float boxSize = 35.f * scaleFactor;
		const float margin = 25.f * scaleFactor;

		float w = GameData.Config.Overlay.ScreenWidth;
		float h = GameData.Config.Overlay.ScreenHeight;
		FVector2D center(w / 2.f, h / 2.f);

		for (const auto& SortedItem : SortedItems) {
			const auto& Item = *SortedItem.first;
			const float Distance = SortedItem.second;

			if (Item.Entity.Type != EntityType::Player) continue;
			if (Item.AliveState != EPlayerAliveState::Alive) continue;
			if (Item.IsMyTeam) continue;

			auto screen = VectorHelper::WorldToScreen(Item.Location);
			if (VectorHelper::IsInScreenStrict(screen)) continue;

			FVector2D pos = VectorHelper::ClampToScreenEdge(Item.Location, margin, boxSize);
			
			auto Color = GetColorForNumber(Item.PlayerState.TeamId);

			// 正方形格子背景
			sf::RectangleShape itemBox(sf::Vector2f(boxSize, boxSize));
			itemBox.setPosition(pos.X - boxSize / 2, pos.Y - boxSize / 2);
			itemBox.setFillColor(sf::Color(Color.r, Color.g, Color.b, 60));
			RenderDrawItems.emplace_back(itemBox);

			float bracketLen = 8.f * scaleFactor;
			int thick = std::max(1, int(2 * scaleFactor));
			float left = pos.X - boxSize / 2;
			float right = pos.X + boxSize / 2;
			float top = pos.Y - boxSize / 2;
			float bottom = pos.Y + boxSize / 2;

			//sf::Color color = sf::Color(Color.r, Color.g, Color.b, 255);

			// 物品图片
			const std::string IconUrl = "Engine/Resource/Icon/HeroAvatar/" + std::to_string(Item.PlayerState.HeroID) + ".png";
			const auto* ItemIcon = ResourceManager::GetTextureInfo(IconUrl);
			if (ItemIcon && ItemIcon->Sprite.getGlobalBounds().width > 0)
			{
				sf::Sprite itemSprite;
				itemSprite.setTexture(ItemIcon->Texture);

				float realW = ItemIcon->Sprite.getGlobalBounds().width;
				float realH = ItemIcon->Sprite.getGlobalBounds().height;
				float scale = std::min((boxSize - 10.f * scaleFactor) / realW, (boxSize - 10.f * scaleFactor) / realH);

				float drawW = realW * scale;
				float drawH = realH * scale;
				float drawX = pos.X - drawW / 2;
				float drawY = pos.Y - drawH / 2;

				itemSprite.setScale(scale, scale);
				itemSprite.setPosition(drawX, drawY);
				RenderDrawItems.emplace_back(itemSprite);
			}

			//const float actualRadius = 6.f * scaleFactor;
			//sf::CircleShape Circle(actualRadius);
			//Circle.setFillColor(color);
			//Circle.setOrigin(actualRadius, actualRadius);
			//Circle.setPointCount(30.f);
			//Circle.setOutlineThickness(1);
			//Circle.setOutlineColor(sf::Color(45, 45, 45, 230));

			//Circle.setPosition({
			//	pos.X + boxSize / 2 + actualRadius + 3,
			//	pos.Y + boxSize / 2 + actualRadius + 3
			//});

			//RenderDrawItems.emplace_back(Circle);

			//DrawString(Window,
			//	Utils::StringToWstring(std::to_string(Item.PlayerState.TeamId)),
			//	{ pos.X + boxSize / 2 + actualRadius + 3, pos.Y + boxSize / 2 + actualRadius + 3 },
			//	sf::Color::White,
			//	8.f * scaleFactor,
			//	true, true, true, false
			//);

			// 箭头图片
			float dirX = pos.X - center.X;
			float dirY = pos.Y - center.Y;
			float angle = atan2f(dirY, dirX);

			const auto* ArrowIcon = ResourceManager::GetTextureInfo("Engine/Resource/Icon/Arrow.png");
			if (ArrowIcon && ArrowIcon->Sprite.getGlobalBounds().width > 0)
			{
				sf::Sprite arrowSprite;
				arrowSprite.setTexture(ArrowIcon->Texture);

				float arrowSize = 20.f * scaleFactor;
				float realW = ArrowIcon->Sprite.getGlobalBounds().width;
				float realH = ArrowIcon->Sprite.getGlobalBounds().height;
				float scale = arrowSize / realH;
				arrowSprite.setScale(scale, scale);

				arrowSprite.setOrigin(realW / 2.f, realH);

				float arrowOffset = boxSize / 2 + arrowSize / 2 + 10 * scaleFactor;
				float arrowX = pos.X + cosf(angle) * arrowOffset;
				float arrowY = pos.Y + sinf(angle) * arrowOffset;
				arrowSprite.setPosition((float)(int)(arrowX), (float)(int)(arrowY));
				arrowSprite.setRotation((float)(int)(angle * 180.0f / 3.1415926f - 90.f));

				RenderDrawItems.emplace_back(arrowSprite);
			}

			// 距离文本
			sf::Text distText;
			distText.setFont(Font);
			distText.setString(Utils::StringToWstring(std::format("{:.0f}M", Distance)));
			distText.setCharacterSize(static_cast<unsigned int>(11 * scaleFactor));
			distText.setFillColor(sf::Color(245, 245, 245, 200));
			distText.setOutlineThickness(1 * scaleFactor);
			distText.setOutlineColor(FloatToSFColor(GameData.Config.ESP.OutlineColor));

			float deg = angle * 180.0f / 3.1415926f;
			float distPad = 5.f * scaleFactor;
			float distX = 0, distY = 0;
			if (deg > -45 && deg <= 45) { // 右侧
				distX = pos.X - boxSize / 2 - distPad - distText.getLocalBounds().width;
				distY = pos.Y - distText.getLocalBounds().height / 2;
			}
			else if (deg > 45 && deg <= 135) { // 下方
				distX = pos.X - distText.getLocalBounds().width / 2;
				distY = pos.Y - boxSize / 2 - distPad - distText.getLocalBounds().height;
			}
			else if (deg > -135 && deg <= -45) { // 上方
				distX = pos.X - distText.getLocalBounds().width / 2;
				distY = pos.Y + boxSize / 2 + distPad;
			}
			else { // 左侧
				distX = pos.X + boxSize / 2 + distPad;
				distY = pos.Y - distText.getLocalBounds().height / 2;
			}
			distText.setPosition((float)(int)(distX), (float)(int)(distY));
			RenderDrawItems.emplace_back(distText);
		}

		GameData.Global.Data.Entitys.Players.ReleaseReadLock();
	}

	inline void DrawCodedLocks(sf::RenderWindow& Window)
	{
		if (GameData.Global.Data.DFMGamePlayerMode != EDFMGamePlayMode::GamePlayMode_SOL) return;

		GameData.Global.Data.Entitys.CodedLocks.GetReadLock();
		const auto& Items = GameData.Global.Data.Entitys.CodedLocks.Map();

		using NowType = std::remove_reference_t<decltype(Items->begin()->second)>;
		std::vector<std::pair<const NowType*, float>> SortedItems;
		SortedItems.reserve(Items->size());

		for (const auto& [key, item] : *Items) {
			float Distance = GameData.Global.Data.Camera.Location.Distance(item.Location) / 100.0f;
			SortedItems.emplace_back(&item, Distance);
		}

		std::sort(SortedItems.begin(), SortedItems.end(),
			[](const auto& a, const auto& b) {
				return a.second > b.second;
			});

		for (const auto& SortedItem : SortedItems) {
			const auto& Item = *SortedItem.first;
			const float Distance = SortedItem.second;

			if (Item.Entity.Type == EntityType::CodedLock && (!GameData.Config.CodedLock.Enable || (GameData.Config.ESP.BattleMode && GameData.Config.ESP.HideCodedLock))) continue;
			if (Item.Entity.Type == EntityType::ExitTrigger && (!GameData.Config.CodedLock.EnableExitTrigger || (GameData.Config.ESP.BattleMode && GameData.Config.ESP.HideExitTrigger))) continue;
			if (Item.Entity.Type == EntityType::PlayerExit && (!GameData.Config.CodedLock.EnablePlayerExit || (GameData.Config.ESP.BattleMode && GameData.Config.ESP.HidePlayerExit))) continue;

			if (Item.Entity.Type == EntityType::CodedLock && Distance > GameData.Config.CodedLock.MaxDistance) continue;
			if (Item.Entity.Type != EntityType::CodedLock && Distance > GameData.Config.CodedLock.OtherMaxDistance) continue;

			if (Item.Entity.Type != EntityType::CodedLock && GameData.Global.Data.bShowMouseCursor) continue;

			auto ScreenLocation = VectorHelper::WorldToScreen(Item.Location);
			const auto InScreen = VectorHelper::IsInScreen(ScreenLocation);
			if (!InScreen) continue;

			auto Color = FloatToSFColor(GameData.Config.CodedLock.InfoColor);
			std::string Text = "";

			if (Item.Entity.Type == EntityType::ExitTrigger)
			{
				Color = FloatToSFColor(GameData.Config.CodedLock.ExitTriggerInfoColor);
				Text = std::format("{}", GameData.Config.CodedLock.Name ? I18N::T("Exit Trigger", true) : "");
			}
			else if (Item.Entity.Type == EntityType::PlayerExit)
			{
				Color = FloatToSFColor(GameData.Config.CodedLock.PlayerExitInfoColor);
				Text = std::format("{}", GameData.Config.CodedLock.Name ? I18N::T("Player Exit", true) : "");
			}
			else if (Item.Entity.Type == EntityType::KeyRoom)
			{
				Text = std::format("Room {}", Item.CodedLock);
			}
			else {
				Text = std::format("{}{}", GameData.Config.CodedLock.PWD ? std::format("#{} ", Item.PwdSum) : "", GameData.Config.CodedLock.Name ? I18N::T(Item.Entity.DisplayName, true) : "");
			}

			if (GameData.Config.ESP.Debug)
			{
                Text += "\n" + Item.Entity.Name;
			}

			if (GameData.Config.CodedLock.Distance) Text += std::format(" ({}M)", (int)Distance);

			Utils::Trim(Text);

			auto InfoSize = DrawString(Window, Utils::StringToWstring(Text), { ScreenLocation.X, ScreenLocation.Y }, Color, GameData.Config.CodedLock.InfoFontSize, true, true, true);
			ScreenLocation.Y += InfoSize.height / 2;

			if (GameData.Config.CodedLock.Icon && Item.Entity.Type != EntityType::CodedLock) {
				std::string IconUrl = "Engine/Resource/Icon/ExitPlayer.png";
				if (Item.Entity.Type == EntityType::ExitTrigger) IconUrl = "Engine/Resource/Icon/Exit.png";

				const auto* Icon = ResourceManager::GetTextureInfo(IconUrl);

				if (Icon && Icon->Sprite.getGlobalBounds().width > 0)
				{
					sf::Sprite IconSprite;
					IconSprite.setTexture(Icon->Texture);

					float TargetHeight = 24.f * (GameData.Config.CodedLock.InfoIconSize / 14.f) * (GameData.Config.CodedLock.InfoIconSize / 14.f);
					float HeightZoom = TargetHeight / Icon->Sprite.getGlobalBounds().height;
					float IconWidth = Icon->Sprite.getGlobalBounds().width * HeightZoom;
					float IconHeight = TargetHeight;
					ScreenLocation.X -= IconWidth / 2;
					ScreenLocation.Y -= (IconHeight + GameData.Config.CodedLock.InfoIconSize + 2);


					IconSprite.setPosition(ScreenLocation.X, ScreenLocation.Y);
					IconSprite.setScale(HeightZoom, HeightZoom);

					RenderDrawItems.emplace_back(IconSprite);
				}
			}
		}
		GameData.Global.Data.Entitys.CodedLocks.ReleaseReadLock();
	}

	inline void DrawThrows(sf::RenderWindow& Window)
	{
		static std::unordered_map<uint64_t, uint64_t> PtrTimes;

		if (!GameData.Config.Throw.Enable || (GameData.Config.ESP.BattleMode && GameData.Config.ESP.HideThrow)) return;
		GameData.Global.Data.Entitys.Throws.GetReadLock();
		const auto& Items = GameData.Global.Data.Entitys.Throws.Map();
		if (Items->size() == 0) PtrTimes.clear();

		for (const auto& pItem : *Items)
		{
			const auto& Item = pItem.second;

			if (Item.Entity.bHide || Item.bActorIsBeingDestroyed == 3 || !GameData.Config.Throw.Throws[Item.Entity.DisplayName]) continue;

			if (
				Item.Entity.DisplayName != XorStr("Sonic Trap") &&
				Item.Entity.DisplayName != XorStr("Bionic Bird") &&
				Item.Entity.DisplayName != XorStr("Flash Drone") &&
				Item.Entity.DisplayName != XorStr("Loitering Munition") &&
				// Item.Entity.DisplayName != XorStr("ThrowPerviewDynamicActor")&&
				//&&
				Item.Entity.DisplayName != XorStr("ESP Arrow") &&
				Item.Entity.DisplayName != XorStr("Volt Arrow")
				//Item.Entity.DisplayName != XorStr("Sonic Drone")
				) {
				auto it = PtrTimes.find(Item.Address);
				if (it != PtrTimes.end())
				{
					if (GetTickCount64() - it->second > 5000) continue;
				}
				else
				{
					PtrTimes[Item.Address] = GetTickCount64();
				}
			}

			//if (Item.bAlwaysCreatePhysicsState == 0 && (Item.Entity.Name != XorStr("BP_AbilityBullet_AirCannon_C") && Item.Entity.Name != XorStr("BP_GuidedCruiseMissile_C") && Item.Entity.Name != XorStr("BP_SubMissile_C"))) continue;

			const float Distance = GameData.Global.Data.Camera.Location.Distance(Item.Location) / 100.0f;
			if (Distance > GameData.Config.Throw.MaxDistance) continue;

			auto ScreenLocation = VectorHelper::WorldToScreen(Item.Location);
			const auto InScreen = VectorHelper::IsInScreen(ScreenLocation);
			if (!InScreen) continue;

			auto Color = Item.bVisible ? FloatToSFColor(GameData.Config.Throw.InfoColor) : FloatToSFColor(GameData.Config.Throw.OffInfoColor);

			auto Location = Item.Location;

			if (Item.Entity.bAimBot) {
				Location.Z -= 10.f;
				float Size = VectorHelper::WorldToScreen(Location).Y - ScreenLocation.Y;
				sf::CircleShape circle(Size);
				circle.setPosition(ScreenLocation.X - Size, ScreenLocation.Y - Size);
				circle.setFillColor(sf::Color::Transparent);

				circle.setOutlineThickness(2.0f);
				circle.setOutlineColor(Color);
				RenderDrawItems.emplace_back(circle);

				Location.Z -= 5.f;
			}

			Location.Z -= 10.f;
			ScreenLocation = VectorHelper::WorldToScreen(Location);

			//std::string Text = std::format("{} ({}M) #{} - {} / {} {} {}", I18N::T(Item.Entity.DisplayName, true), (int)Distance, Item.bHidden, Item.bStopFly, Item.ComponentVelocity.X, Item.ComponentVelocity.Y, Item.ComponentVelocity.Z);
			std::string Text = std::format("{} ({}M)", I18N::T(Item.Entity.DisplayName, true), (int)Distance, Item.bActorIsBeingDestroyed);
			sf::FloatRect InfoSize = DrawString(Window, Utils::StringToWstring(Text), { ScreenLocation.X, ScreenLocation.Y }, Color, GameData.Config.Throw.InfoFontSize, true, false, true);
			
		}
		GameData.Global.Data.Entitys.Throws.ReleaseReadLock();
	}

	inline void DrawFOV()
	{
		if ((UINT8)GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponType <= 0 || (UINT8)GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponType > 7) return;
		AimBotConfig Config = GameData.Config.AimBot.Configs[GameData.Config.AimBot.ConfigIndex].Weapon[GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponType];

		Config.FOV = Config.FOV * (83.974457f / GameData.Global.Data.Camera.FOV);

		ImVec2 CenterPoint = { (float)GameData.Config.Overlay.ScreenWidth / 2, (float)GameData.Config.Overlay.ScreenHeight / 2 };

		if (GameData.Config.AimBot.FOV && !GameData.AimBot.Lock)
		{
			if (Config.FOV <= 0) return;
			sf::Color Color = FloatToSFColor(GameData.Config.AimBot.FOVColor);
			sf::CircleShape Circle(Config.FOV);
			Circle.setPosition({ CenterPoint.x - Config.FOV, CenterPoint.y - Config.FOV });
			Circle.setPointCount(50);
			Circle.setOutlineThickness(1);
			Circle.setOutlineColor(Color);
			Circle.setFillColor(sf::Color::Transparent);

			RenderDrawItems.emplace_back(Circle);
		}
	}

	inline void DrawRadarPlayerCircleWithText(sf::RenderWindow& Window, PlayerConfig& Config, const PlayerInfo& Player, const std::wstring& text, sf::Color circle_col, float radius, sf::Vector2f position, float angle, bool hideAngle)
	{
		auto& RadarConfig = GameData.Global.Data.Radar.Main.bVisibility ? GameData.Config.MainRadar : GameData.Config.MiniRadar;

		if (Player.IsMyTeam)
		{
			int InnerTeamIndex = Player.PlayerState.InnerTeamIndex;
			InnerTeamIndex += 1;
			if (InnerTeamIndex <= 0 || InnerTeamIndex > 4)
			{
				circle_col = FloatToSFColor(GameData.Config.ESP.InnerTeamColor[0]);
			}
			else
			{
				circle_col = FloatToSFColor(GameData.Config.ESP.InnerTeamColor[InnerTeamIndex]);
			}
		}

		float fontSize = radius;

		sf::CircleShape Circle(radius);
		Circle.setFillColor(circle_col);
		Circle.setOrigin(radius, radius);
		Circle.setPointCount(radius * 2);
		Circle.setPosition(position.x, position.y);
		RenderDrawItems.emplace_back(Circle);

		std::string IconUrl = "Engine/Resource/Icon/OtherIndicator.png";
		if (RadarConfig.ShowDirection && !hideAngle && GTextureMap[IconUrl].Sprite.getGlobalBounds().width > 0) {
			sf::Sprite IconSprite;
			IconSprite.setTexture(GTextureMap[IconUrl].Texture);

			float IconSize = radius * 10.3f;

			sf::Vector2 ScreenLocation = { position.x, position.y };

			float TargetHeight = IconSize;
			float HeightZoom = TargetHeight / GTextureMap[IconUrl].Sprite.getGlobalBounds().height;
			float IconWidth = GTextureMap[IconUrl].Sprite.getGlobalBounds().width * HeightZoom;
			float IconHeight = TargetHeight;

			IconSprite.setOrigin(GTextureMap[IconUrl].Sprite.getGlobalBounds().width / 2, GTextureMap[IconUrl].Sprite.getGlobalBounds().height / 2);
			IconSprite.setPosition(ScreenLocation);
			IconSprite.setScale(HeightZoom, HeightZoom);
			IconSprite.setRotation(angle * 180.f / PI);

			RenderDrawItems.emplace_back(IconSprite);
		}

		if (!Player.IsMyTeam) { 
			//if (RadarConfig.ShowTeam) DrawString(Window, text, position, sf::Color::White, fontSize + 2.f, true, true, true);
            if (RadarConfig.ShowHeroAvatar && text != L"AI" && text != L"BOSS")
            {
                std::string IconUrl = "Engine/Resource/Icon/HeroAvatar/" + std::to_string(Player.PlayerState.HeroID) + ".png";

                const auto* Icon = ResourceManager::GetTextureInfo(IconUrl);

                if (Icon && Icon->Sprite.getGlobalBounds().width > 0)
                {
                    sf::Sprite IconSprite;
                    IconSprite.setTexture(Icon->Texture);
                    IconSprite.setColor(FloatToSFColor(Config.WeaponInfoColor));

                    float TargetHeight = (radius * 2.f) * 0.9f;
                    float HeightZoom = TargetHeight / Icon->Sprite.getGlobalBounds().height;
                    float IconWidth = Icon->Sprite.getGlobalBounds().width * HeightZoom;
                    float IconHeight = TargetHeight;

                    IconSprite.setPosition({position.x - IconWidth / 2, position.y - IconHeight / 2});
                    IconSprite.setScale(HeightZoom, HeightZoom);

                    RenderDrawItems.emplace_back(IconSprite);
                }
			}
			else {
                if (RadarConfig.ShowTeam) DrawString(Window, text, position, sf::Color::White, fontSize + 2.f, true, true, true);
			}
		}
		else
		{
			if (Player.IsSelf)
			{
				radius = radius / 3.f;
				sf::CircleShape Circle(radius);
				//Circle.setOutlineThickness(1.f);
				//Circle.setOutlineColor(FloatToSFColor(GameData.Config.ESP.OutlineColor));
				Circle.setFillColor(sf::Color(0, 0, 0, 100));
				Circle.setOrigin(radius, radius);
				Circle.setPointCount(60);
				Circle.setPosition(position.x, position.y);
				RenderDrawItems.emplace_back(Circle);
			}
			else
			{
				radius = radius / 3.f;
				sf::CircleShape Circle(radius);
				Circle.setOutlineThickness(1.f);
				Circle.setOutlineColor(FloatToSFColor(GameData.Config.ESP.OutlineColor));
				Circle.setFillColor(sf::Color::White);
				Circle.setOrigin(radius, radius);
				Circle.setPointCount(60);
				Circle.setPosition(position.x, position.y);
				RenderDrawItems.emplace_back(Circle);
			}
		}

		position.y += fontSize + 6.f;

		fontSize += 1.f;

		if (!Player.IsMyTeam && !Player.IsAI) {
			if (!RadarConfig.ShowArmor) return;

			std::string InfoText = "";
			if (Player.HelmetItemId > 0)
			{
				InfoText = std::format("{} {} ({:03d})", GameData.CurrentLanguage == Language::ChineseTraditional ? "Helmet" : I18N::T("Helmet", true), Player.HelmetLevel, (INT)Player.HelmetArmorHealth);
				sf::FloatRect HeadInfoSize = DrawString(Window, Utils::StringToWstring(InfoText), position, FloatToSFColor(GetArmorColor(Player.HelmetLevel, Config)), fontSize, true, false);
				position.y += HeadInfoSize.height + 2.f;
			}
			if (Player.ArmorItemId > 0)
			{
				InfoText = std::format("{} {} ({:03d})", GameData.CurrentLanguage == Language::ChineseTraditional ? "Armor" : I18N::T("Armor", true), Player.ArmorLevel, (INT)Player.ArmorHealth);
				sf::FloatRect HeadInfoSize = DrawString(Window, Utils::StringToWstring(InfoText), position, FloatToSFColor(GetArmorColor(Player.ArmorLevel, Config)), fontSize, true, false);
				position.y += HeadInfoSize.height + 2.f;
			}
		}
	}

	inline void DrawRadarPlayers(sf::RenderWindow& Window)
	{
		if (!GameData.Global.Data.Radar.Main.bVisibility && !GameData.Global.Data.Radar.Mini.bVisibility) return;
		auto& RadarConfig = GameData.Global.Data.Radar.Main.bVisibility ? GameData.Config.MainRadar : GameData.Config.MiniRadar;
		if (!RadarConfig.Enable) return;

		if (RadarConfig.ShowKeyDoor) {
			GameData.Global.Data.Entitys.DoorDatas.GetReadLock();
			const auto& Items = GameData.Global.Data.Entitys.DoorDatas.Map();
			for (const auto& pItem : *Items)
			{
				const auto& Item = pItem.second;
				auto ScreenLocation = Radar::WorldToScreen(Item.Location);
				if (ScreenLocation.X == -100.f) continue;

				std::string Text = std::format("{}", Item.Name != "" ? Item.Name : "Unk Key Door");

				const auto SafeColor = GetSafeQualityColor(Item.Info.Quality);

				float Radius = RadarConfig.Size * 0.5f;

				sf::CircleShape Circle(Radius);
				Circle.setOutlineThickness(1.f);
				Circle.setOutlineColor(FloatToSFColor(GameData.Config.ESP.OutlineColor));
				Circle.setFillColor(SafeColor);
				Circle.setOrigin(Radius, Radius);
				Circle.setPointCount(60);
				Circle.setPosition(ScreenLocation.X, ScreenLocation.Y);
				RenderDrawItems.emplace_back(Circle);

				ScreenLocation.Y += Radius * 2.f + 8.f;

				sf::FloatRect InfoSize = DrawString(Window, Utils::StringToWstring(Text), { ScreenLocation.X, ScreenLocation.Y }, SafeColor, RadarConfig.Size + 3, true, true, true);
				
			}
			GameData.Global.Data.Entitys.DoorDatas.ReleaseReadLock();
		}

		GameData.Global.Data.Entitys.Players.GetReadLock();
		const auto& Players = GameData.Global.Data.Entitys.Players.Map();

		using NowType = std::remove_reference_t<decltype(Players->begin()->second)>;
		std::vector<std::pair<const NowType*, float>> SortedItems;
		SortedItems.reserve(Players->size());

		for (const auto& [key, player] : *Players) {
			float Distance = GameData.Global.Data.Camera.Location.Distance(player.Location) / 100.0f;
			SortedItems.emplace_back(&player, Distance);
		}

		std::sort(SortedItems.begin(), SortedItems.end(),
			[](const auto& a, const auto& b) {
				return a.second > b.second;
			});

		for (const auto& SortedItem : SortedItems) {
			const auto& Player = *SortedItem.first;
			const float Distance = SortedItem.second;

			if (Player.AliveState == EPlayerAliveState::Dead) continue;

			PlayerConfig Config{};

			std::string TeamNumber = RadarConfig.ShowTeam ? std::to_string(Player.PlayerState.TeamId) : "";

			float Size = GameData.Global.Data.Radar.Main.bVisibility ? GameData.Config.MainRadar.Size : GameData.Config.MiniRadar.Size;
			bool HideAngle = false;

			if (Player.IsAI) {
				if (!RadarConfig.ShowAI) continue;
				Config = GameData.Config.ESP.Configs["AI"];
				TeamNumber = "AI";
				Size -= 2.f;
				HideAngle = true;
				if (Player.IsAI && Config.bFighting && Player.bFighting == 0 && Player.Entity.Name != XorStr("BP_RangeTargetCharacter_C")) continue;
			}
			else if (Player.IsBOSS) {
				if (!RadarConfig.ShowBOSS) continue;
				Config = GameData.Config.ESP.Configs["BOSS"];
				TeamNumber = "BOSS";
				Size += 2.f;
				HideAngle = true;
			}
			else {
				if (!RadarConfig.ShowPlayer) continue;
				if (Player.IsAIPlayer) TeamNumber = "AI";
				Config = GameData.Config.ESP.Configs["Player"];
			}

			auto Color = GetPlayerColor(Player, Config);

			auto ScreenLocation = Radar::WorldToScreen(Player.Location);

			if (ScreenLocation.X == -100.f) continue;

			bool Rotation = GameData.Global.Data.LevelName == XorStr("Forrest");
			FVector AimDirection = FRotator(0.0f, Player.LookingRotation.Yaw, 0.0f).GetUnitVector();
			FVector2D Direction = FVector2D{ AimDirection.X, AimDirection.Y };
			float AngleRadians = atan2(Direction.Y, Direction.X);
			float AngleDegrees = AngleRadians + (Rotation ? (PI / 2.0f) : 0);

		/*	if (Player.IsSelf)
			{
				Utils::Log(1, "%f %f %f %f", Player.LookingRotation.Pitch, Player.LookingRotation.Yaw, Player.LookingRotation.Roll, AngleDegrees);
			}*/

			if (Player.IsSelf && !RadarConfig.ShowSelf) continue;
			if ((Player.IsMyTeam && !Player.IsSelf) && !RadarConfig.ShowTeammate) continue;

			DrawRadarPlayerCircleWithText(Window, Config, Player, Utils::StringToWstring(TeamNumber), Color.TeamColor, Size, { ScreenLocation.X, ScreenLocation.Y }, AngleDegrees, HideAngle);

		}

		GameData.Global.Data.Entitys.Players.ReleaseReadLock();
	}

	inline sf::FloatRect GetTextBounds(const std::wstring& Text, float FontSize, bool bCenter = true)
	{
		sf::Text text;
		text.setString(Text);
		text.setFont(Font);  // 假设Font是您的全局字体变量
		text.setCharacterSize(static_cast<unsigned int>(FontSize));

		if (bCenter)
			text.setOrigin(text.getLocalBounds().width / 2.f, text.getLocalBounds().height / 2.f);

		return text.getLocalBounds();
	}

	inline void DrawPlayers(sf::RenderWindow& Window)
	{
		GameData.Global.Data.Entitys.Players.GetReadLock();
		const auto& Players = GameData.Global.Data.Entitys.Players.Map();

		using NowType = std::remove_reference_t<decltype(Players->begin()->second)>;
		std::vector<std::pair<const NowType*, float>> SortedItems;
		SortedItems.reserve(Players->size());

		for (const auto& [key, player] : *Players) {
			float Distance = GameData.Global.Data.Camera.Location.Distance(player.Location) / 100.0f;
			SortedItems.emplace_back(&player, Distance);
		}

		std::sort(SortedItems.begin(), SortedItems.end(),
			[](const auto& a, const auto& b) {
				return a.second > b.second;
		});


		for (const auto& SortedItem : SortedItems) {
			const auto& Player = *SortedItem.first;
			const float Distance = SortedItem.second;

			if (Player.AliveState == EPlayerAliveState::Dead || !Player.InScreen || Player.IsMyTeam) continue;

			PlayerConfig Config{};

			if (Player.IsAI) {
				Config = GameData.Config.ESP.Configs["AI"];
			}
			else if (Player.IsBOSS) {
				Config = GameData.Config.ESP.Configs["BOSS"];
			}
			else {
				Config = GameData.Config.ESP.Configs["Player"];
			}

			if (!Config.Enable) continue;

			if (Player.IsAI && Config.bFighting && Player.bFighting == 0 && Player.Entity.Name != XorStr("BP_RangeTargetCharacter_C")) continue;

			if (GameData.Config.ESP.BattleMode && Player.IsAI && GameData.Config.ESP.HideAI) continue;
			if (GameData.Config.ESP.BattleMode && Player.IsBOSS && GameData.Config.ESP.HideBOSS) continue;

			if (Distance > Config.MaxDistance) continue;

			auto Color = GetPlayerColor(Player, Config);

			std::unordered_map<int, FVector2D> ScreenBones;

			for (const EBoneIndex& Bone : SkeletonLists::Bones)
			{
				ScreenBones[Bone] = FVector2D();
			}

			for (const EBoneIndex& Bone : SkeletonLists::Bones)
			{
				ScreenBones.at(Bone) = VectorHelper::WorldToScreen(Player.LocationBones.at(Bone));
			}

			bool bShowInfo = (Distance <= Config.InfoMaxDistance || (GameData.AimBot.TargetPlayerInfo.Address == Player.Address));

			sf::Vector2f Pos = { (float)(int)ScreenBones.at(EBoneIndex::Root).X, (float)(int)ScreenBones.at(EBoneIndex::ForeHead).Y - 7 };
			int FontSize = Config.FontSize;
			const float Scale = (float)FontSize / 14.f;
			const auto Rect = Get2DBox(ScreenBones);

			sf::Vector2f HealthBarPos, HealthBarSize;
			const float Health = Player.AliveState == EPlayerAliveState::ImpendingDeath ? Player.ImpendingDeathHealth : Player.Health;
			sf::Color HealthColor = sf::Color(0, 0, 0, 0);
			if (Player.AliveState == EPlayerAliveState::ImpendingDeath) HealthColor = FloatToSFColor(Config.ImpendingDeathInfoColor);
			if (bShowInfo && Config.Health && !(GameData.Config.ESP.BattleMode && GameData.Config.ESP.HidePlayerHealth)) {
				float HeadY = (ScreenBones.at(EBoneIndex::Head).Y - ScreenBones.at(EBoneIndex::ForeHead).Y);
				if (Config.HealthRender == 0)
				{
					Pos.y = (float)(int)(ScreenBones.at(EBoneIndex::ForeHead).Y - HeadY) - 1.f;
					HealthBarSize = { Config.HealthWidth * Scale, 3 * Scale };
					HealthBarPos = { Rect.x + Rect.z / 2 - HealthBarSize.x / 2, Pos.y - HealthBarSize.y - 1 };
                    DrawHealthBar(Window, Player.Address, Player.MaxHealth, Health, HealthBarPos, HealthBarSize, HealthColor, true, true, (float)Config.HealthRounded);
					Pos.y = (float)(int)(ScreenBones.at(EBoneIndex::ForeHead).Y - HeadY - HealthBarSize.y * 2.f - 6.f - (14.f * Scale));
				}
				else if (Config.HealthRender == 2)
				{
					HealthBarPos = { Rect.x - 2, Rect.y + 2 };
					HealthBarSize = { std::clamp(Rect.w / 4.f, 0.f, 1.f), Rect.w - 3 };
					DrawHealthBar(Window, Player.Address, Player.MaxHealth, Health, HealthBarPos, HealthBarSize, HealthColor, false);
					//Pos.y = (float)(int)(ScreenBones.at(EBoneIndex::ForeHead).Y - HeadY - (3 * Scale) * 2.f - 6.f - (14.f * Scale));
				}
				else if (Config.HealthRender == 3)
				{
					HealthBarPos = { Rect.x + 4 + Rect.w / 2.f, Rect.y + 2 };
					HealthBarSize = { std::clamp(Rect.w / 4.f, 0.f, 1.f), Rect.w - 3 };
					DrawHealthBar(Window, Player.Address, Player.MaxHealth, Health, HealthBarPos, HealthBarSize, HealthColor, false);
					//Pos.y = (float)(int)(ScreenBones.at(EBoneIndex::ForeHead).Y - HeadY - (3 * Scale) * 2.f - 6.f - (14.f * Scale));
				}
			}

			const std::string& TeamID = (Player.IsAI || Player.IsAIPlayer) ? "AI" : (Player.IsBOSS) ? "BOSS" : std::to_string(Player.PlayerState.TeamId);

			std::string InfoText;
			bool OnlyTeam = true;
			if (Config.TeamNumber && (Config.TeamNumberRender == 1 || Config.TeamNumberRender == 2) && bShowInfo && !(!Player.IsAI && !Player.IsAIPlayer && GameData.Config.ESP.BattleMode && GameData.Config.ESP.HidePlayerTeam)) {
				InfoText += std::format(" ({})", TeamID);
				OnlyTeam = false;
			}
			if (Config.HeroName && bShowInfo && Player.PlayerState.HeroID > 0 && !(GameData.Config.ESP.BattleMode && GameData.Config.ESP.HidePlayerName)) {
				std::string Name{};
				if (Config.Name && bShowInfo && !(GameData.Config.ESP.BattleMode && GameData.Config.ESP.HidePlayerName))
				{
					Name = Player.PlayerState.PlayerNamePrivate;
				}
				if (Name == "")
				{
					InfoText += std::format("{}", Player.PlayerState.HeroName);
				}
				else {
					InfoText += std::format(" [{}]", Player.PlayerState.HeroName);
				}
				OnlyTeam = false;
			}
			if (Config.Name && bShowInfo && !(GameData.Config.ESP.BattleMode && GameData.Config.ESP.HidePlayerName)) {
				InfoText += std::format(" {}", Player.PlayerState.PlayerNamePrivate);
				OnlyTeam = false;
			}
			if (Config.Distance && (Config.DistanceRender == 0)) {
				if (OnlyTeam) {
					if (Player.IsAI) InfoText += "(AI) ";
					if (Player.IsBOSS) InfoText += "(BOSS) ";
					InfoText += std::format("{}M", (INT)Distance);
				}
				else {
					InfoText += std::format(" ({}M)", (INT)Distance);
				}
			}

			Utils::Trim(InfoText);

			if (!InfoText.empty()) {
				float HeadY = (ScreenBones.at(EBoneIndex::Head).Y - ScreenBones.at(EBoneIndex::ForeHead).Y);
				if ((!(bShowInfo && Config.Health && !(GameData.Config.ESP.BattleMode && GameData.Config.ESP.HidePlayerHealth) && Config.HealthRender == 0)) )
				{
					Pos.y -= 6.f + (Config.ShowHead ? HeadY * 2.f : HeadY);
				} else if (Config.HealthRender != 0)
				{
					Pos.y -= 6.f + (Config.ShowHead ? HeadY * 2.f : HeadY);
				}

				const float radius = 10.f * Scale;
				const float left = 2.f;
				const float actualRadius = radius;

				sf::Vector2f InfoPos = (Config.TeamNumber && (Config.TeamNumberRender == 0 || Config.TeamNumberRender == 2) && bShowInfo) ?
					sf::Vector2f(Pos.x + actualRadius + left, Pos.y) : Pos;

				// 1. 使用新函数获取文本大小
				//InfoText = " " + InfoText;
				const auto wInfoText = Utils::StringToWstring(InfoText);
				sf::FloatRect HeadInfoSize = GetTextBounds(wInfoText, FontSize);

				if ((Config.TeamNumber && (Config.TeamNumberRender == 0 || Config.TeamNumberRender == 2) && bShowInfo)) {
					// 2. 绘制背景
					float bgPaddingX = 6.0f;
					float bgPaddingY = 1.0f;
					float bgWidth = HeadInfoSize.width + actualRadius * 2 + bgPaddingX * 2;
					float bgHeight = std::max(HeadInfoSize.height, actualRadius * 2) + bgPaddingY * 2;

					sf::RectangleShape background(sf::Vector2f(bgWidth, bgHeight));
					background.setFillColor(sf::Color(0, 0, 0, 100));
					/*background.setOutlineThickness(1);
					background.setOutlineColor(sf::Color(45, 45, 45, 200));*/

					background.setPosition({
						Pos.x - HeadInfoSize.width / 2 - actualRadius - bgPaddingX - left,
						Pos.y - bgPaddingY
					});

					Window.draw(background);
				}

				// 3. 绘制文本
				DrawString(Window, wInfoText, InfoPos, Color.InfoColor, FontSize, true, false);

				if ((Config.TeamNumber && (Config.TeamNumberRender == 0 || Config.TeamNumberRender == 2) && bShowInfo)) {
					sf::CircleShape Circle(actualRadius);
					Circle.setFillColor(Color.TeamColor);
					Circle.setOrigin(actualRadius, actualRadius);
					Circle.setPointCount(std::max(8.f, actualRadius * 2));
					Circle.setOutlineThickness(1);
					Circle.setOutlineColor(sf::Color(45, 45, 45, 230));

					Circle.setPosition({
						Pos.x - HeadInfoSize.width / 2 - actualRadius / 2 - left,
						Pos.y + actualRadius - 0.5f
					});
					Window.draw(Circle);

					if (!Config.ShowHeroAvatar || (TeamID == XorStr("AI") || TeamID == XorStr("BOSS")))
					{
						DrawString(Window,
							Utils::StringToWstring(TeamID),
							{ Pos.x - HeadInfoSize.width / 2 - actualRadius / 2 - left, Pos.y + actualRadius - 0.5f },
							sf::Color::White,
							FontSize - 2,
							true, true, false, false
						);
					} else {
						std::string IconUrl = "Engine/Resource/Icon/HeroAvatar/" + std::to_string(Player.PlayerState.HeroID) + ".png";

						const auto* Icon = ResourceManager::GetTextureInfo(IconUrl);

						if (Icon && Icon->Sprite.getGlobalBounds().width > 0)
						{
							sf::Sprite IconSprite;
							IconSprite.setTexture(Icon->Texture);
							IconSprite.setColor(FloatToSFColor(Config.WeaponInfoColor));

							float TargetHeight = 18.f * Scale;
							float HeightZoom = TargetHeight / Icon->Sprite.getGlobalBounds().height;
							float IconWidth = Icon->Sprite.getGlobalBounds().width * HeightZoom;
							float IconHeight = TargetHeight;

							IconSprite.setPosition({ (Pos.x - HeadInfoSize.width / 2 - actualRadius / 2 - left) - IconWidth / 2, (Pos.y + actualRadius - 0.5f) - IconHeight / 2 });
							IconSprite.setScale(HeightZoom, HeightZoom);

							Window.draw(IconSprite);
						}
					}
				}

				Pos.y -= 3.f * Scale;
			}

			if (Config.Skeleton && (Player.Entity.DisplayName != XorStr("Crocodile") && Player.Entity.DisplayName != XorStr("Desmoulins Car") && Player.Entity.DisplayName != XorStr("Suicide Car")))
			{
				if (!(GameData.AimBot.Lock && GameData.AimBot.Target == Player.Address && GameData.Config.AimBot.HideBone))
				{
					DrawSkeleton(Window, Player.IsVisible, ScreenBones, Player.VisCheckBones, Color, Config.SkeletonWidth, Config.ShowHead, Config.HideBody, Config.FloatHead);
				}
			}

			bool ShowWeaponName = false;

			if (Config.WeaponRenderPos == 0 && Config.Weapon && bShowInfo && Player.CacheCurWeapon.WeaponName != "Unknown" && (Config.WeaponRender == 0 || Config.WeaponRender == 2) && !(GameData.Config.ESP.BattleMode && GameData.Config.ESP.HidePlayerWeapon))
            {
				std::string IconUrl = "Engine/Resource/Icon/Weapon/" + std::to_string(Player.CacheCurWeapon.WeaponID) + ".png";

				const auto* Icon = ResourceManager::GetTextureInfo(IconUrl);

				if (Icon && Icon->Sprite.getGlobalBounds().width > 0)
				{
					Pos.y -= 2.f * Scale;
					sf::Sprite WeaponIconSprite;
					WeaponIconSprite.setTexture(Icon->Texture);
					WeaponIconSprite.setColor(FloatToSFColor(Config.WeaponInfoColor));

					float TargetHeight = 18.f * Scale;
					float HeightZoom = TargetHeight / Icon->Sprite.getGlobalBounds().height;
					float IconWidth = Icon->Sprite.getGlobalBounds().width * HeightZoom;
					float IconHeight = TargetHeight;
					Pos.x -= IconWidth / 2;
					Pos.y -= IconHeight;

					WeaponIconSprite.setPosition(Pos.x, Pos.y);
					WeaponIconSprite.setScale(HeightZoom, HeightZoom);

					Window.draw(WeaponIconSprite);
				}
				else {
                    ShowWeaponName = true;
				}
			}

			if (Config.WeaponRenderPos == 0 && Config.Weapon && bShowInfo && Player.CacheCurWeapon.WeaponName != "Unknown" && (ShowWeaponName || Config.WeaponRender == 1 || Config.WeaponRender == 2) && !(GameData.Config.ESP.BattleMode && GameData.Config.ESP.HidePlayerWeapon))
            {
                Pos.y -= 14.f * Scale;
                auto UseColor = FloatToSFColor(Config.WeaponInfoColor);
                UseColor.a = 180;
                DrawString(Window, Utils::StringToWstring(Player.CacheCurWeapon.WeaponName), Pos, UseColor, FontSize, true, false);
            }

			Pos.x = ScreenBones.at(EBoneIndex::Root).X;
			Pos.y = ScreenBones.at(EBoneIndex::Root).Y + 1;

			if (bShowInfo && Config.Health && Config.HealthRender == 1 && !(GameData.Config.ESP.BattleMode && GameData.Config.ESP.HidePlayerHealth)) {
				HealthBarSize = { (Config.HealthWidth > 22.f ? CalculateWidth(Distance, 22.f, Config.HealthWidth) : Config.HealthWidth) * Scale, 3 * Scale };
				HealthBarPos = { Rect.x + Rect.z / 2 - HealthBarSize.x / 2, Pos.y + 2 };
				DrawHealthBar(Window, Player.Address, Player.MaxHealth, Health, HealthBarPos, HealthBarSize, HealthColor, true);
				Pos.y += HealthBarSize.y + 4;
			}

			Color.InfoColor = Config.BottomInfoColor ? Color.InfoColor : FloatToSFColor(Config.DefaultInfoColor);

			if (Config.Distance && Config.DistanceRender == 1) {
				InfoText = "";
				if (!bShowInfo) {
					if (Player.IsAI) InfoText += "(AI) ";
					if (Player.IsBOSS) InfoText += "(BOSS) ";
				}
				InfoText += std::format("{}M", (int)Distance);

				sf::FloatRect HeadInfoSize = DrawString(Window, Utils::StringToWstring(InfoText), Pos, Color.InfoColor, FontSize, true, false);
				Pos.y += HeadInfoSize.height + 5;
			}

			FontSize -= 1;
			Color.InfoColor.a = 180;

			if (Config.Weapon && bShowInfo && Player.CacheCurWeapon.WeaponName != "Unknown" && (Config.WeaponRenderPos == 1) && !(GameData.Config.ESP.BattleMode && GameData.Config.ESP.HidePlayerWeapon))
            {
                Pos.y -= 2;
                sf::FloatRect HeadInfoSize = DrawString(Window, Utils::StringToWstring(Player.CacheCurWeapon.WeaponName), Pos, Color.InfoColor, FontSize, true, false);
                Pos.y += HeadInfoSize.height + 3;
            }

			if (Config.KillCount && Player.KillCount) 
			{
				Pos.y -= 2;
				InfoText = std::format("{}K", Player.KillCount);
				sf::FloatRect HeadInfoSize = DrawString(Window, Utils::StringToWstring(InfoText), Pos, Color.InfoColor, FontSize, true, false);
				Pos.y += HeadInfoSize.height + 3;
			}

			if (Config.EquipmentPrice && Player.EquipmentPrice > 0)
			{
				Pos.y -= 2;
				InfoText = std::format("{}", FormatMoney(Player.EquipmentPrice));
				sf::FloatRect HeadInfoSize = DrawString(Window, Utils::StringToWstring(InfoText), Pos, Color.InfoColor, FontSize, true, false);
				Pos.y += HeadInfoSize.height + 3;
			}

			if (bShowInfo && Config.HelmetArmor && (Config.HelmetArmorRender == 1 || Config.HelmetArmorRender == 2) && !(GameData.Config.ESP.BattleMode && GameData.Config.ESP.HidePlayerArmor))
			{
				if (Player.HelmetItemId > 0)
				{
					InfoText = std::format("{} {} ({:03d})", GameData.CurrentLanguage == Language::ChineseTraditional ? "Helmet" : I18N::T("Helmet", true), Player.HelmetLevel, (INT)Player.HelmetArmorHealth);
					sf::FloatRect HeadInfoSize = DrawString(Window, Utils::StringToWstring(InfoText), Pos, FloatToSFColor(GetArmorColor(Player.HelmetLevel, Config)), FontSize, true, false);
					Pos.y += HeadInfoSize.height + 3;
				}
				if (Player.ArmorItemId > 0)
				{
					InfoText = std::format("{} {} ({:03d})", GameData.CurrentLanguage == Language::ChineseTraditional ? "Armor" : I18N::T("Armor", true), Player.ArmorLevel, (INT)Player.ArmorHealth);
					sf::FloatRect HeadInfoSize = DrawString(Window, Utils::StringToWstring(InfoText), Pos, FloatToSFColor(GetArmorColor(Player.ArmorLevel, Config)), FontSize, true, false);
					Pos.y += HeadInfoSize.height + 3;
				}
			}

			if (bShowInfo && Config.HelmetArmor && (Config.HelmetArmorRender == 0 || Config.HelmetArmorRender == 2) && !(GameData.Config.ESP.BattleMode && GameData.Config.ESP.HidePlayerArmor)) {
				bool HelmetVisible = Player.HelmetLevel > 0;
				bool ArmorVisible = Player.ArmorLevel > 0;

				// 渲染头盔
				{
					std::string IconUrl = "Engine/Resource/Icon/Helmet.png";
					const auto* HelmetIcon = ResourceManager::GetTextureInfo(IconUrl);

					if (HelmetVisible && HelmetIcon && HelmetIcon->Sprite.getGlobalBounds().width > 0)
					{
						Pos.y += 26 * Scale;
						sf::Sprite WeaponIconSprite;
						WeaponIconSprite.setTexture(HelmetIcon->Texture);

						sf::Color helmetColor = FloatToSFColor(GetArmorColor(Player.HelmetLevel, Config));
						float healthPercent = Player.HelmetArmorHealth / Player.MaxHelmetArmorHealth;
						healthPercent = std::max(0.0f, std::min(1.0f, healthPercent));
						int alpha = 128 + static_cast<int>(127.0f * healthPercent);
						helmetColor.a = static_cast<sf::Uint8>(alpha);
						WeaponIconSprite.setColor(helmetColor);

						//WeaponIconSprite.setColor(FloatToSFColor(GetArmorColor(Player.HelmetLevel, Config)));

						float TargetHeight = 26.f * Scale;
						float HeightZoom = TargetHeight / HelmetIcon->Sprite.getGlobalBounds().height;
						float IconWidth = HelmetIcon->Sprite.getGlobalBounds().width * HeightZoom;
						float IconHeight = TargetHeight;

						// 根据是否有两个图标调整位置
						if (HelmetVisible && ArmorVisible) {
							// 两个都有时保持原来的位置计算
							Pos.x -= IconWidth / 2 + (26 * Scale) / 2;
						}
						else {
							// 只有头盔时居中显示
							Pos.x -= IconWidth / 2;
						}

						Pos.y -= IconHeight;

						WeaponIconSprite.setPosition(Pos.x, Pos.y);
						WeaponIconSprite.setScale(HeightZoom, HeightZoom);

						//Window.draw(WeaponIconSprite);
						ArmorEffect::DrawArmorWithFragmentEffect(
							Window,
							WeaponIconSprite,
							Player.HelmetArmorHealth,
							Player.MaxHelmetArmorHealth
						);
					}
				}

				// 渲染护甲
				{
					std::string IconUrl = "Engine/Resource/Icon/Armor.png";
					const auto* ArmorIcon = ResourceManager::GetTextureInfo(IconUrl);

					if (ArmorVisible && ArmorIcon && ArmorIcon->Sprite.getGlobalBounds().width > 0)
					{
						Pos.y += 26 * Scale;
						sf::Sprite WeaponIconSprite;
						WeaponIconSprite.setTexture(ArmorIcon->Texture);

						//WeaponIconSprite.setColor(FloatToSFColor(GetArmorColor(Player.ArmorLevel, Config)));
						sf::Color helmetColor = FloatToSFColor(GetArmorColor(Player.ArmorLevel, Config));
						float healthPercent = Player.ArmorHealth / Player.MaxArmorHealth;
						healthPercent = std::max(0.0f, std::min(1.0f, healthPercent));
						int alpha = 128 + static_cast<int>(127.0f * healthPercent);
						helmetColor.a = static_cast<sf::Uint8>(alpha);
						WeaponIconSprite.setColor(helmetColor);

						float TargetHeight = 26.f * Scale;
						float HeightZoom = TargetHeight / ArmorIcon->Sprite.getGlobalBounds().height;
						float IconWidth = ArmorIcon->Sprite.getGlobalBounds().width * HeightZoom;
						float IconHeight = TargetHeight;

						// 根据是否有两个图标调整位置
						if (HelmetVisible && ArmorVisible) {
							// 两个都有时保持原来的位置计算
							Pos.x -= IconWidth / 2 - (26 * Scale) - 12 * Scale;
						}
						else {
							// 只有护甲时居中显示
							Pos.x -= IconWidth / 2;
						}

						Pos.y -= IconHeight;

						WeaponIconSprite.setPosition(Pos.x, Pos.y);
						WeaponIconSprite.setScale(HeightZoom, HeightZoom);

						//Window.draw(WeaponIconSprite);
						ArmorEffect::DrawArmorWithFragmentEffect(
							Window,
							WeaponIconSprite,
							Player.ArmorHealth,
							Player.MaxArmorHealth
						);
					}
				}
			}
		}

		int AlivePlayer = 0;
		int EarlyWarningPlayer = 0;
		int EarlyWarningPlayerDistance = 0;

		for (const auto& SortedItem : SortedItems) 
		{
			const auto& Player = *SortedItem.first;
			const float Distance = SortedItem.second;

			if (Player.AliveState == EPlayerAliveState::Dead || Player.IsMyTeam || Player.IsSelf) continue;

			PlayerConfig Config{};

			if (Player.IsAI) {
				Config = GameData.Config.ESP.Configs["AI"];
			}
			else if (Player.IsBOSS) {
				Config = GameData.Config.ESP.Configs["BOSS"];
			}
			else {
				Config = GameData.Config.ESP.Configs["Player"];


				AlivePlayer++;

				if (Distance < GameData.Config.ESP.EarlyWarningMaxDistance) {
					EarlyWarningPlayer++;
					EarlyWarningPlayerDistance = (int)Distance;
				}
				
			}

			if (!Config.Enable) continue;

			if (Distance > Config.MaxDistance) continue;

			if (Player.IsAimMe && Config.AimingRay)
			{
				std::unordered_map<int, FVector> LocationBones;
				std::unordered_map<int, FVector2D> ScreenBones;
				LocationBones[EBoneIndex::ForeHead] = Player.ComponentToWorld.GetWorldLocation(Player.Bones.at(EBoneIndex::ForeHead));
				ScreenBones[EBoneIndex::ForeHead] = VectorHelper::WorldToScreen(LocationBones.at(EBoneIndex::ForeHead));

				auto IsAimMeX = ScreenBones[EBoneIndex::ForeHead].X;
				auto IsAimMeY = ScreenBones[EBoneIndex::ForeHead].Y;

				if (!Player.InScreen)
				{
					FVector2D LocationToScreen = VectorHelper::WorldToScreen(Player.Location);
					IsAimMeX = LocationToScreen.X;
					IsAimMeY = LocationToScreen.Y;

					if (IsAimMeX == INFINITY) {
						float Angle = atan2(GameData.Global.Data.Camera.Location.Y - Player.Location.Y, GameData.Global.Data.Camera.Location.X - Player.Location.X);
						Angle = Angle * 180 / M_PI;
						Angle = GameData.Global.Data.Camera.Rotation.Yaw + 360 - Angle;

						IsAimMeX = GameData.Config.Overlay.ScreenWidth * sin(Angle * M_PI / 180) + GameData.Config.Overlay.ScreenWidth / 2;
						IsAimMeY = GameData.Config.Overlay.ScreenWidth * cos((Angle)*M_PI / 180) + GameData.Config.Overlay.ScreenHeight / 2;
					}
				}

				{
					// Calculate the center of the screen
					float ScreenCenterX = GameData.Config.Overlay.ScreenWidth / 2.0f;
					float ScreenCenterY = GameData.Config.Overlay.ScreenHeight / 2.0f;

					// Create a line from the screen center to the player's location
					sw::Line Line(
						sf::Vector2f(ScreenCenterX, ScreenCenterY),
						sf::Vector2f(IsAimMeX, IsAimMeY),
						Config.AimingRayWidth,
						FloatToSFColor(Config.AimingRayColor)
					);
					Window.draw(Line);
				}
			}
		}

		GameData.Global.Data.AlivePlayer = AlivePlayer;
		GameData.Global.Data.EarlyWarningPlayer = EarlyWarningPlayer;
		GameData.Global.Data.EarlyWarningPlayerDistance = EarlyWarningPlayerDistance;

		GameData.Global.Data.Entitys.Players.ReleaseReadLock();
	}

	inline void DrawEarlyWarning(sf::RenderWindow& Window)
	{
		if (!GameData.Config.ESP.EarlyWarning) return;

		// 准备两段文本
		std::string Text = std::format(
			"{} ({})  ·  {} ({})  ·  ",
			I18N::T(XorStr("Alive Players"), true),
			GameData.Global.Data.NewAlivePlayers,
			I18N::T(XorStr("Nearby Players"), true),
			GameData.Global.Data.EarlyWarningPlayer
		);

		if (GameData.Config.ESP.EarlyWarningHideAlive)
		{
			Text = std::format(
				"{} ({})  ·  ",
				I18N::T(XorStr("Nearby Players"), true),
				GameData.Global.Data.EarlyWarningPlayer
			);
		}

		std::string ClosestText = std::format(
			" {} ({}M)",
			I18N::T(XorStr("Closest"), true),
			GameData.Global.Data.EarlyWarningPlayerDistance
		);

		// 创建临时Text对象来测量文本宽度
		sf::Text measureText;
		measureText.setFont(Font);
		measureText.setString(Utils::StringToWstring(Text));
		measureText.setCharacterSize(GameData.Config.ESP.EarlyWarningFontSize);

		// 获取第一段文本的宽度
		sf::FloatRect textBounds = measureText.getLocalBounds();
		float totalWidth = textBounds.width;

		// 测量第二段文本的宽度
		measureText.setString(Utils::StringToWstring(ClosestText));
		sf::FloatRect closestBounds = measureText.getLocalBounds();
		totalWidth += closestBounds.width;

		// 计算起始位置
		float yPos = (float)(int)(GameData.Config.Overlay.ScreenHeight * (GameData.Config.ESP.EarlyWarningPosY / 100.f));
		float xCenter = (float)(int)(GameData.Config.Overlay.ScreenWidth / 2.f);
		float startX = xCenter - totalWidth / 2.f;

		auto Color = FloatToSFColor(GameData.Config.ESP.EarlyWarningColor);

		// 绘制第一段文本
		DrawString(
			Window,
			Utils::StringToWstring(Text),
			{ startX, yPos },
			Color,
			GameData.Config.ESP.EarlyWarningFontSize,
			false,  // 不居中
			true,   // 垂直居中
			true    // useRenderDrawItems
		);

		if (GameData.Config.ESP.EarlyWarningStageColor && GameData.Global.Data.EarlyWarningPlayer > 0)
		{
			if (GameData.Global.Data.EarlyWarningPlayerDistance <= 150)
			{
				Color = sf::Color(255, 210, 105);
			}
			if (GameData.Global.Data.EarlyWarningPlayerDistance <= 100)
			{
				Color = sf::Color(240, 150, 80);
			}
			if (GameData.Global.Data.EarlyWarningPlayerDistance <= 50)
			{
				Color = sf::Color::Red;
			}
		}

		// 绘制第二段文本
		DrawString(
			Window,
			Utils::StringToWstring(ClosestText),
			{ startX + textBounds.width + 5, yPos },
			Color,  // 或者其他您想要的颜色
			GameData.Config.ESP.EarlyWarningFontSize,
			false,  // 不居中
			true,   // 垂直居中
			true    // useRenderDrawItems
		);
	}

	inline void DrawSimulateGrenade(sf::RenderWindow& Window)
	{
		//static FVector LastLocation{};
		//GameData.Global.Data.Entitys.Throws.GetReadLock();
		//const auto& Items = GameData.Global.Data.Entitys.Throws.Map();
		//{
		//	for (const auto& pItem : *Items)
		//	{
		//		const auto& Item = pItem.second;
		//		const float Distance = GameData.Global.Data.Camera.Location.Distance(Item.Location) / 100.0f;
		//		if (Distance > GameData.Config.Throw.MaxDistance) continue;
		//		if (LastLocation.X == Item.Location.X && LastLocation.Y == Item.Location.Y && LastLocation.Z == Item.Location.Z) continue;
		//		LastLocation = Item.Location;
		//		printf("FVector(%ff, %ff, %ff),\n"
		//			, Item.Location.X
		//			, Item.Location.Y
		//			, Item.Location.Z
		//		);
		//	}
		//}
		//GameData.Global.Data.Entitys.Throws.ReleaseReadLock();

		if (GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponID == 21010000001)
		{
			 //if (LastLocation.X == 0) {
			 //	Utils::Log(4, "Camera: X=%f, Y=%f, Z=%f | Yaw=%f, Pitch=%f, Roll=%f"
			 //		, GameData.Global.Data.Camera.Location.X
			 //		, GameData.Global.Data.Camera.Location.Y
			 //		, GameData.Global.Data.Camera.Location.Z
			 //		, GameData.Global.Data.Camera.Rotation.Yaw
			 //		, GameData.Global.Data.Camera.Rotation.Pitch
			 //		, GameData.Global.Data.Camera.Rotation.Roll
			 //	);
			 //}
			 //return;

			if (!GameData.Physics.PhysX.mScene) return;

			// 获取相机信息和手雷位置
			FMinimalViewInfo Camera = GameData.Global.Data.Camera;
			Camera.Location.X += GameData.Physics.FWorldOriginLocation.X;
			Camera.Location.Y += GameData.Physics.FWorldOriginLocation.Y;
			Camera.Location.Z += GameData.Physics.FWorldOriginLocation.Z;

			// 手雷当前位置 (带世界偏移，用于PhysX计算)
			FVector GrenadeLocation = GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.ComponentToWorld.Translation;
			GrenadeLocation.X += GameData.Physics.FWorldOriginLocation.X;
			GrenadeLocation.Y += GameData.Physics.FWorldOriginLocation.Y;
			GrenadeLocation.Z += GameData.Physics.FWorldOriginLocation.Z;

			std::vector<PxVec3> trajectoryPoints;
			trajectoryPoints.reserve(300);

			// 全部使用第二次测试数据
			const float THROW_SPEED = GameData.Config.SimulateGrenade.THROW_SPEED;     // 第二次测试的投掷速度
			const float GRAVITY = GameData.Config.SimulateGrenade.GRAVITY;          // 确认的重力值
			const float BOUNCE_ENERGY_LOSS = GameData.Config.SimulateGrenade.BOUNCE_ENERGY_LOSS; // 第二次测试的弹跳损失
			const float SIMULATION_STEP = GameData.Config.SimulateGrenade.SIMULATION_STEP;   // 保持原有步长
			const int MAX_BOUNCES = GameData.Config.SimulateGrenade.MAX_BOUNCES;
			const float MAX_SIMULATION_TIME = GameData.Config.SimulateGrenade.MAX_SIMULATION_TIME; // 保持长模拟时间
			const float MIN_VELOCITY = GameData.Config.SimulateGrenade.MIN_VELOCITY;
			const float GRENADE_RADIUS = GameData.Config.SimulateGrenade.GRENADE_RADIUS;

			// 修正投掷方向计算 - 根据真实数据校准
			float pitch = Camera.Rotation.Pitch * (3.14159f / 180.0f);
			float yaw = Camera.Rotation.Yaw * (3.14159f / 180.0f);

			// 基础方向向量
			FVector throwDirection;
			throwDirection.X = cos(pitch) * cos(yaw);
			throwDirection.Y = cos(pitch) * sin(yaw);
			throwDirection.Z = sin(pitch);

			// 按仰角比例校正 - 根据默认仰角和动态仰角的比例调整
			float baseCorrectionFactor = GameData.Config.SimulateGrenade.correctionFactor;
			float currentPitch = Camera.Rotation.Pitch;
			
			// 默认仰角（你调校correctionFactor时的角度）
			float defaultPitch = 1.f; // 第二次测试数据的Pitch角度
			float defaultPitchZ =  (defaultPitch / std::abs(currentPitch));

			throwDirection.X += GameData.Config.SimulateGrenade.correctionFactorX;
			throwDirection.Y += GameData.Config.SimulateGrenade.correctionFactorY;
			throwDirection.Z += baseCorrectionFactor * defaultPitchZ;
			
			// 重新归一化
			float length = sqrt(throwDirection.X * throwDirection.X + 
							   throwDirection.Y * throwDirection.Y + 
							   throwDirection.Z * throwDirection.Z);
			if (length > 0.001f) {
				throwDirection.X /= length;
				throwDirection.Y /= length;
				throwDirection.Z /= length;
			}


			// 转换为PhysX向量 (使用世界坐标)
			PxVec3 currentPos(
				GrenadeLocation.X,
				GrenadeLocation.Y,
				GrenadeLocation.Z
			);

			PxVec3 throwDir(
				throwDirection.X,
				throwDirection.Y,
				throwDirection.Z
			);

			// 初始化物理参数
			PxVec3 velocity = throwDir * THROW_SPEED;
			PxVec3 gravity(0.0f, 0.0f, -GRAVITY);  // 重力向下（Z轴负方向）

			// 添加起始点
			trajectoryPoints.push_back(currentPos);

			int bounceCount = 0;
			float simulationTime = 0.0f;

			// 检查是否有游戏提供的第一个碰撞点
			bool useGameCollisionPoint = false;
			PxVec3 gameCollisionPoint;
			std::vector<PxVec3> firstTrajectoryPoints; // 存储到第一个碰撞点的轨迹
			
			if (GameData.Global.Data.ThrowPerviewDynamicActor.Location.X != 0 || 
				GameData.Global.Data.ThrowPerviewDynamicActor.Location.Y != 0 || 
				GameData.Global.Data.ThrowPerviewDynamicActor.Location.Z != 0) {
				
				// 游戏提供了第一个碰撞点，转换为世界坐标
				FVector firstCollision = GameData.Global.Data.ThrowPerviewDynamicActor.Location;
				firstCollision.X += GameData.Physics.FWorldOriginLocation.X;
				firstCollision.Y += GameData.Physics.FWorldOriginLocation.Y;
				
				gameCollisionPoint = PxVec3(firstCollision.X, firstCollision.Y, firstCollision.Z);
				useGameCollisionPoint = true;
				
				// 创建从手雷位置到第一个碰撞点的抛物线轨迹
				PxVec3 startPos = currentPos;
				PxVec3 targetPos = gameCollisionPoint;
				
				// 计算两点之间的距离和方向
				PxVec3 direction = targetPos - startPos;
				float totalDistance = direction.magnitude();
				direction = direction.getNormalized();
				
				// 生成抛物线轨迹点
				int numPoints = 20; // 轨迹点数量
				for (int i = 0; i <= numPoints; i++) {
					float t = (float)i / (float)numPoints; // 0到1的插值参数
					
					// 线性插值基础位置
					PxVec3 linearPos = startPos + direction * (totalDistance * t);
					
					// 添加抛物线高度 (中间最高)
					float heightFactor = 4.0f * t * (1.0f - t); // 抛物线函数，t=0.5时最大
					float maxHeight = totalDistance * 0.1f; // 最大高度为距离的10%
					
					PxVec3 curvePos = linearPos;
					curvePos.z += heightFactor * maxHeight; // 在Z轴上添加抛物线高度
					
					firstTrajectoryPoints.push_back(curvePos);
				}
				
				// 设置从第一个碰撞点开始的参数
				currentPos = gameCollisionPoint;
				
				// 估算碰撞时的速度（考虑重力影响）
				float estimatedHorizontalSpeed = THROW_SPEED * 0.7f;
				float estimatedVerticalSpeed = -THROW_SPEED * 0.4f; // 向下的速度
				velocity = PxVec3(
					throwDirection.X * estimatedHorizontalSpeed,
					throwDirection.Y * estimatedHorizontalSpeed,
					estimatedVerticalSpeed
				);
			}

			while (bounceCount <= MAX_BOUNCES && simulationTime < MAX_SIMULATION_TIME)
			{
				// 先添加当前位置到轨迹
				trajectoryPoints.push_back(currentPos);

				// 计算下一个位置
				PxVec3 nextPos = currentPos + velocity * SIMULATION_STEP + 0.5f * gravity * SIMULATION_STEP * SIMULATION_STEP;
				
				// 设置光线投射参数 - 从当前位置到下一个位置
				PxVec3 rayDir = nextPos - currentPos;
				float rayLength = rayDir.magnitude();

				if (rayLength > 0.0f)
				{
					PxRaycastBuffer hit;
					PxQueryFilterData filterData;
					filterData.flags = PxQueryFlag::eSTATIC | PxQueryFlag::eDYNAMIC;

					GameData.Physics.PhysX.mScene->lockRead();
					bool hasHit = GameData.Physics.PhysX.mScene->raycast(
						currentPos,
						rayDir.getNormalized(),
						rayLength + GRENADE_RADIUS, // 增加检测距离
						hit,
						PxHitFlag::eDEFAULT,
						filterData
					);

					if (hasHit && hit.block.distance > 0.1f) // 避免重复碰撞
					{
						// 碰撞点
						PxVec3 hitPoint = hit.block.position;
						PxVec3 normal = hit.block.normal;
						
						// 确保法向量朝向手雷飞来的方向
						if (velocity.dot(normal) > 0) {
							normal = -normal;
						}

						// 添加碰撞点到轨迹
						trajectoryPoints.push_back(hitPoint);

						// 计算反射速度 - 使用碰撞时的速度
						PxVec3 collisionVelocity = velocity + gravity * SIMULATION_STEP;
						float velocityDotNormal = collisionVelocity.dot(normal);
						PxVec3 reflectionVelocity = collisionVelocity - normal * 2.0f * velocityDotNormal;

						// 应用能量损失
						velocity = reflectionVelocity * BOUNCE_ENERGY_LOSS;
						
						// 将手雷位置设置在碰撞点外侧
						currentPos = hitPoint + normal * GRENADE_RADIUS;

						bounceCount++;
					}
					else
					{
						// 没有碰撞，正常移动
						currentPos = nextPos;
						// 应用重力到速度
						velocity += gravity * SIMULATION_STEP;
					}
					GameData.Physics.PhysX.mScene->unlockRead();
				}
				else
				{
					// 位置没有变化，退出
					break;
				}

				simulationTime += SIMULATION_STEP;

				if (velocity.magnitude() < MIN_VELOCITY)
				{
					break;
				}
			}

			// 添加最终位置
			if (!trajectoryPoints.empty()) {
				trajectoryPoints.push_back(currentPos);
			}

			// 绘制轨迹 - 转换为屏幕坐标时减去世界偏移
			sf::VertexArray Lines(sf::Lines);
			
			// 先绘制到第一个碰撞点的轨迹（如果有的话）
			if (useGameCollisionPoint && firstTrajectoryPoints.size() > 1) {
				for (size_t i = 0; i < firstTrajectoryPoints.size() - 1; i++) {
					const auto ScreenLocation1 = VectorHelper::WorldToScreen(FVector(
						firstTrajectoryPoints[i].x - GameData.Physics.FWorldOriginLocation.X,
						firstTrajectoryPoints[i].y - GameData.Physics.FWorldOriginLocation.Y,
						firstTrajectoryPoints[i].z
					));

					const auto ScreenLocation2 = VectorHelper::WorldToScreen(FVector(
						firstTrajectoryPoints[i + 1].x - GameData.Physics.FWorldOriginLocation.X,
						firstTrajectoryPoints[i + 1].y - GameData.Physics.FWorldOriginLocation.Y,
						firstTrajectoryPoints[i + 1].z
					));

					if (ScreenLocation1.X >= 0 && ScreenLocation1.Y >= 0 &&
						ScreenLocation2.X >= 0 && ScreenLocation2.Y >= 0) {
						
						// 第一段轨迹用绿色
						sf::Color lineColor = sf::Color::Green;
						
						Lines.append(sf::Vertex(
							sf::Vector2f(ScreenLocation1.X, ScreenLocation1.Y),
							lineColor
						));
						Lines.append(sf::Vertex(
							sf::Vector2f(ScreenLocation2.X, ScreenLocation2.Y),
							lineColor
						));
					}
				}
			}
			
			// 然后绘制弹跳轨迹或完整轨迹
			for (size_t i = 0; i < trajectoryPoints.size() - 1; i++)
			{
				// 转换为相对坐标用于屏幕投影
				const auto ScreenLocation1 = VectorHelper::WorldToScreen(FVector(
					trajectoryPoints[i].x - GameData.Physics.FWorldOriginLocation.X,
					trajectoryPoints[i].y - GameData.Physics.FWorldOriginLocation.Y,
					trajectoryPoints[i].z
				));

				const auto ScreenLocation2 = VectorHelper::WorldToScreen(FVector(
					trajectoryPoints[i + 1].x - GameData.Physics.FWorldOriginLocation.X,
					trajectoryPoints[i + 1].y - GameData.Physics.FWorldOriginLocation.Y,
					trajectoryPoints[i + 1].z
				));

				if (ScreenLocation1.X >= 0 && ScreenLocation1.Y >= 0 &&
					ScreenLocation2.X >= 0 && ScreenLocation2.Y >= 0)
				{
					// 区分弹跳轨迹和完整轨迹的颜色
					sf::Color lineColor;
					if (useGameCollisionPoint) {
						// 弹跳轨迹用青色
						lineColor = sf::Color::Cyan;
					}
					else {
						// 完整轨迹用渐变颜色
						if (i < trajectoryPoints.size() * 0.3f) {
							lineColor = sf::Color::Green;  // 初始段
						}
						else if (i < trajectoryPoints.size() * 0.7f) {
							lineColor = sf::Color::Yellow;  // 中间段
						}
						else {
							lineColor = sf::Color::Red;  // 末尾段
						}
					}

					Lines.append(sf::Vertex(
						sf::Vector2f(ScreenLocation1.X, ScreenLocation1.Y),
						lineColor
					));
					Lines.append(sf::Vertex(
						sf::Vector2f(ScreenLocation2.X, ScreenLocation2.Y),
						lineColor
					));
				}
			}

			Window.draw(Lines);
			
			// 如果使用了游戏碰撞点，在第一个碰撞点画个标记
			if (useGameCollisionPoint) {
				const auto CollisionScreenPos = VectorHelper::WorldToScreen(FVector(
					gameCollisionPoint.x - GameData.Physics.FWorldOriginLocation.X,
					gameCollisionPoint.y - GameData.Physics.FWorldOriginLocation.Y,
					gameCollisionPoint.z
				));
				
				if (CollisionScreenPos.X >= 0 && CollisionScreenPos.Y >= 0) {
					// 画一个小圆圈标记第一个碰撞点
					sf::CircleShape collisionMarker(8.0f);
					collisionMarker.setFillColor(sf::Color::Transparent);
					collisionMarker.setOutlineThickness(2.0f);
					collisionMarker.setOutlineColor(sf::Color::Magenta);
					collisionMarker.setOrigin(8.0f, 8.0f);
					collisionMarker.setPosition(CollisionScreenPos.X, CollisionScreenPos.Y);
					Window.draw(collisionMarker);
				}
			}
		}
	}

	inline void DrawESP(sf::RenderWindow& Window)
	{
		if (GameData.Process.GameState != FGameState::InGame) Sleep(16);

		int Time = GameData.Config.ESP.LimitFPS ? 0 : GameData.Config.ESP.OtherSleep;
	
		OtherThrottlered.executeTask("UpdateOverlayOther", std::chrono::milliseconds(Time), [&Window] {
			RenderDrawItems.clear();

			DrawFPS(Window);

			if (GameData.Process.GameState != FGameState::InGame) return;

			if (!GameData.Global.Data.Radar.Main.bVisibility)
			{
				DrawCodedLocks(Window);
				DrawContainers(Window);
			}

			if (!GameData.Global.Data.bShowMouseCursor) 
			{
				DrawDoors(Window);
				DrawPxActors(Window);
				DrawDeadBodys(Window);
				DrawItems(Window);
				DrawScatteredItems(Window);
				DrawOffscreenItemIndicators(Window);
				if (GameData.Config.ESP.Debug) DrawDebug(Window);

				DrawFOV();
			}

			if (!GameData.Global.Data.Radar.Main.bVisibility)
			{
				DrawFastItems(Window);
				DrawThrows(Window);
			}

			DrawOffscreenPlayerIndicators(Window);

			DrawRadarPlayers(Window);

			DrawEarlyWarning(Window);
		});

		for (const auto& Item : RenderDrawItems) {
			std::visit([&Window](const auto& value) {
				Window.draw(value);
			}, Item);
		}
		/*for (const auto& Item : RenderDrawItems) {
			std::visit([&Window](const auto& value) {
				if constexpr (std::is_same_v<std::decay_t<decltype(value)>, ShaderSprite>) {
					Window.draw(value.sprite, value.states);
				}
				else {
					Window.draw(value);
				}
			}, Item);
		}

		g_shaders.clear();*/

		if (!GameData.Global.Data.Radar.Main.bVisibility)
		{
			//uint64_t WeaponDataComponentFiring = mem.Read<uint64_t>(GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + 0x4c0);
			//auto CurrentFireMode = mem.Read<uint64_t>(WeaponDataComponentFiring + 0x180);
			//auto FireModeParams = mem.Read<uint64_t>(CurrentFireMode + 0x118);
			//if (Utils::ValidPtr(FireModeParams)) return;
			//auto VelocityThrowHigh = mem.Read<float>(FireModeParams + 0x1d8); // 高抛投掷速度
			//auto VelocityThrowLow = mem.Read<float>(FireModeParams + 0x1dc); // 低抛投掷速度
			//auto GravityScale = mem.Read<float>(FireModeParams + 0x1e0); // 重力缩放系数
			//auto Bounciness = mem.Read<float>(FireModeParams + 0x1f4); // 基础弹性
			//auto WallBounciness = mem.Read<float>(FireModeParams + 0x1f8); // 墙壁弹性
			//auto CeilingBounciness = mem.Read<float>(FireModeParams + 0x1fc); // 天花板弹性
			//auto Friction = mem.Read<float>(FireModeParams + 0x200); // 摩擦系数
			//auto BounceVelocityStopLimited = mem.Read<float>(FireModeParams + 0x204); // 弹跳停止的速度限制
			//auto ExplosionSeconds = mem.Read<float>(FireModeParams + 0x20c); // 爆炸延迟时间
			//auto ExplosionDurationSeconds = mem.Read<float>(FireModeParams + 0x2e8); // 爆炸持续时间
			//auto Gravity = mem.Read<float>(FireModeParams + 0x50 + 0x2c);
			////auto BulletCollisionComp = mem.Read<uint64_t>(ProjectileClass + 0x638);
			///*auto DrawActorPool = mem.Read<TArray<uint64_t>>(CurrentFireMode + 0x1d0);
			//auto PreviewActor = mem.Read<uint64_t>(CurrentFireMode + 0x200);
			//std::vector<FVector> DrawActorPools{};
			//for (auto& Item : DrawActorPool.GetVector())
			//{
			//	Utils::Log(4, "%p", Item);
			//}*/
			////std::cout << GName::GetNameByAddr(FireModeParams) << std::endl;
			//Utils::Log(4, "WeaponDataComponentFiring: 0x%llx 0x%llx 0x%llx", WeaponDataComponentFiring, CurrentFireMode, FireModeParams);
			//Utils::Log(4, "VelocityThrowHigh=%f", VelocityThrowHigh);
			//Utils::Log(4, "VelocityThrowLow=%f", VelocityThrowLow);
			//Utils::Log(4, "GravityScale=%f", GravityScale);
			//Utils::Log(4, "Bounciness=%f", Bounciness);
			//Utils::Log(4, "WallBounciness=%f", WallBounciness);
			//Utils::Log(4, "CeilingBounciness=%f", CeilingBounciness);
			//Utils::Log(4, "Friction=%f", Friction);
			//Utils::Log(4, "BounceVelocityStopLimited=%f", BounceVelocityStopLimited);
			//Utils::Log(4, "ExplosionSeconds=%f", ExplosionSeconds);
			//Utils::Log(4, "ExplosionDurationSeconds=%f", ExplosionDurationSeconds);
			//Utils::Log(4, "Gravity=%f", Gravity);
			//Utils::Log(4, "ThrowPerviewDynamicActor=%p", GameData.Global.Data.ThrowPerviewDynamicActor.Address);

			////GName::DebugActorNames(GameData.Global.Data.ThrowPerviewDynamicActor.Address, 0, 0x500);

			////Sleep(50);
			//return;
			DrawPlayers(Window);
		}

		//DrawSimulateGrenade(Window);
	}

	//inline bool SetFont(std::string Name = "Default.ttc")
	//{
	//	GameData.Config.Overlay.Enable = false;
	//	Sleep(100);
	//	bool r = Font.loadFromFile(std::format("Engine\\Resource\\Fonts\\{}", Name));
	//	Sleep(100);
	//	GameData.Config.Overlay.Enable = true;
	//	return r;
	//}

	inline void Render()
	{
		//HighResolutionTimer timer;
		//SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS);
		//SetProcessAffinityMask(GetCurrentProcess(), 0xFFFFFFFF);
		//SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_TIME_CRITICAL);
		//SetProcessWorkingSetSize(GetCurrentProcess(), -1, -1);

		auto FontPath = std::format("Engine\\Resource\\Fonts\\{}", GameData.Config.Overlay.Fonts[GameData.Config.Overlay.FontIndex]);

		if (!Font.loadFromFile(FontPath)) {
			GameData.Config.Overlay.FontIndex = 0;
			Utils::ForceDeleteFile(FontPath);
			if (!Font.loadFromFile("Engine\\Resource\\Fonts\\Default.ttc"))
			{
				return;
			}
		}

		//Font.setSmooth(true);

		sf::ContextSettings Settings;
		Settings.antialiasingLevel = GameData.Config.ESP.AntiAliasing;
		Settings.depthBits = GameData.Config.ESP.DepthBits;
		Settings.sRgbCapable = GameData.Config.Overlay.sRgbCapable;

		int WindowWidth = GameData.Config.Overlay.ScreenWidth;
		int WindowHeight = GameData.Config.Overlay.ScreenHeight;
		int WindowPosX = GameData.Config.Overlay.ScreenX;
		int WindowPosY = GameData.Config.Overlay.ScreenY;
		int FusionMode = GameData.Config.Overlay.FusionMode;
		bool VSync = GameData.Config.Overlay.VSync;
		int FontIndex = GameData.Config.Overlay.FontIndex;

		sf::Color ClearColor = sf::Color(0, 0, 0, 255);

		sf::RenderWindow OverlayWindow(sf::VideoMode(WindowWidth, WindowHeight), L"Overlay", sf::Style::None, Settings);
		
		if (!GameData.Config.ESP.LimitFPSStatus)
		{
			OverlayWindow.setVerticalSyncEnabled(FusionMode == 1 && !VSync ? false : true);
		}
		else
		{
			OverlayWindow.setFramerateLimit(GameData.Config.ESP.LimitFPS);
		}

		OverlayWindow.setPosition(sf::Vector2i(WindowPosX, WindowPosY));
		 
		HWND hWnd = OverlayWindow.getSystemHandle();

		//SetWindowDisplayAffinity(hWnd, WDA_EXCLUDEFROMCAPTURE);

		//SetWindowLong(hWnd, GWL_EXSTYLE, GetWindowLong(hWnd, GWL_EXSTYLE) | WS_EX_TOOLWINDOW);

		if (FusionMode == 0)
		{
			ClearColor = sf::Color(0, 0, 0, 0);

			DWM_BLURBEHIND blur;
			auto rgn = CreateRectRgn(0, 0, 1, 1);
			blur.dwFlags = DWM_BB_ENABLE | DWM_BB_BLURREGION;
			blur.fEnable = true;
			blur.fTransitionOnMaximized = true;
			blur.hRgnBlur = rgn;
			DwmEnableBlurBehindWindow(hWnd, &blur);

			SetWindowLong(hWnd, GWL_EXSTYLE, WS_EX_TRANSPARENT | WS_EX_LAYERED);
			SetLayeredWindowAttributes(hWnd, 0, 255, LWA_ALPHA);

			::SetWindowPos(hWnd, HWND_TOPMOST, WindowPosX, WindowPosY, WindowWidth, WindowHeight, SWP_SHOWWINDOW);

			SetForegroundWindow(GetDesktopWindow());
		}

		Throttler Throttlered;

		sf::Event Event;
		CameraData LastCamera;
		float LastWorldTimeSeconds = 0;
		float LastDeltaSeconds = 0;
		bool FusionModeInit = true;

		while (OverlayWindow.isOpen() && GameData.Config.Overlay.Enable) 
		{
			if (FusionModeInit)
			{
				SetForegroundWindow(GetDesktopWindow());
				FusionModeInit = false;
			}

			Throttlered.executeTask("UpdateOverlaySize", std::chrono::milliseconds(10), [&FontIndex, &Event, &WindowWidth, &WindowHeight, &WindowPosX, &WindowPosY, &OverlayWindow, &FusionMode, &FusionModeInit, &hWnd, &VSync]
			{
				while (OverlayWindow.pollEvent(Event)) {
					if (Event.type == sf::Event::Closed) {
						OverlayWindow.close();
					}
				}

				if (FontIndex != GameData.Config.Overlay.FontIndex)
				{
					OverlayWindow.close();
					//SetFont(GameData.Config.Overlay.Fonts[GameData.Config.Overlay.FontIndex]);
				}

				if (OverlayWindow.hasFocus())
				{
					SetForegroundWindow(GetDesktopWindow());
				}
			});

			DrawESP(OverlayWindow);
			OverlayWindow.display();
			OverlayWindow.clear(ClearColor);

			OverlayFPS.update();
		}
	}
}