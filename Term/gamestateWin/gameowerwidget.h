#ifndef GAMEOWERWIDGET_H
#define GAMEOWERWIDGET_H

#include "basewidget.h"
#include "Term/clabel.h"
class GameOwerWidget : public BaseWidget
{
    Q_OBJECT
public:
    GameOwerWidget(QObject *parent = nullptr);
private:
    CLabel *gameOverL;
};

#endif // GAMEOWERWIDGET_H
