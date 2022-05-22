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
    player.Draw(player.texture, Rectangle{player.width * frame, 0, player.width, player.height}, Vector2{player.x, player.y}, RAYWHITE);
    ground.Draw(ground.texture, Rectangle{0, 0, ground.width, ground.height}, Vector2{ground.x, ground.y}, RAYWHITE);
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

