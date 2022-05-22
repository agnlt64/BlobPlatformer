#include "../headers/Player.h"

Player::Player()
{
    jumps = 0;
    x = width;
    y = 32.0f;
    width = texture.width / 3;
    height = texture.height;
    speed = 100.0f;
}

Player::~Player()
{
    UnloadTexture(texture);
}

void Player::Draw(Texture2D tex, Rectangle src, Vector2 pos, Color tint)
{

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