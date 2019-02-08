#ifndef MAP_H
#define MAP_H

#include <QVector>

#include "Entity/movableentity.h"
#include "Entity/staticobject.h"

class Map : public QObject
{
public:
    Map(QObject *parent = nullptr);
    QVector<QVector<StaticObject*>> map;
    QVector<MovableEntity*> dynamicObjects;
};

#endif // MAP_H
