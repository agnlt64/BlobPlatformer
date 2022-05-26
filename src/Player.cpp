#include "../headers/Player.h"

Player::Player()
{
    texture = LoadTexture("assets/player.png");
    width = texture.width / 3;
    height = texture.height / 3;
    x = 0.0f;
    y = 536 - height;
    jumps = 0;
    maxJumps = 1;
    speed = 130.0f;
    jumpForce = 100.0f;
    lastKeyPressed = KEY_RIGHT;
}

Player::~Player()
{
    UnloadTexture(texture);
}

void Player::DrawAndAnimate(Texture2D tex, Rectangle src, Vector2 pos, Color tint)
{
    TextureManager::Draw(tex, src, pos, tint);
}

void Player::MoveLeft()
{
    x -= GetFrameTime() * speed;
    DrawAndAnimate(texture, Rectangle{width, height, width, height}, Vector2{x, y}, RAYWHITE);
    lastKeyPressed = KEY_LEFT;
}

void Player::MoveRight()
{
    x += GetFrameTime() * speed;
    DrawAndAnimate(texture, Rectangle{width, 0, width, height}, Vector2{x, y}, RAYWHITE);
    lastKeyPressed = KEY_RIGHT;
}

void Player::Idle()
{
    if (lastKeyPressed == KEY_RIGHT)
    {
        TextureManager::Draw(texture, Rectangle{width, 0, width, height}, Vector2{x, y}, RAYWHITE);
    }
    else if (lastKeyPressed == KEY_LEFT)
    {
        DrawAndAnimate(texture, Rectangle{width, height, width, height}, Vector2{x, y}, RAYWHITE);
    }
}

void Player::JumpRight()
{
    // DrawAndAnimate(texture, Rectangle{width / 3, height / 6, width, height}, Vector2{x, y}, RAYWHITE);
    y -= jumpForce;
    jumps++;
}

void Player::JumpLeft()
{
    // DrawAndAnimate(texture, Rectangle{width / 4, height / 6, width, height}, Vector2{x, y}, RAYWHITE);
    y -= jumpForce;
    jumps++;
}

void Player::EnableDoubleJump()
{
    maxJumps = 2;
}

void Player::DisableDoubleJump()
{
    maxJumps = 1;
}

void Player::Stop()
{
    x = 0.0f;
    x *= -1;
}

void Player::Reset()
{
    x = 0.0f;
    y = 543 - height;
    jumps = 0;
}

void Player::Update()
{
    if(IsKeyDown(KEY_RIGHT) or IsKeyDown(KEY_D))
    {
        MoveRight();
    }
    else if (IsKeyDown(KEY_LEFT) or IsKeyDown(KEY_A))
    {
        MoveLeft();
    }
    else if (IsKeyDown(KEY_SPACE) and jumps < maxJumps and lastKeyPressed == KEY_LEFT)
    {
        JumpLeft();
    }
    else if (IsKeyDown(KEY_SPACE) and jumps < maxJumps and lastKeyPressed == KEY_RIGHT)
    {
        JumpRight();
    }
    
    else if (IsKeyDown(KEY_R))
    {
        Reset();
        Idle();
    }
    else if (IsKeyDown(KEY_J))
    {
        EnableDoubleJump();
        Idle();
    }
    else if (IsKeyDown(KEY_E))
    {
        DisableDoubleJump();
        Idle();
    }
    else
    {
        Idle();
    }

    if(x < 0)
    {
        Stop();
    }
    
}