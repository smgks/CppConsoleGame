#include "gamestate.h"

GameState::GameState(QObject *parent)
    :BaseState(parent)
{
    mpGen = new MapGenerator(this);
    Map *tempmap = mpGen->genMap(500,200);
    temp = new GameWidget(tempmap,this);
    controller = new Controller(this);
    controller->setMap(tempmap);
    connect(this,SIGNAL(eventTick()),controller,SLOT(onTick()));
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
    case 'w':
        controller->moveCharUp();
        break;
    case 's':
        controller->moveCharDown();
        break;
    case 'a':
        controller->moveCharLeft();
        break;
    case 'd':
        controller->moveCharRight();
        break;
    default:
        break;
    }
}

void GameState::onTick()
{
    emit eventTick();
}
