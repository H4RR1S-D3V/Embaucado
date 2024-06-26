#include <iostream>
#include "../Funciones/decodificarCarta.h"

using namespace std;

/// ESTA FUNCION RECIBE UN VALOR CODIFICADO Y MUESTRA EN PANTALLA EL NUMERO O LA FIGURA ASOCIADA A EL

void decodificarCarta(int valor)
{
    switch(valor)
    {
    case 1:
        cout << "10 ";
        break;
    case 2:
        cout << "J ";
        break;
    case 3:
        cout << "Q ";
        break;
    case 4:
        cout << "K ";
        break;
    default:
        cout << "A ";
        break;
    }
}
