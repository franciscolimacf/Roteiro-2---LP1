#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;

class Funcionario
{
protected:
    int matricula;
    string nome;
    double salario;
public:
    Funcionario();
    void setMatricula(int);
    void setNome(string);
    void setSalario(double);
    int getMatricula();
    string getNome();
    double getSalario();
};

#endif // FUNCIONARIO_H
