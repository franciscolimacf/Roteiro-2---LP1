#include "Triangulo.h"

Triangulo::Triangulo()
{
    nome = "Triangulo";
}

double Triangulo::calculaArea(double b,double h)
{
    return b*h/2;
}

