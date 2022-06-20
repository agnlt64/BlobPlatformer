#ifndef GROUND_H
#define GROUND_H
#include <raylib.h>
#include "TextureManager.h"

class Ground
{
public:
    Ground();
    ~Ground();

    Texture2D texture;
    float width, height, x, y;

    void Draw();
};

#endif /*GROUND_H*/