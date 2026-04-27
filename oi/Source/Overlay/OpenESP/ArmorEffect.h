#pragma once

#include <SFML/Graphics.hpp>
#include <string>

class ArmorEffect
{
public:
    // 初始化着色器（在程序开始时调用一次）
    static bool InitializeShader();

    // 渲染带碎甲效果的精灵
    static void DrawArmorWithFragmentEffect(
        sf::RenderWindow& window,
        sf::Sprite& sprite,
        float currentHealth,
        float maxHealth,
        float fragmentationIntensity = 30.0f);  // 碎片化强度参数

private:
    static sf::Shader armorFragmentShader;
    static sf::Clock globalClock;

    // 碎片效果着色器代码
    static const std::string fragmentShaderCode;
};