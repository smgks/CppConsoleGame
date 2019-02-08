#ifndef IDLESTATE_H
#define IDLESTATE_H

#include "basestate.h"
#include "Term/gamestateWin/ldlewidget.h"

class IdleState : public BaseState
{
    Q_OBJECT
public:
    IdleState(QObject *parent = nullptr);
    void update();
public slots:
    void keyPressed(int ch);
private:
    IdleWidget *idle;
    int activeBtn;
};

#endif // IDLESTATE_H
