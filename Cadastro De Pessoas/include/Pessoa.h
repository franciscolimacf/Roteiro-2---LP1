#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"

using namespace std;

class Pessoa
{
private:
    string nome;
    Endereco endereco;
    string telefone;
public:
    Pessoa();
    Pessoa(string);
    Pessoa(string,Endereco,string);
    void setNome(string);
    void setEndereco(Endereco);
    void setTelefone(string);
    string getNome();
    string getEndereco();
    string getTelefone();
};

#endif // PESSOA_H
