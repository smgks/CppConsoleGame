#include "statecontroller.h"

StateController::StateController(QObject *parent)
    : QObject(parent)
{
    menu = new MenuState(this);
    setState(gameStates::Menu);

    game = new GameState(this);
    idle = new IdleState(this);
}

BaseState *StateController::getCurrentState()
{
    return currentState;
}

void StateController::setState(int st)
{
    disconnect(currentState,SIGNAL(changeStateto(int)),this,SLOT(setState(int)));
    disconnect(this,SIGNAL(keyPressSignal(int)),currentState,SLOT(keyPressed(int)));
    switch (st) {
    case gameStates::Game:
        currentState = game;
        break;
    case gameStates::IDLE:
        currentState = idle;
        break;
    case gameStates::Menu:
        currentState = menu;
        break;
    default:
        break;
    }
    connect(currentState,SIGNAL(changeStateto(int)),this,SLOT(setState(int)));
    connect(this,SIGNAL(keyPressSignal(int)),currentState,SLOT(keyPressed(int)));
}

void StateController::keyPressed(int ch)
{
    emit keyPressSignal(ch);
}

void StateController::onTick()
{
    currentState->update();
}
