#ifndef PGEBULLETHELL_GAMEOBJECT_H
#define PGEBULLETHELL_GAMEOBJECT_H

#include "olcPixelGameEngine.h"
#include <array>

class Game;

class GameObject {
public:
    GameObject();
    explicit GameObject(Game* game);
    explicit GameObject(const olc::vf2d& position);
    GameObject(const olc::vf2d& position, const olc::vf2d& velocity);
    GameObject(Game* game, const olc::vf2d& position);
    GameObject(Game* game, const olc::vf2d& position, const olc::vf2d& velocity);
    GameObject(Game* game, const olc::vf2d& position, const olc::vf2d& velocity, std::string spriteLocation);

public:
    virtual void Update(float fElapsedTime) = 0;
    olc::vf2d GetPosition();
    olc::vf2d GetVelocity();
    olc::vf2d GetCentre();

protected:
    Game* game = nullptr;
    std::array<float, 4> data { 0 };

public:
    olc::vf2d position = {20.0f, 20.0f};
    olc::vf2d velocity = {0.0f, 0.0f};
    olc::Sprite* spr = nullptr;
    bool isDead = false;
};

#endif //PGEBULLETHELL_GAMEOBJECT_H