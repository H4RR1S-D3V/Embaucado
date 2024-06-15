#include <iostream>
#include "../Funciones/decodificarMano.h"
#include "../Funciones/decodificarCarta.h"

using namespace std;

/// ESTA FUNCIÓN RECIBE EL VECTOR MANO DEL JUGADOR, EL TAMAÑO Y MUESTRA EN PANTALLA CADA UNA DE SUS CARTAS DECODIFICADA
void decodificarMano(int v[], int tam)
{
    // VARIABLE A PASARLE AL DECODIFICADOR DE CARTAS INDIVIDUALES
    int valor;

    // RECORRER EL VECTOR
    for(int i=0; i<tam; i++)
    {
        if(v[i]<6)  // CORAZONES
        {
            valor = v[i];
            decodificarCarta(valor);
            cout << "Corazón" << endl;
        }
        else if(v[i]<11)    // DIAMANTES
        {
            valor = v[i] - 5;
            decodificarCarta(valor);
            cout << "Diamante" << endl;
        }
        else if(v[i]<16)    // PICAS
        {
            valor = v[i] - 10;
            decodificarCarta(valor);
            cout << "Pica" << endl;
        }
        else    // TRÉBOLES
        {
            valor = v[i] - 15;
            decodificarCarta(valor);
            cout << "Trébol" << endl;
        }
    }
}
