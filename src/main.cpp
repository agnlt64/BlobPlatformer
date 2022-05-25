#include "../headers/Game.h"
#define WIDTH 800
#define HEIGHT 600

int main(int argc, char** argv)
{
    InitWindow(WIDTH, HEIGHT, "Platformer");
    SetTargetFPS(60);

    Game game;

    while (not WindowShouldClose())
    {
        ClearBackground(SKYBLUE);
        BeginDrawing();

        game.Draw();
        game.Update();

        EndDrawing();
    }

    CloseWindow();
    
    return 0;
    
}