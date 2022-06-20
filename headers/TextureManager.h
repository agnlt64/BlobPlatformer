#pragma once
#include <raylib.h>

class TextureManager
{
public:
    TextureManager();
    ~TextureManager();

    static void Draw(Texture2D tex, Rectangle src, Vector2 pos, Color tint);
};
