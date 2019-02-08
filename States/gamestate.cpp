#include "gamestate.h"

GameState::GameState(QObject *parent)
    :BaseState(parent)
{
    temp = new GameWidget(this);
}

void GameState::update()
{
    temp->update();
}

void GameState::keyPressed(int ch)
{
    switch (ch) {
    case 112:
        emit changeStateto(gameStates::IDLE);
        temp->hide();
        break;
    default:
        break;
    }
}
