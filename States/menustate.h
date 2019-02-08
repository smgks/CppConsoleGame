#ifndef MENUSTATE_H
#define MENUSTATE_H

#include "basestate.h"
#include "Term/gamestateWin/menuwidget.h"

class MenuState : public BaseState
{
    Q_OBJECT
public:
    MenuState(QObject *parent = nullptr);
    void update();
public slots:
    void keyPressed(int ch);
private:
    MenuWidget *tmp;
};

#endif // MENUSTATE_H
