#include "../headers/Game.h"

int main(int argc, char** argv)
{
    Game game;

    while (not WindowShouldClose())
    {
        game.Init();
        game.Draw();
        game.Update();

        EndDrawing();
    }

    CloseWindow();
    
    return 0;   
}