#ifndef MAP_H
#define MAP_H

#include "Entity/movableentity.h"
#include <QVector>
class Map
{
public:
    Map();
    QVector<QVector<SceneEntity*>> map;
    QVector<MovableEntity*> dynamicObjects;
};

#endif // MAP_H
