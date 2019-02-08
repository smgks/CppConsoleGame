#ifndef INVENTORYSTATE_H
#define INVENTORYSTATE_H

#include "basestate.h"

class GameOverState : public BaseState
{
    Q_OBJECT
public:
    GameOverState(QObject *parent = nullptr);
};

#endif // INVENTORYSTATE_H
