#include "handler.h"

Handler::Handler(Handler* nextHandler) : nextHandler(nextHandler)
{
}


Handler::~Handler()
{
    //destructor
}
