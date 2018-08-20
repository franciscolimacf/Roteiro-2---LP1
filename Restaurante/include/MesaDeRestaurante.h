#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"



class MesaDeRestaurante
{
private:
    Pedido comanda[10];

public:
    MesaDeRestaurante();

    void adicionaAoPedido(int,int,std::string,int,double);
    void zeraPedidos();
    double calculaTotal();
    void addQuantidade(int,int);
};

#endif // MESADERESTAURANTE_H
