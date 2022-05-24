#include "../headers/Background.h"

Background::Background()
{
    texture = LoadTexture("assets/background.png");
    width = texture.width;
    height = texture.height;
    x = 0.0f;
    y = 0.0f;
}

Background::~Background()
{
    UnloadTexture(texture);
}

void Background::Draw()
{
    TextureManager::Draw(texture, Rectangle{0, 0, width, height}, Vector2{x, y}, RAYWHITE);
}