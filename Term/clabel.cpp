#include "clabel.h"

CLabel::CLabel(QObject *parent)
    : BaseConsoleObject(parent)
{
    m_text = "text";
    posY = 0;
    posX = 0;
    offsetX = 0;
    offsetY = 0;
}

CLabel::CLabel(QString text,
               qreal y_proc, qreal x_proc,
               QObject  *parent)
    : BaseConsoleObject(parent)
{
    offsetX = 0;
    offsetY = 0;
    m_text = text;
    posY = x_proc;
    posX = y_proc;
}

QString CLabel::getText()
{
    return m_text;
}

void CLabel::setText(QString str)
{
    m_text = str;
    emit textChanged(str);
}

int CLabel::getColor()
{
    return m_color;
}

void CLabel::setColor(int clr)
{
    m_color = clr;
    initialize();
    emit colorChanged(clr);
}

void CLabel::initialize()
{
    color_set(m_color,NULL);
    mvaddstr(int(LINES*posY) + offsetY, int(COLS*posX) + offsetX,
             m_text.toStdString().c_str());
//    refresh();
}

void CLabel::ClearMem()
{

}
