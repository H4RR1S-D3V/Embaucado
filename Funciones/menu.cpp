#include <iostream>

#include "rlutil.h"

#include "estiloDeMenu.h"
#include "mostrarOpciones.h"
#include "elegirOpcion.h"

using namespace std;

void menu(int vTopTresPuntos[], string vTopTresNombres[]) /// RECIBE LOS VECTORES DE ESTADISTICAS
{
    /// INICIALIZACION DE POSICIONES
    int opciones = 1;
    int posicionY = 0;

    /// ESTILOS
    rlutil ::setBackgroundColor(rlutil::BLACK);
    rlutil ::setColor(rlutil::WHITE);
    rlutil ::hidecursor();
    do
    {
        ///TITULO
        rlutil::locate(70,10);
        cout << "E  M  B  A  U  C  A  D  O" ;

        rlutil ::hidecursor();

        /// EL CUADRADO QUE ENCIERRA EL MENU
        estiloDeMenu();

        ///MENU
        mostrarOpciones();

        rlutil::locate(77,17 +(posicionY));
        cout << (char) 16 << endl;

        int key = rlutil :: getkey();

        /// MOVIMIENTOS DEL SELECCIONADOR (FLECHITA)
        elegirOpcion(key, opciones, posicionY, vTopTresPuntos, vTopTresNombres);
    }
    while (opciones !=0);
}
