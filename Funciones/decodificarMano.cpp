#include <iostream>

#include "rlutil.h"
#include "../Funciones/decodificarMano.h"
#include "../Funciones/decodificarCarta.h"

using namespace std;

/// ESTA FUNCION RECIBE EL VECTOR MANO DEL JUGADOR, EL TAMA¥O Y MUESTRA EN PANTALLA CADA UNA DE SUS CARTAS DECODIFICADA
void decodificarMano(int x, int y, int v[], int tam)
{
    // VARIABLE A PASARLE AL DECODIFICADOR DE CARTAS INDIVIDUALES
    int valor;

    // RECORRER EL VECTOR

    for(int i=0; i<tam; i++)
    {
        if(v[i]<6)  // CORAZONES
        {
            valor = v[i];
            decodificarCarta(x, y+i, valor);
            rlutil::locate(x + 3, y+i);
            cout << char(03) << endl;
        }
        else if(v[i]<11)    // DIAMANTES
        {
            valor = v[i] - 5;
            decodificarCarta(x, y+i, valor);
            rlutil::locate(x + 3, y+i);
            cout << char(04) << endl;
        }
        else if(v[i]<16)    // PICAS
        {
            valor = v[i] - 10;
            decodificarCarta(x, y+i, valor);
            rlutil::locate(x + 3, y+i);
            cout << char(06) << endl;
        }
        else    // TREBOLES
        {
            valor = v[i] - 15;
            decodificarCarta(x, y+i, valor);
            rlutil::locate(x + 3, y+i);
            cout << char(05) << endl;
        }
    }
}
