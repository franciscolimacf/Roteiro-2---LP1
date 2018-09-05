#ifndef CADASTRODEPESSOAS_H
#define CADASTRODEPESSOAS_H
#include "Pessoa.h"

using namespace std;


class CadastroDePessoas
{
private:
    Pessoa pessoa[2];

public:
    void setNome(int,string);
    void setEndereco(int,Endereco);
    void setTelefone(int,string);

    string getNome(int);
    string getEndereco(int);
    string getTelefone(int);

};

#endif // CADASTRODEPESSOAS_H
