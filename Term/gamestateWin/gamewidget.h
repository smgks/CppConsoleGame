#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QObject>
#include "Term/gamestateWin/basewidget.h"

class GameWidget : public BaseWidget
{
    Q_OBJECT
public:
    GameWidget(QObject *parent = nullptr);
private:
    CFrame *map;
    CFrame *stateBar;
};

#endif // GAMEWIDGET_H
