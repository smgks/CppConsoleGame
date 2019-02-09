#ifndef CHARECTER_H
#define CHARECTER_H

#include "movableentity.h"

class Charecter : public MovableEntity
{
    Q_OBJECT
public:
    explicit Charecter(QObject *parent = nullptr);
    void damage(int dmg);
    int getHP(){return hp;}
private:
    int hp;
};

#endif // CHARECTER_H
