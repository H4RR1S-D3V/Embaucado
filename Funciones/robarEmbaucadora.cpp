#include <iostream>
#include <ctime>

#include "mostrarEmbaucadora.h"

using namespace std;

/// ESTA FUNCION GENNERA UN NUMERO "ALEATORIO" DEL 1 AL 4 Y SETEA EL RANGO DE CARTAS QUE NO SE SUMARAN A LOS PUTAJES DEL JUGADOR
void robarEmbaucadora(int &minimo, int &maximo)
{
    int nRandom = rand() % 4+1; /// NUMERO "ALEATORIO" DEL 1 AL 4

    if(nRandom == 1)
    {
        minimo = 1;
        maximo = 5;
    }
    else if(nRandom == 2)
    {
        minimo = 6;
        maximo = 10;
    }
    else if(nRandom == 3)
    {
        minimo = 11;
        maximo = 15;
    }
    else
    {
        minimo = 16;
        maximo = 20;
    }
    // MOSTRAR EMBAUCADORA

    mostrarEmbaucadora(nRandom);
}
