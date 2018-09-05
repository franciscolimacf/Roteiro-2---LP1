#include "TrabalhadorPorHora.h"

void TrabalhadorPorHora::setValorDaHora(double valor)
{
    valorDaHora=valor;
}

double TrabalhadorPorHora::calcularPagamentoSemanal(int horas)
{
    double extra;

    if(horas<=40)
        return horas*valorDaHora;

    if(horas>40){
        extra=horas-40;
        return (40*valorDaHora)+(extra*(1.5*valorDaHora));
    }
}
