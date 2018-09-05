#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"


class Consultor: public Funcionario
{
public:
    double getSalario();
    double getSalario(double);
};

#endif // CONSULTOR_H
