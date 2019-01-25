#include "clabel.h"

CLabel::CLabel(QString text, int x, int y, BaseConsoleObject  *parent) : BaseConsoleObject(parent)
{
    m_text = text;
    posX = x;
    posY = y;
}

QString CLabel::getText()
{
    return m_text;
}

void CLabel::setText(QString str)
{
    m_text = str;
}

int CLabel::getColor()
{
    return m_Color;
}

void CLabel::setColor(int clr)
{
    m_Color = clr;
}
void CLabel::initialize()
{
    color_set(m_Color,NULL);
    mvaddstr(posX, posY,m_text.toStdString().c_str());
}

void CLabel::ClearMem()
{

}
