#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"


class RestauranteCaseiro
{
private:
    MesaDeRestaurante mesa[3];


public:

    RestauranteCaseiro();
    void adicionaAoPedido(int,int,int);
    double calculaTotalRestaurante();

};

#endif // RESTAURANTECASEIRO_H
