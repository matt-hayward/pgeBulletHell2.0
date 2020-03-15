#ifndef PGEBULLETHELL_ENEMY_H
#define PGEBULLETHELL_ENEMY_H

#include "olcPixelGameEngine.h"
#include "GameObject.h"
#include "Bullet.h"
#include <list>
#include <string>

class Game;

class Enemy : public GameObject
{
public:
    Enemy(Game* game, const olc::vf2d& position, std::string spriteLocation);

public:
    void Update(float fElapsedTime) override;

protected:
    virtual void Movement(float fElapsedTime) = 0;
    virtual void Firing(float fElapsedTime) = 0;

protected:
    float speed = 200.0f;
    float bulletCooldown = 0.0f;
    float bulletTriggerTime = 0.3f;

public:
    std::list<Bullet> bullets;
    float radius;
    float health = 3.0f;
    int value = 100;
};

#endif //