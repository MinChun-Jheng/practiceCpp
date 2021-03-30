#pragma once

#include <iostream>
#include <vector>
#include <ctime>
#include <sstream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
/*
    Class thatz acs as the game egine
    Wrapper class
*/

class Game
{
private:
    // Variable
    sf::RenderWindow* window;
    sf::VideoMode videomode;
    sf::Event ev;

    // Mouse position
    sf::Vector2i mousePosWindow;
    sf::Vector2f mousePosView;

    // Resources
    sf::Font font;

    // Text
    sf::Text uiText;

    // Game logic
    bool endGame;
    unsigned points;
    int health;
    float enemySpawnTimer;
    float enemySpawnTimerMax;
    int maxEnemies;
    bool mouseHeld;

    // Game object
    std::vector<sf::RectangleShape> enemies;
    sf::RectangleShape enemy;


    // Private function
    void initVariables();
    void initWindow();
    void initFonts();
    void initText();
    void initEnemy();

public:
    //Constructors / Destructors
    Game();
    virtual ~Game();

    // Accessors
    const bool running() const;
    const bool getEndGame() const;

    // Function
    void spawnEnemy();

    void pollEvents();
    void updateMousePosition();
    void updateText();
    void updateEnemies();
    void update();

    void renderText(sf::RenderTarget& target);
    void renderEnemies(sf::RenderTarget& target);
    void render();

};