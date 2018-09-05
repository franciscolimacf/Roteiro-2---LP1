#include <iostream>
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main()
{
    TrabalhadorAssalariado lucas;
    TrabalhadorPorHora bruno;

    lucas.setNome("Lucas");
    lucas.setSalario(3000);

    bruno.setNome("Bruno");
    bruno.setValorDaHora(30);

    cout << lucas.calcularPagamentoSemanal() << endl;
    cout << bruno.calcularPagamentoSemanal(50) << endl;

    return 0;
}
