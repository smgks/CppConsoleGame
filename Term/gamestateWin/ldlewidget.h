#ifndef LDLEWIDGET_H
#define LDLEWIDGET_H

#include "basewidget.h"

class IdleWidget : public BaseWidget
{
public:
    IdleWidget(QObject *parent = nullptr);
    void setActiveBtn(int btn);
private:
    CFrame *menuFrame;
    CLabel *extButton;
    CLabel *resumeButton;
};



#endif // LDLEWIDGET_H
