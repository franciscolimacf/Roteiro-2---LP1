#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
}

void MesaDeRestaurante::adicionaAoPedido(int i,int n, std::string d, int q, double p){
    comanda[i] = Pedido(n,d,q,p);

}
void MesaDeRestaurante::zeraPedidos(){
    int q;



    for(q=0;q<10;q++){
        comanda[q] = Pedido();
    }
}

double MesaDeRestaurante::calculaTotal(){
    int q;
    double total =0;

    for(q=0;q<10;q++){
        total+=(comanda[q].getPreco()*comanda[q].getQuantidade());
    }
    return total;
}

void MesaDeRestaurante::addQuantidade(int i,int q){
    int add = comanda[i].getQuantidade() + q;
    comanda[i].setQuantidade(add);
}
