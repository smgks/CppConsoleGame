#include "controller.h"

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
    if (collideCharWithWalls())
        moveCharDown();
}

void Controller::moveCharDown()
{
    chr->setY(chr->getY()+1);
    if (collideCharWithWalls())
        moveCharUp();
}

void Controller::moveCharLeft()
{
    chr->setX(chr->getX()-1);
    if (collideCharWithWalls())
        moveCharRight();
}

void Controller::moveCharRight()
{
    chr->setX(chr->getX()+1);
    if (collideCharWithWalls())
        moveCharLeft();
}

void Controller::mobShooting(Enemy *enemy)
{

}

void Controller::onTick()
{
    deltaFrame++;
    if (deltaFrame > 14) {
        moveMobs();
        if (deltaFrame > 30){
            deltaFrame = 0;
//            mobShooting();
        }
    }
}

void Controller::moveMobs()
{
    for (int i = 1; i < map->dynamicObjects.size(); ++i) {
        Enemy *temp = static_cast<Enemy*>(map->dynamicObjects[i]);
        int tempX = temp->getX();
        int tempY = temp->getY();
        temp->move();
        if(map->map[temp->getY()][temp->getX()]->getCh() == '#'){
            temp->setX(tempX);
            temp->setY(tempY);
        }
        if ((chr->getX() == temp->getX())
                && (chr->getY() == temp->getY())) {
            chr->damage(temp->getDamage());
            temp->setX(tempX);
            temp->setY(tempY);
            if (chr->getHP()<=0){
                emit playerDead();
            }
        }
        for (int j = 1; j < map->dynamicObjects.size(); ++j) {
            if (i == j)
                continue;
            Enemy *temp1 = static_cast<Enemy*>(map->dynamicObjects[j]);
            if ((temp1->getX() == temp->getX())
                    && (temp1->getY() == temp->getY())) {
               temp->setX(tempX);
               temp->setY(tempY);
            }
        }

    }
}

bool Controller::collideCharWithWalls()
{
    if (map->map[chr->getY()][chr->getX()]->getCh() == '#')
        emit playerDead();
    if (map->map[chr->getY()][chr->getX()]->getCh() == '>')
        emit generateNewMap();
    for (int i = 1; i < map->dynamicObjects.size(); ++i) {
        Enemy* temp = reinterpret_cast<Enemy*>(map->dynamicObjects[i]);
        if ((chr->getX() == temp->getX())
                && (chr->getY() == temp->getY())) {
            chr->damage(temp->getDamage());
            if (chr->getHP()<=0){
                emit playerDead();
            }
            return 1;
        }
    }
    return 0;
}
