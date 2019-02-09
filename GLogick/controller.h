#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Entity/sceneentity.h"
#include "Entity/charecter.h"
#include "Entity/enemy.h"
#include "Entity/projectile.h"
#include <QObject>
#include "map.h"

class Controller : public QObject
{
    Q_OBJECT
public:
    Controller(QObject *parent = nullptr);
    void setMap(Map *mp);
    void moveCharUp();
    void moveCharDown();
    void moveCharLeft();
    void moveCharRight();
    void mobShooting();
    void moveProjectiles();
signals:
    void playerDead();
    void generateNewMap();
public slots:
    void onTick();
private:
    Map *map;
    Charecter *chr;

    int deltaFrame;
    void moveMobs();
    bool collideCharWithWalls();
};

#endif // CONTROLLER_H
