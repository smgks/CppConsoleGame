#include "charecter.h"

Charecter::Charecter(QObject *parent)
    : MovableEntity(parent)
{
    ch = 'Y';
    hp = 100;
}

void Charecter::damage(int dmg)
{
    hp-=dmg;
}
