#pragma once
#include <raylib.h>

struct Player
{
    Player();
    ~Player();

    int jumps;
    float x, y, speed, jumpForce, width, height;
    Rectangle srcRect;
    Vector2 defaultPos;
    Texture2D texture;

    void Draw(Texture2D tex, Rectangle src, Vector2 pos, Color tint);
    void Update();
    void Reset();
    void Jump();
    void MoveRight();
    void MoveLeft();
};