//
// Created by Beercan on 11/12/2021.
//

#ifndef RETRO_BRICK_GAME_BRICK_H
#define RETRO_BRICK_GAME_BRICK_H

#include "raylib.h"
#include "raymath.h"

class Brick {

public:

    explicit Brick(float rotation, const Vector2 &position);

    virtual void draw() = 0;

    // Sizes
    static const int scale{2};
    static const int size{6};
    static const int gap{1};
    static const int offset{size + gap};

    // Movement
    constexpr static const Vector2 right{(size + gap) * scale, 0.0f};
    constexpr static const Vector2 left{right.x * -1.0f, right.y * -1.0f};
    constexpr static const Vector2 down{0.0f, (size + gap) * scale};
    constexpr static const Vector2 up{down.x * -1.0f, down.y * -1.0f};

    float rotation;
    Vector2 position;

};

void DrawBrick(Texture texture, Rectangle source, Vector2 position, float scale, float rotation, Color tint);

#endif //RETRO_BRICK_GAME_BRICK_H
