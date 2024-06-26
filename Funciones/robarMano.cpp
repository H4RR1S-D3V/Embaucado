#include <iostream>
#include "../Funciones/robarMano.h"

using namespace std;

/// ESTA FUNCION GENERA N NUMEROS "ALEATOREOS" Y LOS GUARDA EN UN VECTOR (MANO DEL JUGADOR)
void robarMano(int v[], int tam)
{
    for(int y=0; y<tam; y++)
    {
        v[y] = rand() % 20+1;   // CARTA CODIFICADA DEL 1 AL 20
    }
}
