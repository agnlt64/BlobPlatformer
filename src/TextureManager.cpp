#include "../headers/TextureManager.h"

TextureManager::TextureManager()
{}

TextureManager::~TextureManager()
{}

void TextureManager::Draw(Texture2D tex, Rectangle src, Vector2 pos, Color tint)
{
    DrawTextureRec(tex, src, pos, tint);
}