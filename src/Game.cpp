#include "../headers/Game.h"

Game::Game()
{
    timer = 0.0f;
    maxFrames = player.texture.width / player.width;
}

Game::~Game()
{}

void Game::Setup()
{
    InitWindow(WIDTH, HEIGHT, "Platformer");
    SetTargetFPS(60);
}

void Game::Init()
{
    ClearBackground(SKYBLUE);
    BeginDrawing();
}

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
        player.frame++;
    }

    player.frame %= maxFrames;

    player.Update();
}
