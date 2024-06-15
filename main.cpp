#include <iostream>
#include <ctime>
#include "Funciones/mostrarMenu.h"

using namespace std;

int main()
{
    /// SEMILLA EN CERO (PARA NÚMEROS "ALEATOREOS")
    srand(time(0));
    /// INGRESAR AL MENÚ PRINCIPAL
    mostrarMenu();

    return 0;
}
