#include "Pedido.h"

Pedido::Pedido()
{
    numero =0;
    descricao = " ";
    quantidade =0;
    preco = 0.0;
}
Pedido::Pedido(int nmr, std::string desc,int quan,double prc)
{
    numero = nmr;
    descricao = desc;
    quantidade = quan;
    preco = prc;
}

void Pedido::setNumero(int nmr){
    numero = nmr;
}
void Pedido::setDescricao(std::string desc){
    descricao = desc;
}
void Pedido::setQuantidade(int quan){
    quantidade = quan;
}
void Pedido::setPreco(double prc){
    preco = prc;
}

int Pedido::getNumero(){
    return numero;
}
std::string Pedido::getDescricao(){
    return descricao;
}
int Pedido::getQuantidade(){
    return quantidade;
}
double Pedido::getPreco(){
    return preco;
}
