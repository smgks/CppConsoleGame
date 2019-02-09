#include "enemy.h"
#include <QRandomGenerator>
Enemy::Enemy(QObject *parent)
    : Charecter(parent)
{
    damage = 30;
    ch = 'Z';
}

void Enemy::move()
{
    posX += 1 - QRandomGenerator::global()->generate() % 3;
    posY += 1 - QRandomGenerator::global()->generate() % 3;
}
