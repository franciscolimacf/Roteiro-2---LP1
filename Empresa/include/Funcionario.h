#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

using namespace std;

class Funcionario
{
private:
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
