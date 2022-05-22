#pragma once
#include <raylib.h>

struct Ground
{
    Ground();
    ~Ground();

    Texture2D texture;
    Rectangle sourceRect;
    Vector2 position;

    void Draw();
};
