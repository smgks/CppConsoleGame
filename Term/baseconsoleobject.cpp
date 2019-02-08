#include "baseconsoleobject.h"

BaseConsoleObject::BaseConsoleObject(QObject *parent) : QObject(parent)
{
    vertical = LINES;
    horizontal = COLS;
}
