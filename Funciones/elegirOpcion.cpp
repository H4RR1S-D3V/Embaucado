#include <iostream>

#include "rlutil.h"

#include "elegirOpcion.h"

#include "jugar.h"
#include "mostrarReglas.h"
#include "mostrarEstadisticas.h"
#include "mostrarCreditos.h"

using namespace std;

void elegirOpcion(int key, int &opciones, int &posicionY, int vTopTresPuntos[], string vTopTresNombres[])
{
    switch (key)
    {
    case 14:
        // ARRIBA
        rlutil::locate(77,17 +(posicionY));
        cout << " " << endl;
        posicionY--;
        if (posicionY<0)
        {
            posicionY = 0;
        }
        break;
    case 15:
        // ABAJO
        rlutil::locate(77,17 +(posicionY));
        cout << " " << endl;
        posicionY++;
        if (posicionY>4)
        {
            posicionY = 4;
        }
        break;
    case 1:
        // ENTER
        switch (posicionY)
        {
        case 0:
            rlutil::cls();
            /// FUNCION DE JUEGO
            jugar(vTopTresPuntos, vTopTresNombres); // PASAR VECTORES PARA LLENARLOS CON LOS PUNTAJES
            break;
        case 1:
            /// REGLAS
            mostrarReglas();
            break;
        case 2:
            /// ESTADISTICAS
            mostrarEstadisticas(vTopTresPuntos, vTopTresNombres);   // PASAR LOS VECTORES DE ESTADISTICAS PARA ITERARLOS Y MOSTRARLOS
            break;
        case 3:
            /// CREDITOS
            mostrarCreditos();
            break;
        case 4:
            opciones = 0;
        }
        break;
    }
}
