#ifndef CCHAR_H
#define CCHAR_H

#include "consolecolor.h"
#include "baseconsoleobject.h"

class CChar : public BaseConsoleObject
{
public:
    CChar(char ch = ' ',int x = 0, int y = 0, QObject *parent = nullptr);
    char getText(){return  text;}
    void setText(char ch){text = ch;}
    void initialize();
    void ClearMem();
    int getColor(){return color;}
    void setColor(int clr){color = clr;}
private:
    int color = ConsoleText::Color::WhiteBlack;
    char text;
};

#endif // CCHAR_H
