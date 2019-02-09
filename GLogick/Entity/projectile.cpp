#include <QRandomGenerator>

#include "projectile.h"

Projectile::Projectile(QObject *parent)
    : Enemy(parent)
{
    damage = 10;
    ch = '+';
    offsetX = 1 - QRandomGenerator::global()->generate() % 3;
    offsetY = 1 - QRandomGenerator::global()->generate() % 3;
}

void Projectile::move()
{
    posX+=offsetX;
    posY+=offsetY;
}
