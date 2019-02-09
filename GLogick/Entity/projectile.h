#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "enemy.h"

class Projectile : public Enemy
{
public:
    Projectile();
    void move();
private:
    int offsetX;
    int offsetY;
};

#endif // PROJECTILE_H
