#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"


class TrabalhadorPorHora: public Trabalhador
{
private:
    double valorDaHora;
public:
    void setValorDaHora(double);
    double calcularPagamentoSemanal(int);

};

#endif // TRABALHADORPORHORA_H
