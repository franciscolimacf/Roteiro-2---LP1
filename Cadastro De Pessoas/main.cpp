#include <iostream>
#include "CadastroDePessoas.h"

using namespace std;

int main()
{

    Endereco endereco1 = Endereco("Debora da silva", "75", "Aeroclube", "Joao Pessoa", "PB", "58036-843");
    Endereco endereco2 = Endereco("Rita miranda", "288", "Treze de maio", "Joao Pessoa", "PB", "58036-123");

    CadastroDePessoas cad;

    cad.setNome(0, "Lucas");
    cad.setNome(1, "Bruno");

    cad.setEndereco(0, endereco1);
    cad.setEndereco(1, endereco2);

    cad.setTelefone(0, "996054755");
    cad.setTelefone(1, "998304785");


    cout << "Nome: " << cad.getNome(0) << endl;
    cout << "Endereco: " << cad.getEndereco(0) << endl;
    cout << "Telefone: " << cad.getTelefone(0) << endl;

    cout<< "----------------------------------------------------------------------------" << endl;

    cout << "Nome: " << cad.getNome(1) << endl;
    cout << "Endereco: " << cad.getEndereco(1) << endl;
    cout << "Telefone: " << cad.getTelefone(1) << endl;


}
