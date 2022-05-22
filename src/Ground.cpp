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

void Ground::Draw(Texture2D tex, Rectangle src, Vector2 pos, Color tint)
{
    DrawTextureRec(tex, src, pos, tint);
}