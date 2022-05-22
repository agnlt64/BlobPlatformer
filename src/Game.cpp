#include "../headers/Game.h"

Game::Game()
{

}

Game::~Game()
{}

void Game::Draw()
{
    player.Draw(player.texture, Rectangle{player.width * frame, player.y, player.width, player.height}, Vector2{player.x, player.y}, RAYWHITE);
    ground.Draw();
}

void Game::Update()
{

}

