#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;

class FiguraGeometrica
{
protected:
    string nome;
public:
    string getNome();
    double calculaArea();
};

#endif // FIGURAGEOMETRICA_H
