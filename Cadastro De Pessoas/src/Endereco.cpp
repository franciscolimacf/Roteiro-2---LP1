#include "Endereco.h"


Endereco::Endereco()
{
    rua = numero = bairro = cidade = estado = CEP = " ";
}

Endereco::Endereco(string rua, string numero, string bairro, string cidade, string estado, string CEP)
{
    this->rua = rua;
    this->numero = numero;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
    this->CEP = CEP;
}
string Endereco::toString(){
    string endr;
    endr = rua+", "+numero+", "+bairro+", "+cidade+", "+estado+", "+CEP;
    return endr;
}

