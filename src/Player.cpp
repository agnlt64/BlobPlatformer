#include "../headers/Player.h"

Player::Player()
{
    texture = LoadTexture("assets/player.png");
    width = texture.width / 3;
    height = texture.height / 2;
    srcRect = {0, 0, width, height};
    defaultPos = {0, 0};
    jumps = 0;
    x = 32.0f;
    y = 32.0f;
    speed = 10.0f;
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
     
}

void Player::MoveRight()
{
    x += GetFrameTime() * speed;
}

void Player::Reset()
{

}

void Player::Update()
{

}