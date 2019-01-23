#ifndef STATECONTROLLER_H
#define STATECONTROLLER_H

#include "menustate.h"
#include "gamestate.h"
#include "idlestate.h"
#include "inventorystate.h"

class StateController : public QObject
{
    Q_OBJECT
public:
    explicit StateController(QObject *parent = nullptr);
private:
    MenuState menu_;
    GameState game_;
    IdleState idle_;
    InventoryState inventory_;
};

#endif // STATECONTROLLER_H
