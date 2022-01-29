//
// Created by Beercan on 28/01/2022.
//

#ifndef RETRO_BRICK_GAME_BACKGROUNDRAW_H
#define RETRO_BRICK_GAME_BACKGROUNDRAW_H

#include <array>
#include "raylib.h"
#include "RawBrick.h"

class BackgroundRaw {

public:

    bool active{true};

    explicit BackgroundRaw(Vector2 position);

    void handleMovement(float deltaTime);

    Rectangle getGameView();

    void draw();

private:

    static const int width{10};
    static const int height{20};

    const Vector2 position;
    const Rectangle gameView;

    std::array<std::array<RawBrick, width>, height> rawBricks;

    const float movementThreshold{0.500f}; // 500ms
    float movementTime{};

    void calculateBrickPositions();

};

#endif //RETRO_BRICK_GAME_BACKGROUNDRAW_H
