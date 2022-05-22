#include "../headers/Game.h"

Game::Game()
{

}

Game::~Game()
{}

void Game::Draw()
{
    DrawTextureRec(player.texture, player.srcRect, player.defaultPos, RAYWHITE);
    //ground.Draw();
}

void Game::Update()
{

}

