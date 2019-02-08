#include "mapgenarator.h"

MapGenerator::MapGenerator(QObject *parent)
    : QObject(parent)
{
    wall = new Wall(this);
    floor = new Floor(this);
}

void MapGenerator::genMap(quint32 w, quint32 h)
{
    map.clear();
    quint32 sx = 0;
    quint32 sy = 0;
    quint32 ex = 0;
    quint32 ey = 0;
    while (qMax((ey-sy)*(ey-sy) + (ex-sx)*(ex-sx),
                (sy-ey)*(sy-ey) + (sx-ex)*(sx-ex)) < (w*w + h*h)/2) {
        sx = QRandomGenerator::global()->generate() % (w);
        sy = QRandomGenerator::global()->generate() % (h);
        ex = QRandomGenerator::global()->generate() % (w);
        ey = QRandomGenerator::global()->generate() % (h);
    }

    for (int i = 0; i < h; ++i) {
        map.push_back(QVector<char>());
        for (int j = 0; j < w; ++j) {
            map[i].push_back('#');
        }
    }
    generate(3 + w/10+h/8,w,h);
    for (Room r : rooms) {
        drawRoom(r.x,r.y,r.w,r.h);
    }
    linkRooms();
}

void MapGenerator::printMap(){
    for (int i = 0; i < map.size(); ++i) {
        for (int j = 0; j < map.at(0).size(); ++j) {
            QTextStream(stdout) << map[i][j];
        }
        QTextStream(stdout) << "\n";
    }
}

void MapGenerator::drawCorridor(int sx, int sy, int ex, int ey){
    int i = sy;
    int j = sx;
    for (; i != ey; (sy>ey) ? --i :++i) {
        map[i][j] = ',';
    }
    for (; j != ex;(sx>ex) ? --j :++j) {
        map[i][j] = ',';
    }


}

void MapGenerator::linkRooms()
{
    for (int i = 0; i < rooms.size()-1;++i) {
        drawCorridor(rooms[i].centerx,rooms[i].centery,
                     rooms[i+1].centerx,rooms[i+1].centery);
    }
}

void MapGenerator::drawRoom(int x, int y, int w, int h)
{
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            map[y+i][x+j] = '.';
        }
    }
}

void MapGenerator::generate(int roomsCount, int l_w, int l_h) {
    rooms.clear();

    // второй цикл предотвращает залипание, в случае если на карту уже не помещается ни одной комнаты
    for (int i = 0; i < roomsCount; ++i) {
        for (int j = 0; j < 1000; ++j) {
            // ширина и высота комнаты в пределах [10,40]
            const int w = 4 + QRandomGenerator::global()->generate() % l_w/8,
                    h = 4 + QRandomGenerator::global()->generate() % l_h/6;
            // избегаем "прилипания" комнаты к краю карты
            const Room room(3 + QRandomGenerator::global()->generate() % (l_w - w - 6),
                            3 + QRandomGenerator::global()->generate() % (l_h - h - 6), w, h);

            // найдем первую комнату, из уже существующих, которая пересекается с новой
            auto intersect = std::find_if(rooms.begin(), rooms.end(), [&room](const Room &r){
                return room.intersect(r);
            });

            // если новая комната не имеет пересечений - добавляем ее
            if (intersect == rooms.end()) {
                rooms.push_back(room);
                break;
            }
        }
    }
}

MapGenerator::Room::Room(int _x, int _y, int _w, int _h){
    x=_x;y=_y;w = _w; h= _h;
    centerx = x + w/2;
    centery = y + h/2;
}

bool MapGenerator::Room::intersect(const MapGenerator::Room &r) const
{
    return !(r.x >= (x + w) || x >= (r.x + r.w) || r.y >= (y + h) || y >= (r.y + r.h));
}
