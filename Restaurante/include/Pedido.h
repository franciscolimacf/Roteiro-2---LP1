#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>
#include <sstream>

using namespace std;

class Pedido
{
private:
    int numero;
    string descricao;
    int quantidade;
    double preco;
public:
    Pedido();
    Pedido(int,string,int,double);
    string getDescricao();
    double getPreco();
    string getPedido();
    void addQuant();

};

#endif // PEDIDO_H
