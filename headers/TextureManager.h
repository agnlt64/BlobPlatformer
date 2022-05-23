#pragma once
#include <raylib.h>

struct TextureManager
{
    TextureManager();
    ~TextureManager();

    static void Draw(Texture2D tex, Rectangle src, Vector2 pos, Color tint);
};
