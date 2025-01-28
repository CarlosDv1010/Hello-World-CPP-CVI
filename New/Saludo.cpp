#include "Saludo.h"
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

Saludo::Saludo(string nombre) : nombreEstudiante(nombre) {}

void Saludo::mostrarSaludo() {
    time_t ahora = time(nullptr);
    tm fecha;

    localtime_s(&fecha, &ahora);

    // Mostrar el saludo
    cout << "Hola Mundo. Saludo de " << nombreEstudiante
        << " hoy " << put_time(&fecha, "%d/%m/%Y") << "." << endl;
}