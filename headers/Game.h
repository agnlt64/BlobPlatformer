#pragma once
#include "Player.h"
#include "Ground.h"
#include <raylib.h>

struct Game
{
    Game();
    ~Game();

    void Update();
    void Draw();

    float timer;
    int maxFrames, frame;

    Player player;
    Ground ground;
};
