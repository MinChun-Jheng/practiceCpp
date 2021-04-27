#include "Player.h"

//
void Player::initVariables()
{
    this->movementSpeed = 1.f;
    this->attactCooldownMax = 10.f;
    this->attactCooldown = this->attactCooldownMax;

}

void Player::initTexture()
{
    
    // Load a texture from file
    if (!this->texture.loadFromFile("../Textures/ship.png"))
    {
        std::cout << "ERROR::PLAYER::INITTEXTURE::Counld not load texture" << std::endl;
    }

}

void Player::initSprite()
{
    // Load the texture to the sprite
    this->sprite.setTexture(this->texture);

    // Resize the sprite
    this->sprite.scale(0.1f, 0.1f);
}


// constructor
Player::Player()
{
    this->initVariables();

    this->initTexture();
    this->initSprite();
}

Player::~Player()
{

}

// Accessor
const sf::Vector2f & Player::getPos() const
{
    return this->sprite.getPosition();
}

const sf::FloatRect Player::getBounds() const
{
    return this->sprite.getGlobalBounds();
}

void Player::move(const float dirX, const float dirY)
{
    this->sprite.move(this->movementSpeed * dirX, this->movementSpeed *dirY);
}

const bool Player::canAttack()
{
    if (this->attactCooldown >= this->attactCooldownMax)
    {
        this->attactCooldown = 0.f;
        return true;
    }
    return false;
}

void Player::updateAttack()
{
    if(this->attactCooldown < this->attactCooldownMax)
        this->attactCooldown += 0.5f;
}

// Function
void Player::update()
{
    this->updateAttack();
}

void Player::render(sf::RenderTarget& target)
{
    target.draw(this->sprite);
}