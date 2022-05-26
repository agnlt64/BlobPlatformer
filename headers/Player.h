#pragma once
#include <raylib.h>
#include "TextureManager.h"

struct Player
{
    Player();
    ~Player();

    int jumps, maxJumps, frame, timer;
    float x, y, speed, jumpForce, width, height, defaultX, defaultY;
    
    KeyboardKey lastKeyPressed;
    Texture2D texture;

    void DrawAndAnimate(Texture2D tex, Rectangle src, Vector2 pos, Color tint);
    void Update();
    void Reset();
    void JumpLeft();
    void JumpRight();
    void Idle();
    void MoveRight();
    void MoveLeft();
    void Stop();
    void EnableDoubleJump();
    void DisableDoubleJump();
    void CheckTimer();
};