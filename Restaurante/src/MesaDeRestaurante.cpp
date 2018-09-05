#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
    int i;
    for(i=0;i<5;i++)
        pedido[i] = Pedido();

}

void MesaDeRestaurante::adicionaAoPedido(string desc,double price)
{
    int i;
    bool flag=false;
    for(i=0;i<5;i++){

        if(pedido[i].getDescricao() == desc){
            pedido[i].addQuant();
            flag = true;
            break;
        }

    }

    if(flag==false){

        for(i=0;i<5;i++){

            if(pedido[i].getDescricao()== " "){
                pedido[i] = Pedido(i,desc,1,price);
                break;
            }
        }

    }
}

void MesaDeRestaurante::zerarPedidos()
{
    int i;
    for(i=0;i<5;i++){
        pedido[i] = Pedido();
    }
}

double MesaDeRestaurante::calculaTotal()
{
    int i;
    double total=0;
    for(i=0;i<5;i++){
        total += pedido[i].getPreco();
    }
    return total;
}
