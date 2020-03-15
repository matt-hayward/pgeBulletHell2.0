#include "GameObject.h"
#include <utility>

GameObject::GameObject() = default;

GameObject::GameObject(Game* game)
{
    this->game = game;
}

GameObject::GameObject(const olc::vf2d& position)
{
    this->position = position;
}

GameObject::GameObject(const olc::vf2d& position, const olc::vf2d& velocity)
{
    this->position = position;
    this->velocity = velocity;
}

GameObject::GameObject(Game* game, const olc::vf2d& position)
{
    this->game = game;
    this->position = position;
}

GameObject::GameObject(Game* game, const olc::vf2d& position, const olc::vf2d& velocity)
{
    this->game = game;
    this->position = position;
    this->velocity = velocity;
}

GameObject::GameObject(Game* game, const olc::vf2d& position, const olc::vf2d& velocity, std::string spriteLocation)
{
    this->game = game;
    this->position = position;
    this->velocity = velocity;
    this->spr = new olc::Sprite(std::move(spriteLocation));
}

olc::vf2d GameObject::GetPosition()
{
    return position;
}

olc::vf2d GameObject::GetVelocity()
{
    return velocity;
}

olc::vf2d GameObject::GetCentre() {
    if (spr == nullptr) {
        return position;
    }

    return position + olc::vf2d({static_cast<float>(spr->width / 2), static_cast<float>(spr->height / 2)});
}
