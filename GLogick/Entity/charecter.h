#ifndef CHARECTER_H
#define CHARECTER_H

#include "movableentity.h"

class Charecter : public MovableEntity
{
    Q_OBJECT
public:
    explicit Charecter(QObject *parent = nullptr);

};

#endif // CHARECTER_H
