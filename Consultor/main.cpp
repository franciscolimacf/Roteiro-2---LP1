#include <iostream>
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario fun1;
    Consultor con1;

    fun1.setMatricula(1001);
    fun1.setNome("Ambrosio");
    fun1.setSalario(1800.5);
    con1.setMatricula(1101);
    con1.setNome("Lucas");
    con1.setSalario(2300.0);

    cout << "Nome: " << fun1.getNome() << endl << "Matricula: " << fun1.getMatricula() << endl << "Salario: " << fun1.getSalario() << endl << endl;

    cout << "Nome: " << con1.getNome() << endl << "Matricula: " << con1.getMatricula() << endl << "Salario: " << con1.getSalario() << endl;
    return 0;
}
