#pragma once
#include <raylib.h>
#include <iostream>
#include "TextureManager.h"

class Background
{
public:
    Background();
    ~Background();

    Texture2D texture;
    float width, height, x, y;

    void Draw();
};
