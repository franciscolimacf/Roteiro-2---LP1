#include "Funcionario.h"

Funcionario::Funcionario()
{
    matricula = 0;
    nome = " ";
    salario = 0.0;
}
void Funcionario::setMatricula(int mat){
    matricula = mat;
}
void Funcionario::setNome(string name){
    nome = name;
}
void Funcionario::setSalario(double sal){
    salario = sal;
}
int Funcionario::getMatricula(){
    return matricula;
}
string Funcionario::getNome(){
    return nome;
}
double Funcionario::getSalario(){
    return salario;
}
