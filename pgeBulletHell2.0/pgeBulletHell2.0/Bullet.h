#ifndef PGEBULLETHELL_BULLET_H
#define PGEBULLETHELL_BULLET_H

#include "olcPixelGameEngine.h"
#include "GameObject.h"

class Bullet : public GameObject
{
public:
    Bullet(const olc::vf2d& position, const olc::vf2d& velocity);
    explicit Bullet(olc::vf2d position);

public:
    void Update(float fElapsedTime) override;
};

#endif //PGEBULLETHELL_BULLET_H
