#include "Consultor.h"

double Consultor::getSalario()
{
    return 1.1*salario;
}

double Consultor::getSalario(double percentual)
{
    return percentual/100*salario;
}
