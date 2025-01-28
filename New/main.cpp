#include "Saludo.h"
#include <chrono> 
#include <thread> 

using namespace std;

int main() {
    Saludo saludo("Carlos Fernando Diaz Vargas");
    saludo.mostrarSaludo();

    this_thread::sleep_for(chrono::seconds(5));

    return 0;
}