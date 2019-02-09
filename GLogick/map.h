#ifndef MAP_H
#define MAP_H

#include <QVector>
#include <QObject>
#include "Entity/movableentity.h"
#include "Entity/staticobject.h"
#include "Entity/projectile.h"

class Map : public QObject
{
    Q_OBJECT
public:
    Map(QObject *parent = nullptr);
    QVector<QVector<StaticObject*>> map;
    QVector<MovableEntity*> dynamicObjects;
    QVector<Projectile*> projectiles;
    QVector<QString> getMapSlice(int sx, int sy,
                                 int ex, int ey);
    int startX;
    int startY;
};

#endif // MAP_H
