#include <istream>
#include "Game.cpp"

//using namespace sf;

int main()
{
    // Initialize
    srand(static_cast<unsigned>(time(0)));

    // Init Game objs
    Game game;

    // Game loop
    while(game.running())
    {
        game.update();
        game.render();  
    }

    // End of app
    return 0;
}