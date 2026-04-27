#pragma once

#include <SFML/Graphics.hpp>

class RoundedRectangleShape : public sf::Shape {
private:
    sf::Vector2f size;
    float radius;
    unsigned int cornerPoints;

public:
    RoundedRectangleShape(const sf::Vector2f& size, float radius, unsigned int cornerPoints = 30)
        : size(size), radius(radius), cornerPoints(cornerPoints) {
        update();
    }

    void setSize(const sf::Vector2f& newSize) {
        size = newSize;
        update();
    }

    const sf::Vector2f& getSize() const {
        return size;
    }

    void setRadius(float newRadius) {
        radius = newRadius;
        update();
    }

    float getRadius() const {
        return radius;
    }

    virtual std::size_t getPointCount() const {
        return cornerPoints * 4;
    }

    virtual sf::Vector2f getPoint(std::size_t index) const {
        if (index >= getPointCount())
            return sf::Vector2f(0, 0);

        float deltaAngle = 90.0f / (cornerPoints - 1);
        unsigned int corner = index / cornerPoints;
        unsigned int cornerIndex = index % cornerPoints;

        float angle = deltaAngle * cornerIndex + corner * 90;
        angle = angle * 3.141592654f / 180.0f;

        sf::Vector2f center;
        switch (corner) {
        case 0: center = sf::Vector2f(size.x - radius, radius); break;
        case 1: center = sf::Vector2f(radius, radius); break;
        case 2: center = sf::Vector2f(radius, size.y - radius); break;
        case 3: center = sf::Vector2f(size.x - radius, size.y - radius); break;
        }

        return sf::Vector2f(
            center.x + std::cos(angle) * radius,
            center.y - std::sin(angle) * radius
        );
    }
};