#include "ArmorEffect.h"
#include <algorithm>

// 静态成员初始化
sf::Shader ArmorEffect::armorFragmentShader;
sf::Clock ArmorEffect::globalClock;

const std::string ArmorEffect::fragmentShaderCode = R"(
    uniform sampler2D texture;
    uniform float armorPercent;  // 护甲百分比 (0.0 - 1.0)
    uniform float time;          // 时间
    
    // 噪声函数
    float noise(vec2 st) {
        vec2 i = floor(st);
        vec2 f = fract(st);
        
        // 平滑插值
        vec2 u = f * f * (3.0 - 2.0 * f);
        
        float a = fract(sin(dot(i, vec2(12.9898, 78.233))) * 43758.5453);
        float b = fract(sin(dot(i + vec2(1.0, 0.0), vec2(12.9898, 78.233))) * 43758.5453);
        float c = fract(sin(dot(i + vec2(0.0, 1.0), vec2(12.9898, 78.233))) * 43758.5453);
        float d = fract(sin(dot(i + vec2(1.0, 1.0), vec2(12.9898, 78.233))) * 43758.5453);
        
        return mix(mix(a, b, u.x), mix(c, d, u.x), u.y);
    }
    
    // 分形噪声
    float fbm(vec2 st) {
        float value = 0.0;
        float amplitude = 1.0;
        float frequency = 1.0;
        
        // 添加多个噪声层，创建更复杂的纹理
        for (int i = 0; i < 4; i++) {
            value += amplitude * noise(st * frequency);
            frequency *= 2.17;
            amplitude *= 0.5;
        }
        
        return value;
    }
    
    void main()
    {
        // 获取纹理坐标
        vec2 texCoord = gl_TexCoord[0].xy;
        
        // 获取原始纹理
        vec4 color = texture2D(texture, texCoord);
        
        // 满血时直接显示原图
        if (armorPercent > 0.95) {
            gl_FragColor = color * gl_Color;
            return;
        }
        
        // 计算到中心的距离
        vec2 center = vec2(0.5, 0.5);
        float dist = distance(texCoord, center);
        
        // 护甲损伤程度 (0-1)
        float damage = 1.0 - armorPercent;
        
        // 根据血量划分破损阶段，每10%一个阶段
        float stage;
        float holeSize;
        
        if (damage < 0.1) {         // 90%-95% 血量
            stage = 1.0;
            holeSize = 0.08;
        } 
        else if (damage < 0.2) {    // 80%-90% 血量
            stage = 2.0;
            holeSize = 0.15;
        } 
        else if (damage < 0.3) {    // 70%-80% 血量
            stage = 3.0;
            holeSize = 0.22;
        } 
        else if (damage < 0.4) {    // 60%-70% 血量
            stage = 4.0;
            holeSize = 0.3;
        } 
        else if (damage < 0.5) {    // 50%-60% 血量
            stage = 5.0;
            holeSize = 0.37;
        } 
        else if (damage < 0.6) {    // 40%-50% 血量
            stage = 6.0;
            holeSize = 0.45;
        } 
        else if (damage < 0.7) {    // 30%-40% 血量
            stage = 7.0;
            holeSize = 0.53;
        } 
        else if (damage < 0.8) {    // 20%-30% 血量
            stage = 8.0;
            holeSize = 0.6;
        } 
        else if (damage < 0.9) {    // 10%-20% 血量
            stage = 9.0;
            holeSize = 0.67;
        } 
        else {                      // 0%-10% 血量
            stage = 10.0;
            holeSize = 0.75;
        }
        
        // 生成复杂的分形噪声，创建不规则破洞
        float noiseValue = fbm(texCoord * (6.0 + stage * 1.0) + time * 0.01);
        
        // 中心权重 - 使破洞从中心向外扩散
        float centerWeight = smoothstep(0.5, 0.0, dist);
        
        // 计算破洞阈值 - 结合破损阶段、中心权重和基础孔洞大小
        float holeThreshold = holeSize + centerWeight * (stage / 12.0);
        
        // 加入随机的大型裂缝
        if (damage > 0.2) {
            float crackNoise = fbm(texCoord * 3.0 + vec2(time * 0.02, 0.0));
            float crackIntensity = (damage - 0.2) * 1.5; // 增强裂缝效果
            
            // 添加几条主要裂缝
            if (crackNoise > 0.75 && crackNoise < 0.78) {
                holeThreshold += crackIntensity * 0.5;
            }
        }
        
        // 判断是否创建破洞 - 使条件更加明确
        if (noiseValue < holeThreshold) {
            // 创建破洞
            discard;
        } else {
            // 显示正常纹理
            gl_FragColor = color * gl_Color;
        }
    }
)";

bool ArmorEffect::InitializeShader()
{
    static bool initialized = false;
    if (!initialized)
    {
        initialized = true;
        if (!armorFragmentShader.loadFromMemory(fragmentShaderCode, sf::Shader::Fragment))
        {
            // 着色器加载失败
            return false;
        }
    }
    return true;
}

void ArmorEffect::DrawArmorWithFragmentEffect(
    sf::RenderWindow& window,
    sf::Sprite& sprite,
    float currentHealth,
    float maxHealth,
    float fragmentationIntensity)
{
    if (!InitializeShader())
    {
        // 如果着色器未能初始化，使用普通方式绘制
        window.draw(sprite);
        return;
    }

    // 计算护甲百分比（0-1）
    float armorPercent = std::max(0.0f, std::min(1.0f, currentHealth / maxHealth));

    // 设置着色器参数
    armorFragmentShader.setUniform("texture", sf::Shader::CurrentTexture);
    armorFragmentShader.setUniform("armorPercent", armorPercent);
    //armorFragmentShader.setUniform("fragmentationIntensity", fragmentationIntensity);
    armorFragmentShader.setUniform("time", globalClock.getElapsedTime().asSeconds());

    // 使用着色器渲染
    sf::RenderStates states;
    states.shader = &armorFragmentShader;
    window.draw(sprite, states);
}