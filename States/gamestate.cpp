#include "gamestate.h"

GameState::GameState(QObject *parent)
    :BaseState(parent)
{
    mpGen = new MapGenerator(this);
    temp = new GameWidget(mpGen->genMap(100,200),this);
    controller = new Controller(this);
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
