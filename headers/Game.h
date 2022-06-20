#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Ground.h"
#include "Background.h"
#include <raylib.h>

#define WIDTH 800
#define HEIGHT 600

class Game
{
public:
    Game();
    ~Game();

    void Update();
    void Draw();
    void Init();
    void Setup();

    float timer;
    int maxFrames;

    Background background;
    Player player;
    Ground ground;
};

#endif /*GAME_H*/