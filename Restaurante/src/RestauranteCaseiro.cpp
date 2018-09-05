#include "RestauranteCaseiro.h"
#include <iostream>

RestauranteCaseiro::RestauranteCaseiro()
{
    mesa[0] = MesaDeRestaurante();
    mesa[1] = MesaDeRestaurante();
    mesa[2] = MesaDeRestaurante();
}

void RestauranteCaseiro::adicionaAoPedido(int m, string d, double p)
{
    mesa[m].adicionaAoPedido(d,p);
}

double RestauranteCaseiro::calculaTotalRestaurante()
{
    double total=0;

    total = mesa[0].calculaTotal() + mesa[1].calculaTotal() + mesa[2].calculaTotal();

    return total;
}
