#include <iostream>
#include "../Funciones/mostrarMano.h"

using namespace std;

void mostrarMano(int v[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        cout << v[i] << endl;
    }
}
