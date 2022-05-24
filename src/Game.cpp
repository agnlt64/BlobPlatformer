#include "../headers/Game.h"

Game::Game()
{
    timer = 0.0f;
    maxFrames = player.texture.width / player.width;
    frame = 0;
}

Game::~Game()
{}

void Game::Draw()
{
    background.Draw();
    ground.Draw();
}

void Game::Update()
{
    timer += GetFrameTime();

    if(timer >= 0.2f)
    {
        timer = 0.0f;
        frame++;
    }

    frame %= maxFrames;

    player.Update();
}

