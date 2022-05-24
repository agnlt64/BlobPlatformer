#include "../headers/Ground.h"

Ground::Ground()
{
    texture = LoadTexture("assets/ground.png");
    width = texture.width;
    height = texture.height;
    x = -2.0f;
    y = 520.0f;
}

Ground::~Ground()
{
    UnloadTexture(texture);
}

void Ground::Draw()
{
    TextureManager::Draw(texture, Rectangle{0, 0, width, height}, Vector2{x, y}, RAYWHITE);
}