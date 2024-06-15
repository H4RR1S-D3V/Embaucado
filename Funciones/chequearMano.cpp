#include <iostream>
#include "../Funciones/chequearMano.h"

using namespace std;

/// ETSA FUNCIÓN RECIBE EL VECTOR DE LA MANO DEL JUGADOR Y EL TAMAÑO. DEVUELVE TRUE SI NO HAY CARTAS REPETIDAS Y FALSE SI NO HAY.

bool chequearMano(int v[], int tam)
{
    for(int i=0; i<tam - 1; i++)
    {
        for(int j=i+1; j<tam; j++)
        {
            if(v[i] == v[j])
                {
                    return false;
                }
        }
    }
    return true;
}
