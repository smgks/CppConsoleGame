#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "enemy.h"

class Projectile : public Enemy
{
    Q_OBJECT
public:
    Projectile(QObject *parent = nullptr);
    void move();
private:
    int offsetX;
    int offsetY;
};

#endif // PROJECTILE_H
