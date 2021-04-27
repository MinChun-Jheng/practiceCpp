#pragma onece
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

class Player
{
private:
    sf::Sprite sprite;
    sf::Texture texture;

    float movementSpeed;

    float attactCooldown;
    float attactCooldownMax;

    // Private function
    void initVariables();
    void initTexture();
    void initSprite();

public:
    Player();
    virtual ~Player();

    // Accessor
    const sf::Vector2f& getPos() const;
    const sf::FloatRect getBounds() const;

    // Functions
    void move(const float dirX, const float dirY);
    const bool canAttack();
    
    void updateAttack();
    void update();
    void render(sf::RenderTarget& target);
};