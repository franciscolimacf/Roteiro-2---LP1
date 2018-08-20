#include <iostream>
#include "RestauranteCaseiro.h"

using namespace std;

int main()
{
    RestauranteCaseiro mesa1;

    MesaDeRestaurante comanda;

    comanda.adicionaAoPedido(0,001,"coxinha", 2, 2.5);
    comanda.adicionaAoPedido(1,002,"pastel", 1, 3.0);

    std::cout << comanda.calculaTotal() << std::endl;





    return 0;
}
