#include "Funcionario.h"

Funcionario::Funcionario()
{
    matricula = 0;
    nome = " ";
    salario = 0.0;
}

void Funcionario::setMatricula(int m)
{
    matricula = m;
}

void Funcionario::setNome(string n)
{
    nome = n;
}

void Funcionario::setSalario(double s)
{
    salario = s;
}

int Funcionario::getMatricula()
{
    return matricula;
}

string Funcionario::getNome()
{
    return nome;
}

double Funcionario::getSalario()
{
    return salario;
}
