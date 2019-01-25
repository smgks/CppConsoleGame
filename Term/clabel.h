#ifndef CLABEL_H
#define CLABEL_H

#include <ncurses.h>

#include "consolecolor.h"
#include "baseconsoleobject.h"

class CLabel : public BaseConsoleObject
{
    Q_OBJECT
    Q_PROPERTY(QString text READ getText WRITE setText)
    Q_PROPERTY(int Color READ getColor WRITE setColor)
public:
    explicit CLabel(QString str, int x = 0, int y = 0, BaseConsoleObject *parent = nullptr);
    QString getText();
    void setText(QString str);
    void initialize();
    void ClearMem();
    int getColor();
    void setColor(int clr);
private:
    int m_Color = ConsoleText::Color::StarnartText;
    QString m_text;
};

#endif // CLABEL_H
