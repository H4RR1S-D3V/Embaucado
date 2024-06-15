#include <iostream>
#include "../Funciones/chequearMano2.h"

using namespace std;

bool chequearMano2(int vPropio[], int vRival[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        for(int j=0; j<tam; j++)
        {
            if(vPropio[i] == vRival[j])
                {
                    return false;
                }
        }
    }
    return true;
}
