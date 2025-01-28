#ifndef SALUDO_H
#define SALUDO_H

#include <string>
#include <ctime>

using namespace std;

class Saludo {
private:
    string nombreEstudiante;
public:
    Saludo(string nombre);
    void mostrarSaludo();
};

#endif