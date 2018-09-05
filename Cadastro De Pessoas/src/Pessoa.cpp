#include "Pessoa.h"

Pessoa::Pessoa(){

}

Pessoa::Pessoa(string nome)
{
    this->nome = nome;
}

Pessoa::Pessoa(string nome, Endereco endereco, string telefone)
{
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}
void Pessoa::setNome(string nome){
    this->nome = nome;
}
void Pessoa::setEndereco(Endereco endereco){
    this->endereco = endereco;
}
void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}
string Pessoa::getNome(){
    return nome;
}
string Pessoa::getEndereco(){

    return endereco.toString();

}
string Pessoa::getTelefone(){
    return telefone;
}
