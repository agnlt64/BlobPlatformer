#pragma once
#include <raylib.h>
#include "TextureManager.h"

struct Player
{
    Player();
    ~Player();

    int jumps;
    KeyboardKey lastKeyPressed;
    float x, y, speed, jumpForce, width, height;
    Texture2D texture;

    void DrawAndAnimate(Texture2D tex, Rectangle src, Vector2 pos, Color tint);
    void Update();
    void Reset();
    void Jump();
    void Idle();
    void MoveRight();
    void MoveLeft();
    void Stop();
};