#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include "charecter.h"

class Enemy : public Charecter
{
public:
    Enemy(QObject *parent = nullptr);
    void move();
};

#endif // ENEMY_H
