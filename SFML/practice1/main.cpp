#include <iostream>
#include "Game.cpp"

//using namespace sf;

int main()
{   
    // Init srand
    srand(static_cast<unsigned>(time(NULL)));

    // Init Game engine
    Game game;


    // Game loop
    while (game.running() && !game.getEndGame())
    {
        // Update
        game.update();

        // Render     
        game.render();
    }

    return 0;
}