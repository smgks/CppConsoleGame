#ifndef BASECONSOLEOBJECT_H
#define BASECONSOLEOBJECT_H

#include <QObject>

class BaseConsoleObject : public QObject
{
    Q_OBJECT
public:
    explicit BaseConsoleObject(QObject *parent = nullptr);
    virtual void initialize() = 0;
    virtual void ClearMem() {}
    virtual void update() {}
protected:
    int vertical;
    int horizontal;
    int posX;
    int posY;
};

#endif // BASECONSOLEOBJECT_H
