#include "Bullet.h"

Bullet::Bullet(const olc::vf2d& position, const olc::vf2d& velocity) :
    GameObject(position, velocity) {}

Bullet::Bullet(olc::vf2d position) :
    GameObject(position) {}

void Bullet::Update(float fElapsedTime)
{
    position += velocity;
}
