#ifndef CCHAR_H
#define CCHAR_H

#include "consolecolor.h"
#include "baseconsoleobject.h"
#include "GLogick/map.h"

class CChar : public BaseConsoleObject
{
public:
    CChar(Map *mp,int x, int y, QObject *parent = nullptr);
    void initialize();
    void ClearMem();
    int getColor(){return color;}
    void setColor(int clr){color = clr;}
private:
    int color = ConsoleText::Color::WhiteBlack;
    Map *map;
};

#endif // CCHAR_H
