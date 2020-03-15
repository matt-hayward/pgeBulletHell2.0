#ifndef PGEBULLETHELL_PLAYER_H
#define PGEBULLETHELL_PLAYER_H

#include "olcPixelGameEngine.h"
#include "GameObject.h"
#include "Bullet.h"
#include <list>

class Game;

class Player : public GameObject
{
public:
    explicit Player(Game* game);

public:
    void Update(float fElapsedTime) override;
    void AdjustHealth(float healthModifier);

protected:
    void HandleBullets(float fElapsedTime);

protected:
    float speed = 200.0f;
    float bulletCooldown = 0.0f;
    float bulletTriggerTime = 0.1f;

public:
    float health = 100.0f;
    float radius;
    olc::Sprite* spr = new olc::Sprite("gfx//player.png");
    std::list<Bullet> bullets;
};

#endif //PGEBULLETHELL_PLAYER_H