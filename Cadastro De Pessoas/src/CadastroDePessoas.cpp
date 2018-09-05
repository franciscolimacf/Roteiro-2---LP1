#include "CadastroDePessoas.h"

void CadastroDePessoas::setNome(int i,string nome){
    pessoa[i].setNome(nome);
}
void CadastroDePessoas::setEndereco(int i, Endereco endereco){
    pessoa[i].setEndereco(endereco);
}
void CadastroDePessoas::setTelefone(int i,string telefone){
    pessoa[i].setTelefone(telefone);
}
string CadastroDePessoas::getNome(int i){
    return pessoa[i].getNome();
}
string CadastroDePessoas::getEndereco(int i){
    return pessoa[i].getEndereco();
}
string CadastroDePessoas::getTelefone(int i){
    return pessoa[i].getTelefone();
}
