#ifndef BASESTATE_H
#define BASESTATE_H

#include <QObject>
#include "Term/gamestateWin/basewidget.h"
enum gameStates{
    Menu,Game,IDLE
};

class BaseState : public QObject
{
    Q_OBJECT
public:
    explicit BaseState(QObject *parent = nullptr);
    virtual void update(){}
signals:
    void changeStateto(int);
public slots:
    virtual void keyPressed(int) {}
};

#endif // BASESTATE_H
