#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Entity/sceneentity.h"
#include "Entity/charecter.h"
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
public slots:
    void onTick();
private:
    Map *map;
    Charecter *chr;
    int deltaFrame;
    void moveMobs();
};

#endif // CONTROLLER_H
