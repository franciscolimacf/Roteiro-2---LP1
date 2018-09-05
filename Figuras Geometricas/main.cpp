#include <iostream>
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
    Triangulo t = Triangulo();
    Quadrado q = Quadrado();
    Circulo c = Circulo();

    t.calculaArea(3,4);
    q.calculaArea(5,5);
    c.calculaArea(2);

    cout << "Figura: " << t.getNome() << endl << "Area: " << t.calculaArea(3,4) << endl << endl;

    cout << "Figura: " << q.getNome() << endl << "Area: " << q.calculaArea(5,5) << endl << endl;

    cout << "Figura: " << c.getNome() << endl << "Area: " << c.calculaArea(2) << endl << endl;

    return 0;
}
