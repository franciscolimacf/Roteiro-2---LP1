#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"


class MesaDeRestaurante
{
private:
    Pedido pedido[5];
public:
    MesaDeRestaurante();
    void adicionaAoPedido(string,double);
    void zerarPedidos();
    double calculaTotal();
};

#endif // MESADERESTAURANTE_H
