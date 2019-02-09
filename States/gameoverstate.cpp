#include "gameoverstate.h"

GameOverState::GameOverState(QObject *parent)
    :BaseState(parent)
{
    gmW = new GameOwerWidget(this);
}

void GameOverState::update()
{
    gmW->update();
}

void GameOverState::keyPressed(int ch)
{
    if (ch == 13) {
        gmW->hide();
        emit changeStateto(gameStates::Menu);
    }
}
