#ifndef MENUWIDGET_H
#define MENUWIDGET_H

#include <QObject>
#include "Term/gamestateWin/basewidget.h"

class MenuWidget : public BaseWidget
{
    Q_OBJECT
public:
    explicit MenuWidget(QObject *parent = nullptr);
private:
    CFrame *menuFrame;
    CLabel *menuButton;
};

#endif // MENUWIDGET_H
