#include "../headers/Ground.h"

Ground::Ground()
{
    sourceRect = {0, 0, (float)texture.width, (float)texture.height};
    position = {10, -300};
    texture = LoadTexture("assets/ground.png");
}

Ground::~Ground()
{
    UnloadTexture(texture);
}

void Ground::Draw()
{
    DrawTextureRec(texture, sourceRect, position, RAYWHITE);
}