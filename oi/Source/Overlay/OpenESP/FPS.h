#pragma once

#include <SFML/Graphics.hpp>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <string>

class FPS
{
public:
    FPS() : mFrame(0), mFps(0.0) {}
    const double get() const { return mFps; }

private:
    unsigned int mFrame;
    double mFps;
    sf::Clock mClock;

public:
    void update()
    {
        if (mClock.getElapsedTime().asSeconds() >= 1.0)
        {
            mFps = static_cast<double>(mFrame) / mClock.getElapsedTime().asSeconds();
            if (GameData.Config.Window.RenderModel == 1) {
                mFps *= 10.f;
            }
            /*else if (GameData.Config.Overlay.UseThread) {
                mFps /= 1000.f;
                mFps *= 2.f;
            }*/
            mFrame = 0;
            mClock.restart();
        }

        ++mFrame;
    }

    std::string getFormattedFPS() const
    {
        std::stringstream ss;
        ss << std::fixed << std::setprecision(2) << mFps;
        return ss.str();
    }
};
