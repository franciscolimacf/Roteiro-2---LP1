#include "Trabalhador.h"

Trabalhador::Trabalhador()
{
    nome = " ";
    salario = 0;
}

void Trabalhador::setNome(string n)
{
    nome = n;
}

void Trabalhador::setSalario(double s)
{
    salario = s;
}

string Trabalhador::getNome()
{
    return nome;
}

double Trabalhador::getSalario()
{
    return salario;
}
