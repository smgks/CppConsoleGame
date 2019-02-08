#ifndef STATECONTROLLER_H
#define STATECONTROLLER_H

#include "menustate.h"
#include "gamestate.h"
#include "idlestate.h"
#include "gameoverstate.h"

class StateController : public QObject
{
    Q_OBJECT
public:
    explicit StateController(QObject *parent = nullptr);
    BaseState* getCurrentState();
private:
    MenuState *menu;
    GameState *game;
    IdleState *idle;
    GameOverState *inventory;
    BaseState *currentState;
signals:
    void keyPressSignal(int ch);
    void eventTick();
public slots:
    void setState(int st);
    void keyPressed(int ch);
    void onTick();
};

#endif // STATECONTROLLER_H
