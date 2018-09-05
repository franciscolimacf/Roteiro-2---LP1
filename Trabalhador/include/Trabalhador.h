#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

using namespace std;

class Trabalhador
{
protected:
    string  nome;
    double salario;
public:
    Trabalhador();
    void setNome(string);
    void setSalario(double);
    string getNome();
    double getSalario();

};

#endif // TRABALHADOR_H
