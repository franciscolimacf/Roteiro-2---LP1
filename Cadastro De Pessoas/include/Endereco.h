#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco
{
private:
    string rua;
    string numero;
    string bairro;
    string cidade;
    string estado;
    string CEP;

public:
    Endereco();
    Endereco(string,string,string,string,string,string);
    string toString();
};

#endif // ENDERECO_H
