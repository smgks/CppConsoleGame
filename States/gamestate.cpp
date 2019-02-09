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
    connect(controller,SIGNAL(playerDead()),this,SLOT(onPLayerDeath()));
    connect(controller,SIGNAL(generateNewMap()),this,SLOT(onGenerateNewMap()));

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

void GameState::onPLayerDeath()
{
    temp->hide();
    onGenerateNewMap();
    emit changeStateto(gameStates::GameOver);
}

void GameState::onGenerateNewMap()
{
    delete mpGen;
    mpGen = new MapGenerator(this);
    Map *tempmap = mpGen->genMap(100,50);
    delete temp;
    temp = new GameWidget(tempmap,this);
    controller->setMap(tempmap);
}
