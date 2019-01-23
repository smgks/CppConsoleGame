#ifndef CFRAME_H
#define CFRAME_H

#include "baseconsoleobject.h"
#include <ncurses.h>

class CFrame : public BaseConsoleObject
{
    Q_OBJECT
public:
    explicit CFrame(int w_lines = LINES,int h_colums = COLS, int x = 0, int y = 0, BaseConsoleObject *parent = nullptr);
    ~CFrame();
    void update();
    void initialize();
    void ClearMem();
private:
    WINDOW *win_;
    int vertical;
    int horizontal;
    int posX;
    int posY;
};

#endif // CFRAME_H
