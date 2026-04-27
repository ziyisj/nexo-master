#pragma once

#include <SFML/Graphics.hpp>
#include <windows.h>
#include "common/Data.h"
#include "common/VectorHelper.h"
#include <imgui/imgui.h>
#include "RoundedRectangleShape.h"

class NewHealthBar
{
private:
	using TimePoint_ = std::chrono::steady_clock::time_point;
private:
	const int ShowBackUpHealthDuration = 500;
	float MaxHealth = 0.f;
	float CurrentHealth = 0.f;
	float LastestBackupHealth = 0.f;
	sf::Vector2f RectPos{};
	sf::Vector2f RectSize{};
	bool InShowBackupHealth = false;
	TimePoint_ BackupHealthTimePoint{};
	
	// 圆角缓存相关
	mutable sf::ConvexShape cachedRoundedShape;
	mutable sf::Vector2f cachedSize{-1, -1};
	mutable float cachedRadius = -1.f;
	mutable bool shapeNeedsUpdate = true;
	
public:
	NewHealthBar() {}
	void DrawHealthBar_Horizontal(sf::RenderWindow& Window, float MaxHealth, float CurrentHealth, sf::Vector2f Pos, sf::Vector2f Size, sf::Color UseColor, bool InShowBackupHealth = true, float cornerRadius = 2.0f);
	void DrawHealthBar_Vertical(sf::RenderWindow& Window, float MaxHealth, float CurrentHealth, sf::Vector2f Pos, sf::Vector2f Size, sf::Color UseColor, bool InShowBackupHealth = true);
private:
	sf::Color Mix(sf::Color Col_1, sf::Color Col_2, float t);
	sf::Color FirstStageColor = sf::Color(96, 246, 113, 210);
	sf::Color SecondStageColor = sf::Color(247, 214, 103, 210);
	sf::Color ThirdStageColor = sf::Color(255, 95, 95, 210);
	sf::Color BackupHealthColor = sf::Color(255, 255, 255, 210);
	sf::Color FrameColor = sf::Color(45, 45, 45, 210);
	sf::Color BackGroundColor = sf::Color(90, 90, 90, 0);
	
	// 优化的圆角方法
	sf::ConvexShape CreateOptimizedRoundedRect(float width, float height, float radius) const;
	void UpdateCachedShape(float width, float height, float radius) const;
	sf::ConvexShape CreateRoundedRect(float width, float height, float radius, sf::Vector2f rectPos, const sf::Color& fillColor, const sf::Color& outlineColor, float outlineThickness);
};

sf::ConvexShape NewHealthBar::CreateRoundedRect(float width, float height, float radius, sf::Vector2f rectPos, const sf::Color& fillColor, const sf::Color& outlineColor, float outlineThickness)
{
	sf::ConvexShape roundedRect;
	roundedRect.setPointCount(30); // 设置圆角矩形的点数

	// 计算圆角矩形的顶点
	for (int i = 0; i < 30; ++i)
	{
		float angle = i * 2 * 3.1415926f / 30;
		float x = radius * std::cos(angle);
		float y = radius * std::sin(angle);

		if (i < 8) // 左上角
			roundedRect.setPoint(i, sf::Vector2f(radius + x, radius + y));
		else if (i < 15) // 右上角
			roundedRect.setPoint(i, sf::Vector2f(width - radius + x, radius + y));
		else if (i < 22) // 右下角
			roundedRect.setPoint(i, sf::Vector2f(width - radius + x, height - radius + y));
		else // 左下角
			roundedRect.setPoint(i, sf::Vector2f(radius + x, height - radius + y));
	}

	roundedRect.setFillColor(fillColor); // 设置填充颜色
	roundedRect.setOutlineColor(outlineColor); // 设置边框颜色
	roundedRect.setOutlineThickness(outlineThickness); // 设置边框宽度
	roundedRect.setPosition(rectPos); // 设置位置

	return roundedRect;
}

// 高性能圆角形状缓存更新
void NewHealthBar::UpdateCachedShape(float width, float height, float radius) const
{
	if (cachedSize.x == width && cachedSize.y == height && cachedRadius == radius && !shapeNeedsUpdate)
		return;

	cachedSize = sf::Vector2f(width, height);
	cachedRadius = radius;
	shapeNeedsUpdate = false;

	// 优化：使用更少的点数来创建圆角，提高性能
	const int cornerPoints = 6; // 每个角6个点，总共24个点
	const int totalPoints = cornerPoints * 4;
	
	cachedRoundedShape.setPointCount(totalPoints);

	// 限制圆角半径
	const float maxRadius = std::min(width * 0.5f, height * 0.5f);
	const float actualRadius = std::min(radius, maxRadius);

	// 预计算角度增量
	const float angleStep = (3.1415926f * 0.5f) / (cornerPoints - 1);

	int pointIndex = 0;

	// 左上角 (从右到下)
	for (int i = 0; i < cornerPoints; ++i) {
		float angle = i * angleStep;
		float x = actualRadius - actualRadius * std::cos(angle);
		float y = actualRadius - actualRadius * std::sin(angle);
		cachedRoundedShape.setPoint(pointIndex++, sf::Vector2f(x, y));
	}

	// 右上角 (从上到左)
	for (int i = 0; i < cornerPoints; ++i) {
		float angle = i * angleStep;
		float x = width - actualRadius + actualRadius * std::sin(angle);
		float y = actualRadius - actualRadius * std::cos(angle);
		cachedRoundedShape.setPoint(pointIndex++, sf::Vector2f(x, y));
	}

	// 右下角 (从右到上)
	for (int i = 0; i < cornerPoints; ++i) {
		float angle = i * angleStep;
		float x = width - actualRadius + actualRadius * std::cos(angle);
		float y = height - actualRadius + actualRadius * std::sin(angle);
		cachedRoundedShape.setPoint(pointIndex++, sf::Vector2f(x, y));
	}

	// 左下角 (从下到右)
	for (int i = 0; i < cornerPoints; ++i) {
		float angle = i * angleStep;
		float x = actualRadius - actualRadius * std::sin(angle);
		float y = height - actualRadius + actualRadius * std::cos(angle);
		cachedRoundedShape.setPoint(pointIndex++, sf::Vector2f(x, y));
	}
}

// 创建优化的圆角矩形
sf::ConvexShape NewHealthBar::CreateOptimizedRoundedRect(float width, float height, float radius) const
{
	UpdateCachedShape(width, height, radius);
	return cachedRoundedShape;
}

sf::Color NewHealthBar::Mix(sf::Color SFCol_1, sf::Color SFCol_2, float t) {
	ImColor Col_1 = ImColor(SFCol_1.r, SFCol_1.g, SFCol_1.b, SFCol_1.a);
	ImColor Col_2 = ImColor(SFCol_2.r, SFCol_2.g, SFCol_2.b, SFCol_2.a);

	ImColor Col;
	Col.Value.x = t * Col_1.Value.x + (1 - t) * Col_2.Value.x;
	Col.Value.y = t * Col_1.Value.y + (1 - t) * Col_2.Value.y;
	Col.Value.z = t * Col_1.Value.z + (1 - t) * Col_2.Value.z;
	Col.Value.w = Col_1.Value.w;

	ImVec4 ColValue = Col;

	return { static_cast<sf::Uint8>(std::round(ColValue.x * 255.f)), static_cast<sf::Uint8>(std::round(ColValue.y * 255.f)), static_cast<sf::Uint8>(std::round(ColValue.z * 255.f)), static_cast<sf::Uint8>(std::round(ColValue.w * 255.f)) };
}

void NewHealthBar::DrawHealthBar_Horizontal(sf::RenderWindow& Window, float MaxHealth, float CurrentHealth, sf::Vector2f Pos, sf::Vector2f Size, sf::Color UseColor, bool ShowBackupHealth, float cornerRadius)
{
	// 快速更新基础属性
	this->MaxHealth = MaxHealth;
	this->CurrentHealth = CurrentHealth;
	this->RectPos = Pos;
	this->RectSize = Size;

	// 预计算共用值
	const float proportion = CurrentHealth / MaxHealth;
	const float width = RectSize.x * proportion;

	// 直接确定颜色，避免多重判断
	sf::Color color = UseColor.a != 0 ? UseColor :
		proportion > 0.7f ? FirstStageColor :
		proportion > 0.35f ? SecondStageColor :
		ThirdStageColor;

	// 备用血量显示（圆角版本）
	if (ShowBackupHealth && LastestBackupHealth != CurrentHealth)
	{
		if (LastestBackupHealth == 0 || LastestBackupHealth < CurrentHealth)
		{
			LastestBackupHealth = CurrentHealth;
		}
		else
		{
			if (!InShowBackupHealth)
			{
				BackupHealthTimePoint = std::chrono::steady_clock::now();
				InShowBackupHealth = true;
			}

			auto currentTime = std::chrono::steady_clock::now();
			auto elapsedMs = std::chrono::duration_cast<std::chrono::milliseconds>(
				currentTime - BackupHealthTimePoint).count();

			if (elapsedMs > ShowBackUpHealthDuration)
			{
				LastestBackupHealth = CurrentHealth;
				InShowBackupHealth = false;
			}
			else if (InShowBackupHealth)
			{
				const float progress = elapsedMs / static_cast<float>(ShowBackUpHealthDuration);
				const float backupWidth = LastestBackupHealth / MaxHealth * RectSize.x -
					(LastestBackupHealth / MaxHealth * RectSize.x - width) * progress;

				// 使用圆角备用血条
				if (cornerRadius > 0.0f && backupWidth > cornerRadius * 2)
				{
					sf::ConvexShape backupBar = CreateOptimizedRoundedRect(backupWidth, RectSize.y, cornerRadius);
					backupBar.setPosition(RectPos);
					backupBar.setFillColor(sf::Color(
						BackupHealthColor.r,
						BackupHealthColor.g,
						BackupHealthColor.b,
						static_cast<sf::Uint8>((1.0f - 0.95f * progress) * 255)
					));
					Window.draw(backupBar);
				}
				else
				{
					// 宽度太小时使用普通矩形
					sf::RectangleShape backupBar({ backupWidth, RectSize.y });
					backupBar.setPosition(RectPos);
					backupBar.setFillColor(sf::Color(
						BackupHealthColor.r,
						BackupHealthColor.g,
						BackupHealthColor.b,
						static_cast<sf::Uint8>((1.0f - 0.95f * progress) * 255)
					));
					Window.draw(backupBar);
				}
			}
		}
	}

	// 主血条（圆角版本）
	if (cornerRadius > 0.0f && width > cornerRadius * 2)
	{
		sf::ConvexShape rectFilled = CreateOptimizedRoundedRect(width, RectSize.y, cornerRadius);
		rectFilled.setFillColor(color);
		rectFilled.setPosition(RectPos);
		Window.draw(rectFilled);
	}
	else
	{
		// 宽度太小时使用普通矩形
		sf::RectangleShape rectFilled({ width, RectSize.y });
		rectFilled.setFillColor(color);
		rectFilled.setPosition(RectPos);
		Window.draw(rectFilled);
	}

	// 边框（圆角版本）
	if (cornerRadius > 0.0f)
	{
		sf::ConvexShape rect = CreateOptimizedRoundedRect(RectSize.x, RectSize.y, cornerRadius);
		rect.setFillColor(sf::Color::Transparent);
		rect.setOutlineColor(FrameColor);
		rect.setOutlineThickness(1);
		rect.setPosition(RectPos);
		Window.draw(rect);
	}
	else
	{
		// 无圆角时使用普通矩形
		sf::RectangleShape rect(RectSize);
		rect.setFillColor(sf::Color::Transparent);
		rect.setOutlineColor(FrameColor);
		rect.setOutlineThickness(1);
		rect.setPosition(RectPos);
		Window.draw(rect);
	}
}

void NewHealthBar::DrawHealthBar_Vertical(sf::RenderWindow& Window, float MaxHealth, float CurrentHealth, sf::Vector2f Pos, sf::Vector2f Size, sf::Color UseColor, bool ShowBackupHealth)
{
	auto InRange = [&](float value, float min, float max) -> bool
	{
		return value > min && value <= max;
	};

	this->MaxHealth = MaxHealth;
	this->CurrentHealth = CurrentHealth;
	this->RectPos = Pos;
	this->RectSize = Size;

	float Proportion = CurrentHealth / MaxHealth;
	float Height = RectSize.y * Proportion;
	sf::Color Color;
	float Rounding = 1.0f;

	float Color_Lerp_t = pow(Proportion, Rounding / 2);
	if (InRange(Proportion, 0.7, 1))
		Color = FirstStageColor;
	else if (InRange(Proportion, 0.35, 0.7))
		Color = SecondStageColor;
	else
		Color = ThirdStageColor;

	if (ShowBackupHealth)
	{
		if (LastestBackupHealth == 0
			|| LastestBackupHealth < CurrentHealth)
			LastestBackupHealth = CurrentHealth;

		if (LastestBackupHealth != CurrentHealth)
		{
			if (!InShowBackupHealth)
			{
				BackupHealthTimePoint = std::chrono::steady_clock::now();
				InShowBackupHealth = true;
			}

			std::chrono::steady_clock::time_point CurrentTime = std::chrono::steady_clock::now();
			if (CurrentTime - BackupHealthTimePoint > std::chrono::milliseconds(ShowBackUpHealthDuration))
			{
				LastestBackupHealth = CurrentHealth;
				InShowBackupHealth = false;
			}

			if (InShowBackupHealth)
			{
				float BackupHealthHeight = LastestBackupHealth / MaxHealth * RectSize.y;
				float BackupHealthColorAlpha = 1 - 0.95 * (std::chrono::duration_cast<std::chrono::milliseconds>(CurrentTime - BackupHealthTimePoint).count() / (float)ShowBackUpHealthDuration);
				sf::Color BackupHealthColorTemp = BackupHealthColor;
				BackupHealthColorTemp.a = BackupHealthColorAlpha * 255;
				float BackupHealthHeight_Lerp = 1 * (std::chrono::duration_cast<std::chrono::milliseconds>(CurrentTime - BackupHealthTimePoint).count() / (float)ShowBackUpHealthDuration);
				BackupHealthHeight_Lerp *= (BackupHealthHeight - Height);
				BackupHealthHeight -= BackupHealthHeight_Lerp;

				sf::RectangleShape RectangleBackupHealth({ RectSize.x, RectSize.y - BackupHealthHeight });
				RectangleBackupHealth.setFillColor(BackupHealthColorTemp);
				RectangleBackupHealth.setPosition(RectPos);
				Window.draw(RectangleBackupHealth);
			}
		}
	}

	if (UseColor != sf::Color(0, 0, 0, 0))
	{
		Color = UseColor;
	}

	sf::RectangleShape RectFilled({ RectSize.x, Height });
	RectFilled.setFillColor(Color);
	RectFilled.setPosition({ RectPos.x, RectPos.y + RectSize.y - Height });
	Window.draw(RectFilled);

	sf::RectangleShape Rect({ RectSize.x, RectSize.y });
	Rect.setFillColor(sf::Color::Transparent);
	Rect.setOutlineColor(FrameColor);
	Rect.setOutlineThickness(1);
	Rect.setPosition(RectPos);
	Window.draw(Rect);
}

