#include <iostream>
#include "../Funciones/chequearMano2.h"

using namespace std;

/// ESTA FUNCION RECIBE AMBAS MANOS DE LOS JUGADORES Y VERIFICA QUE NO HAYA REPETIDAS ENTRE SI
/// DEVUELVE TRUE SI HAY REPETIDAS Y FASLE SI NO HAY
bool chequearMano2(int vPropio[], int vRival[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        for(int j=0; j<tam; j++)
        {
            if(vPropio[i] == vRival[j]) // REPETIDA
                {
                    return false;
                }
        }
    }
    return true;
}
