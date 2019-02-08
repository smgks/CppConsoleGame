#include "controller.h"
#include "Entity/enemy.h"

Controller::Controller(QObject *parent)
    : QObject(parent)
{
    deltaFrame = 0;
}

void Controller::setMap(Map *mp)
{
    map = mp;
    chr = static_cast<Charecter*>(map->dynamicObjects[0]);
}

void Controller::moveCharUp()
{
    chr->setY(chr->getY()-1);
}

void Controller::moveCharDown()
{
    chr->setY(chr->getY()+1);
}

void Controller::moveCharLeft()
{
    chr->setX(chr->getX()-1);
}

void Controller::moveCharRight()
{
    chr->setX(chr->getX()+1);
}

void Controller::onTick()
{
    deltaFrame++;
    if (deltaFrame > 30) {
        deltaFrame = 0;
        moveMobs();
    }
}

void Controller::moveMobs()
{
    for (int i = 1; i < map->dynamicObjects.size(); ++i) {
        static_cast<Enemy*>(map->dynamicObjects[i])->move();
    }
}
