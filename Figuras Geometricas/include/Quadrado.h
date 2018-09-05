#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"

class Quadrado: public FiguraGeometrica
{
public:
    Quadrado();
    double calculaArea(double,double);
};

#endif // QUADRADO_H
