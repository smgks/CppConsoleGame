#ifndef MAPGENERATOR_H
#define MAPGENERATOR_H

#include <QCoreApplication>
#include <QTextStream>
#include <QVector>
#include <QRandomGenerator>

#include "Entity/wall.h"
#include "Entity/floor.h"
#include "map.h"

class MapGenerator : public QObject{
    struct Room {
        Room(int _x =0,int _y=0, int _w=0 ,int _h=0);
            int x, y, w, h;
            int centerx;
            int centery;
        bool intersect(const Room &r) const;
    };
public:
    explicit MapGenerator(QObject *parent = nullptr);
    Map* genMap(quint32 w,quint32 h);
    void printMap();
private:
    QVector<QVector<char>> map;
    QVector<Room> rooms;
    Map *mapEnt;
    Wall *wall;
    Floor *floor;
    void drawCorridor(int sx, int sy, int ex, int ey);
    void linkRooms();
    void drawRoom(int x,int y,int w,int h);
    void generate(int roomsCount, int l_w, int l_h);
};

#endif // MAPGENERATOR_H
