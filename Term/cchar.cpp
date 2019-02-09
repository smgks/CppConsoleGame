#include "cchar.h"


CChar::CChar(Map *mp, int x, int y, QObject *parent)
    : BaseConsoleObject(parent)
{
    map = mp;
    posX = x;
    posY = y;
}

void CChar::initialize()
{
    color_set(color,NULL);
    QVector<QString> sl = map->getMapSlice(0 + map->dynamicObjects[0]->getX() - (COLS-2)/2,
                                           0 + map->dynamicObjects[0]->getY() - (LINES-2)/2,
                                           0 + map->dynamicObjects[0]->getX() + (COLS-2)/2,
                                           0 + map->dynamicObjects[0]->getY() + (LINES-2)/2 + 1);
    for (int i = 0; i < sl.size(); ++i) {
        mvaddstr(posY+i, posX, sl[i].toStdString().c_str());
    }
}

void CChar::ClearMem()
{

}
