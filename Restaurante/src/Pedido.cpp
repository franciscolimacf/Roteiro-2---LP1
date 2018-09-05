#include "Pedido.h"

Pedido::Pedido()
{
    numero = 0;
    descricao = " ";
    quantidade = 0;
    preco = 0.0;
}

Pedido::Pedido(int numero, string descricao, int quantidade, double preco)
{

    this->numero = numero;
    this->descricao = descricao;
    this->quantidade = quantidade;
    this->preco = preco;

}

string Pedido::getDescricao()
{
    return descricao;
}

double Pedido::getPreco()
{
    return preco*quantidade;
}

string Pedido::getPedido()
{
    string nmr,quant, prec, pedido;
    stringstream ss;
    ss << numero;
    nmr = ss.str();
    ss << quantidade;
    quant = ss.str();
    ss << preco;
    prec = ss.str();

    pedido = "Numero: " + nmr + "\nDescricao: " + descricao + "\nQuantidade: " + quant + "\nPreco: " + prec + "\n";

    return pedido;
}

void Pedido::addQuant()
{
    quantidade++;
}
