#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include "charecter.h"

class Enemy : public Charecter
{
public:
    Enemy(QObject *parent = nullptr);
    virtual void move();
    int getDamage(){return damage;}
private:
    int damage;
};

#endif // ENEMY_H
