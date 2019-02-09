#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QObject>
#include "Term/gamestateWin/basewidget.h"
#include "Term/cchar.h"
#include "GLogick/map.h"
class GameWidget : public BaseWidget
{
    Q_OBJECT
public:
    GameWidget(Map* mp, QObject *parent = nullptr);
    void update();
private:
    Map *map;
    CFrame *mapField;
    CChar *mapScene;
    CLabel *charecterHP;
};

#endif // GAMEWIDGET_H
