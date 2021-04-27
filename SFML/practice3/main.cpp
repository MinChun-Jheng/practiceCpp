#include "Game.cpp"
#include <time.h>

int main()
{
    srand(time(static_cast<unsigned>(0)));

    Game game;
    
    game.run();
    // End of 
    return 0;
}