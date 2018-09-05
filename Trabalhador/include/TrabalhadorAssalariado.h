#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"


class TrabalhadorAssalariado: public Trabalhador
{
public:
    double calcularPagamentoSemanal();
};

#endif // TRABALHADORASSALARIADO_H
