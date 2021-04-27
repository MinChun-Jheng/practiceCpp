#pragma once

#include <map>
#include "Player.cpp"
#include "Bullet.cpp"
#include "Enemy.cpp"

class Game
{
private:
    // Window
    sf::RenderWindow* window;

    // Resources
    std::map<std::string, sf::Texture*> textures;
    std::vector<Bullet*> bullets;

    // Player
    Player* player;

    // Enemies
    float spawnTimer;
    float spawnTimerMax;
    std::vector<Enemy*> enemies;

    // Private functions
    void initWindow();
    void initTextures();

    void initPlayer();
    void initEnemies();

public:
    Game();
    virtual ~Game();

    // Functions
    void run();

    void updatePollEvents();
    void updateInpute();
    void updateBullets();
    void updateEnemies();
    void update();
    void render();

};