#include "map.h"

Map::Map(QObject *parent)
    : QObject(parent)
{

}

QVector<QString> Map::getMapSlice(int sx, int sy,
                                  int ex, int ey)
{
    QVector<QString> result;
    for (int i = sy; (i < ey) && (i < map.size()); ++i) {
        result.push_back(QString());
        for (int j = sx; (j < ex) && (j < map[0].size()); ++j) {
            if ((i>=0) && (j>=0)) {
                result.last().push_back(map[i][j]->getCh());
            }
            else {
                result.last().push_back(' ');
            }
        }
    }
    for (MovableEntity *i : dynamicObjects) {
        if ((i->getX() >= sx && i->getX() < ex)
         && (i->getY() >= sy && i->getY() < ey)) {
                result[i->getY()-sy][i->getX()-sx] = i->getCh();
        }
    }
    for (Projectile *i : projectiles) {
        if ((i->getX() >= sx && i->getX() < ex)
         && (i->getY() >= sy && i->getY() < ey)) {
                result[i->getY()-sy][i->getX()-sx] = i->getCh();
        }
    }
    return result;
}
