#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{

}

void RestauranteCaseiro::adicionaAoPedido(RestauranteCaseiro table){
    table.adicionaAoPedido();
}

double RestauranteCaseiro::calculaTotalRestaurante(){
    int q;
    double total;

    for(q=0;q<10;q++){
        total = mesa[0].calculaTotal() + mesa[1].calculaTotal() + mesa[2].calculaTotal();

    }
    return total;
}
