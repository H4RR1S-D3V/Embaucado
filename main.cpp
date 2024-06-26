#include <iostream>
#include <ctime>
#include "Funciones/menu.h"

using namespace std;

int main()
{
    /// VECTORES DE ESTADISTICAS (SE REINICIAN CADA JUEGO NUEVO)
    int vTopTresPuntos[3] = {0};
    string vTopTresNombres[3];

    /// SEMILLA EN CERO (PARA NUMEROS "ALEATOREOS")
    srand(time(0));
    /// INGRESAR AL MENU PRINCIPAL
    menu(vTopTresPuntos, vTopTresNombres);

    return 0;
}
