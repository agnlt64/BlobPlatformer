#pragma once
#include <raylib.h>

struct Ground
{
    Ground();
    ~Ground();

    Texture2D texture;
    float width, height, x, y;

    void Draw(Texture2D tex, Rectangle src, Vector2 pos, Color tint);
};
