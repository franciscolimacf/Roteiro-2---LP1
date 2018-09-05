#include <iostream>
#include "RestauranteCaseiro.h"

using namespace std;

int main()
{
    RestauranteCaseiro gla = RestauranteCaseiro();

    gla.adicionaAoPedido(0, "coxinha", 2.5);
    gla.adicionaAoPedido(1, "pastel", 2.5);
    gla.adicionaAoPedido(2, "empada", 2.5);

    cout << gla.calculaTotalRestaurante() << endl;

    gla.adicionaAoPedido(0, "coxinha", 2.5);
    gla.adicionaAoPedido(1, "crossaint", 4.5);

    cout << gla.calculaTotalRestaurante() << endl;

    return 0;
}
