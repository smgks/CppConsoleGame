#ifndef BASECONSOLEOBJECT_H
#define BASECONSOLEOBJECT_H

#include <QObject>
#include <ncurses.h>

class BaseConsoleObject : public QObject
{
    Q_OBJECT
public:
    explicit BaseConsoleObject(QObject *parent = nullptr);
    virtual void initialize() = 0;
    virtual void ClearMem() {}
    virtual void update() {}
    void setOffsetX(int x){offsetX = x;}
    void setOffsetY(int y){offsetY = y;}
protected:
    qreal vertical;
    qreal horizontal;
    qreal posX;
    qreal posY;
    int offsetX;
    int offsetY;
};

#endif // BASECONSOLEOBJECT_H
