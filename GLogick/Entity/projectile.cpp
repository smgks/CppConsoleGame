#include <QRandomGenerator>
#include "projectile.h"
Projectile::Projectile()
{
    ch = '+';
    offsetX = 1 - QRandomGenerator::global()->generate() % 3;
    offsetY = 1 - QRandomGenerator::global()->generate() % 3;
}

void Projectile::move()
{
    posX+=offsetX;
    posY+=offsetY;
}
