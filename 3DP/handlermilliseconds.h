#ifndef HANDLERFINAL_H
#define HANDLERFINAL_H

#include "handler.h"

class HandlerMilliseconds : public Handler
{
public:
    HandlerMilliseconds();
    QTime getTime(long timeInMilliseconds, QTime &time);
};

#endif // HANDLERFINAL_H
