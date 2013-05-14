#ifndef LEGUMEFACTORY_H
#define LEGUMEFACTORY_H

#include "legume.h"
#include "typelegume.h"

class LegumeFactory
{
    public:
        static Legume* createLegume(TypeLegume type);
    protected:
    private:
};

#endif // LEGUMEFACTORY_H
