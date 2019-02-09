#ifndef INVENTORYSTATE_H
#define INVENTORYSTATE_H

#include "basestate.h"
#include "Term/gamestateWin/gameowerwidget.h"
class GameOverState : public BaseState
{
    Q_OBJECT
public:
    GameOverState(QObject *parent = nullptr);
    void update();
public slots:
    void keyPressed(int ch);
private:
    GameOwerWidget *gmW;
};

#endif // INVENTORYSTATE_H
