#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QObject>
#include "Term/gamestateWin/basewidget.h"
#include "GLogick/map.h"
class GameWidget : public BaseWidget
{
    Q_OBJECT
public:
    GameWidget(Map* mp, QObject *parent = nullptr);
private:
    Map *map;
    CFrame *mapField;
    CFrame *stateBar;
};

#endif // GAMEWIDGET_H
