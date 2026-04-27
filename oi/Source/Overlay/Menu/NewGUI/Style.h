#pragma once

#include <imgui/imgui.h>
#include <Common/Data.h>

namespace NewGUIStyle
{
    // 通用样式设置
    struct Global
    {
        inline static const float Rounding = 3.0f;    // 通用圆角大小
        inline static const float ChildWidth = 270.f;    // 通用圆角大小
        inline static const float ChildWidthSM = 251.f;    // 通用圆角大小
        inline static const ImColor Border = ImColor(45, 47, 49);    // 通用边框颜色
        inline static ImColor Active = ImColor(0, 0, 0);    // 通用激活颜色
        inline static const ImColor White = ImColor(245, 245, 255);    // 通用激活颜色
        inline static const ImColor WhiteTransparent = ImColor(255, 255, 255, 230);    // 通用激活颜色
        inline static const ImColor Transparent = ImColor(0, 0, 0, 0);
        inline static const ImColor Base = ImColor(40, 40, 40, 255);
        inline static const ImColor BaseText = ImColor(150, 150, 150, 255);
        inline static const ImColor BaseHover = ImColor(40, 40, 40, 200);
        inline static const ImColor BlackText = ImColor(10, 10, 10, 255);
    };

    struct Window
    {
        inline static const ImVec2 Size = { 1000, 633 };
        //inline static const ImColor Background = ImColor(15, 15, 15);
        inline static const ImColor Background = ImColor(15, 15, 15, 250);
        inline static const float Rounding = 5.0f;
        inline static const float Padding = 20.0f;
        inline static const float ChildPaddingX = 14.0f;
        inline static const float ChildPaddingY = 8.0f;
        inline static const float ChildOffsetX = 14.f;
        inline static const float ChildOffsetY = 99.f;
        inline static const float ChildNoSubOffsetY = 67.f;
        inline static const ImColor ChildBackground = ImColor(255, 255, 255, 5);
        inline static const ImColor ChildTitleBg = ImColor(25, 25, 25, 255);
    };

    struct Checkbox
    {
        inline static const ImColor Background = ImColor(32, 33, 35);       // 未选中的背景色
        inline static const ImColor HoverBackground = ImColor(32, 33, 35, 130);       // 未选中的背景色
        inline static ImColor Active = Global::Active;                // 选中时的蓝色
        inline static const ImColor ActiveBorder = Global::Active;          // 选中时的边框颜色
        inline static const ImColor CheckMark = ImColor(255, 255, 255);     // 对号的颜色
        inline static const float DefaultSpacing = 1.0f;                    // 复选框的默认上下间距
        inline static const float Size = 13.0f;                            // 复选框的大小
    };

    struct Slider
    {
        inline static const ImColor Background = ImColor(32, 33, 35);       // 滑动条背景色
        inline static ImColor Active = Global::Active;                // 已滑动部分的颜色
        inline static const ImColor Border = Global::Border;                // 边框颜色
        inline static const ImColor Text = ImColor(255, 255, 255);          // 标签文本颜色
        inline static const ImColor ValueText = ImColor(255, 255, 255);     // 数值默认颜色
        inline static const ImColor ValueTextActive = ImColor(255, 255, 255); // 数值激活颜色
        
        inline static const float Height = 6.0f;                            // 滑动条可见高度
        inline static const float HitboxExtension = 8.0f;                   // 上下各延伸的可点击区域
        inline static const float BorderThickness = 1.0f;                   // 边框粗细
        inline static const float DefaultSpacing = 5.0f;                    // 默认的文字和滑动条间距
        inline static const float VerticalSpacing = 1.0f;                   // 整体的上下间距
    };

    struct Child
    {
        inline static const ImColor Background = ImColor(0, 0, 0);       // 背景色
        inline static const ImColor Border = Global::Border;                // 边框颜色
        inline static const ImColor Text = ImColor(255, 255, 255);          // 标题文本颜色
        
        inline static const float BorderThickness = 1.0f;                   // 边框粗细
        inline static const float TitleSpacing = 5.0f;                      // 标题和内容的间距
        inline static const float Padding = 8.0f;                           // 内容内边距
    };

    struct ColorPicker
    {
        inline static const float Size = 12.0f;                            // 颜色选择器的大小
        inline static const float Rounding = 2.0f;                         // 颜色选择器的圆角
        inline static const ImColor Border = Global::Border;               // 边框颜色
        inline static const float BorderThickness = 1.0f;                  // 边框粗细
    };

    namespace Combo
    {
        constexpr float Height = 28.0f;
        constexpr float TextPadding = 8.0f;
        constexpr float BorderThickness = 1.0f;
        constexpr float ArrowSize = 6.0f;       // 箭头高度
        constexpr float ArrowWidth = 8.0f;     // 箭头宽度
        constexpr float ArrowThickness = 1.0f;  // 箭头线条粗细
        constexpr float LabelSpacing = 4.0f;    // 标签和选择框之间的间距

        const ImColor Background = ImColor(34, 34, 34);
        const ImColor Border = ImColor(48, 48, 48);
        const ImColor LabelText = Global::BaseText;    // 标题文本颜色
        const ImColor ItemText = ImColor(230, 230, 230);     // 选项文本颜色
        const ImColor Arrow = ImColor(150, 150, 150);        // 箭头颜色
        const ImColor PopupItemText = ImColor(150, 150, 150);       // 下拉框选项默认颜色
        const ImColor PopupItemSelectedText = ImColor(0, 87, 255);  // 下拉框选项选中颜色
    }

    struct Tab
    {
        //inline static const ImColor Background = ImColor(25, 25, 25);       // 选中时的背景色
        inline static ImColor Background = Global::Active;       // 选中时的下划线颜色
        inline static const ImColor GroupBackground = Global::Base;  // Tab组的背景色
        inline static const ImColor Text = Global::BaseText;         // 未选中的文字颜色
       // inline static const ImColor ActiveText = Global::Active;           // 选中时的文字颜色
        inline static const ImColor ActiveText = ImColor(255, 255, 255);           // 选中时的文字颜色
        inline static const ImColor HoverText = ImColor(255, 255, 255);    // 悬停时的文字颜色
        inline static const ImColor Hover = Global::BaseHover;          // 悬停时的背景色
        inline static const float Height = 28.0f;                          // Tab高度
        inline static const float Padding = 12.0f;                          // 文字左右内边距
        inline static const float Spacing = 0.0f;                         // Tab之间的间距
        inline static const float Rounding = 4.0f;                         // Tab圆角大小
        inline static const float LineThickness = 2.0f;                    // 选中标记线条粗细
        inline static const float LineWidth = 0.2f;                        // 选中标记线条宽度(相对于Tab宽度的比例)
    };

    struct SubTab
    {
        inline static const ImColor Background = ImColor(25, 25, 25);       // 选中时的背景色
        inline static const ImColor Text = ImColor(150, 150, 150);         // 未选中的文字颜色
        inline static const ImColor ActiveText = ImColor(255, 255, 255);   // 选中时的文字颜色
        inline static const ImColor Hover = ImColor(35, 35, 35);          // 悬停时的背景色
        inline static const float Height = 22.0f;                          // SubTab高度
        inline static const float Padding = 8.0f;                         // 文字左右内边距
        inline static const float Spacing = 0.0f;                          // SubTab之间的间距
        inline static const float Rounding = 5.0f;                         // 圆角大小
    };

    // 选择标签样式
    struct SelectTab
    {
        inline static const ImColor Background = ImColor(34, 34, 34);          // 背景颜色
        inline static const ImColor Border = Global::Border;                   // 边框颜色
        inline static const ImColor Text = ImColor(128, 128, 128);             // 未选中的文字颜色
        inline static const ImColor ActiveText = Global::White;                // 选中时的文字颜色
        inline static const ImColor HoverText = ImColor(180, 180, 180);        // 悬停时的文字颜色
        inline static const ImColor ActiveBackground = ImColor(42, 42, 42);    // 选中时的背景色
        inline static const float Height = 34.0f;                              // 标签高度
        inline static const float Padding = 10.0f;                             // 文字左右内边距
        inline static const float Spacing = 0.0f;                              // 标签之间的间距
        inline static const float Rounding = 5.0f;                             // 圆角大小（图片中没有圆角）
        inline static const float BorderThickness = 0.0f;                      // 边框粗细
        inline static const bool ShowSeparator = false;                         // 是否显示分隔线
        inline static const ImColor SeparatorColor = ImColor(60, 60, 60);      // 分隔线颜色
    };

    namespace Keybind {
        static const float Rounding = 2.0f;
        static const ImU32 Background = IM_COL32(32, 33, 35, 255);
        static const ImU32 OutlineBackground = IM_COL32(45, 47, 49, 255);
        static const ImU32 ActiveText = IM_COL32(255, 255, 255, 255);
        static const ImU32 Text = IM_COL32(200, 200, 200, 255);
        static const ImU32 HoveredText = IM_COL32(200, 200, 200, 255);
    }

    // 移动盒子样式
    struct MoveBox
    {
        inline static const ImColor Background = ImColor(34, 34, 34);       // 背景颜色
        inline static const ImColor PreviewBackground = ImColor(50, 50, 50); // 预览窗口背景颜色
        inline static const ImColor PreviewHoveredBackground = Global::White; // 预览窗口悬停背景颜色
        inline static const ImColor Border = ImColor(0, 0, 0, 0);                // 边框颜色
        inline static const ImColor Text = Global::BaseText;                // 文本颜色
        inline static const float Height = 30.0f;                           // 默认高度
        inline static const float Rounding = 3.0f;                          // 圆角大小
        inline static const float BorderThickness = 0.0f;                   // 边框粗细
    };
}