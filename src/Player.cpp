#include "../headers/Player.h"

Player::Player()
{
    texture = LoadTexture("assets/player.png");
    width = texture.width / 3;
    height = texture.height / 2;
    x = 0.0f;
    y = 543 - height;
    jumps = 0;
    speed = 100.0f;
    jumpForce = 100.0f;
}

Player::~Player()
{
    UnloadTexture(texture);
}

void Player::Draw(Texture2D tex, Rectangle src, Vector2 pos, Color tint)
{
    DrawTextureRec(tex, src, pos, tint);
}

void Player::MoveLeft()
{
    x -= GetFrameTime() * speed;
}

void Player::MoveRight()
{
    x += GetFrameTime() * speed;
}

void Player::Jump()
{
    y -= jumpForce;
    jumps++;
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
    else if (IsKeyDown(KEY_SPACE) and jumps < 1)
    {
        Jump();
    }
    else if (IsKeyDown(KEY_R))
    {
        Reset();
    }

    if(x < 0)
    {
        Stop();
    }
    
}