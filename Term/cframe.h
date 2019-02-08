#ifndef CFRAME_H
#define CFRAME_H

#include "baseconsoleobject.h"
#include <ncurses.h>

class CFrame : public BaseConsoleObject
{
    Q_OBJECT
public:
    explicit CFrame(QObject *parent = nullptr);

    explicit CFrame(qreal h_proc = 0, qreal v_proc = 0,
                    qreal x_proc = 0, qreal y_proc = 0,
                    QObject *parent = nullptr);
    ~CFrame();
    void update();
    void initialize();
    void ClearMem();
private:
    WINDOW *win_;

};

#endif // CFRAME_H
