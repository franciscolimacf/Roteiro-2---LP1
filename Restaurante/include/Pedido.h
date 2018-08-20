#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>


class Pedido
{
private:
    int numero;
    std::string descricao;
    int quantidade;
    double preco;

public:
    Pedido();
    Pedido(int,std::string,int,double);

    void setNumero(int);
    void setDescricao(std::string);
    void setQuantidade(int);
    void setPreco(double);

    int getNumero();
    std::string getDescricao();
    int getQuantidade();
    double getPreco();
};

#endif // PEDIDO_H
