#pragma once
#include <raylib.h>
#include "TextureManager.h"

struct Background
{
    Background();
    ~Background();

    Texture2D texture;
    float width, height, x, y;

    void Draw();
};
