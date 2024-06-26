#include <iostream>

#include "rlutil.h"
#include "jugar.h"
#include "mostrarReglas.h"
#include "mostrarEstadisticas.h"
#include "mostrarCreditos.h"

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
        rlutil ::hidecursor();

        /// EL CUADRADO QUE ENCIERRA EL MENU

        // LINEA ARRIBA Y ABAJO
        rlutil::locate(60,15);
        cout << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 <<  (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << endl;
        rlutil::locate(60,25);
        cout << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 <<  (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << endl;

        // LINEAS DE LOS COSTADOS
        rlutil::locate(59,24);
        cout << (char) 186 << endl;
        rlutil::locate(59,23);
        cout << (char) 186 << endl;
        rlutil::locate(59,22);
        cout << (char) 186 << endl;
        rlutil::locate(59,21);
        cout << (char) 186 << endl;
        rlutil::locate(59,20);
        cout << (char) 186 << endl;
        rlutil::locate(59,19);
        cout << (char) 186 << endl;
        rlutil::locate(59,18);
        cout << (char) 186 << endl;
        rlutil::locate(59,17);
        cout << (char) 186 << endl;
        rlutil::locate(59,16);
        cout << (char) 186 << endl;

        rlutil::locate(104,24);
        cout << (char) 186 << endl;
        rlutil::locate(104,23);
        cout << (char) 186 << endl;
        rlutil::locate(104,22);
        cout << (char) 186 << endl;
        rlutil::locate(104,21);
        cout << (char) 186 << endl;
        rlutil::locate(104,20);
        cout << (char) 186 << endl;
        rlutil::locate(104,19);
        cout << (char) 186 << endl;
        rlutil::locate(104,18);
        cout << (char) 186 << endl;
        rlutil::locate(104,17);
        cout << (char) 186 << endl;
        rlutil::locate(104,16);
        cout << (char) 186 << endl;
        // ESQUINAS
        rlutil::locate(59,15);
        cout << (char) 201<< endl;
        rlutil::locate(59,25);
        cout << (char) 200<< endl;
        rlutil::locate(104,25);
        cout << (char) 188<< endl;
        rlutil::locate(104,15);
        cout << (char) 187<< endl;

        ///MENU
        rlutil::locate(78,17);
        cout << "JUGAR"<<endl;
        rlutil::locate(78,18);
        cout <<  "REGLAS"<< endl;
        rlutil::locate(78,19);
        cout <<  "ESTADISTICAS"<< endl;
        rlutil::locate(78,20);
        cout <<  "CREDITOS"<< endl;
        rlutil::locate(78,21);
        cout <<  "SALIR"<< endl;

        rlutil::locate(77,17 +(posicionY));
        cout << (char) 16 << endl;

        int key = rlutil :: getkey();

        /// MOVIMIENTOS DEL SELECCIONADOR (FLECHITA)
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
    while (opciones !=0);
}
