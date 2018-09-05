#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"


class RestauranteCaseiro
{
private:
    MesaDeRestaurante mesa[3];
public:
    RestauranteCaseiro();
    int getQuant();
    void adicionaAoPedido(int,string,double);
    double calculaTotalRestaurante();

};

#endif // RESTAURANTECASEIRO_H
