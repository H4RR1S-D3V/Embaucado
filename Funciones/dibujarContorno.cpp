#include <iostream>

#include "rlutil.h"
#include "dibujarContorno.h"

using namespace std;

void dibujarContorno()
{
    ///ESTILOS DE RONDAS

    // INFERIOR

    rlutil :: locate (45, 18);
    for(int i=0; i<69; i++)
    {
        cout << (char) 205;
    }
    rlutil :: locate (45, 18);

    // SUPERIOR
    rlutil :: locate (45,7);
    for(int i=0; i<69; i++)
    {
        cout << (char) 205;
    }
}
