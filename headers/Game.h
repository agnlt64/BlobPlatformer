#pragma once
#include "Player.h"
#include "Ground.h"
#include "Background.h"
#include <raylib.h>

struct Game
{
    Game();
    ~Game();

    void Update();
    void Draw();

    float timer;
    int maxFrames;

    Background background;
    Player player;
    Ground ground;
};
