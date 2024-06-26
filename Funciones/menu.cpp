#include <iostream>
#include <ctime>
#include "rlutil.h"
#include "mostrarEstadisticas.h"
#include "jugar.h"
#include "mostrarCreditos.h"
#include "mostrarReglas.h"

using namespace std;


void menu(int vTopTresPuntos[], string vTopTresNombres[])
{
    /// VECTORES ESTADISTICAS

    int opciones = 1;
    int posicionY = 0;

    rlutil ::setBackgroundColor(rlutil::BLACK);
    rlutil ::setColor(rlutil::WHITE);
    rlutil ::hidecursor();
    do
    {
        rlutil ::hidecursor();

//El cuadrado que encierra el menu
//Linea arriba y abajo
        rlutil::locate(60,15);
        cout << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 <<  (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << endl;
        rlutil::locate(60,25);
        cout << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 <<  (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << endl;

//Lineas de los costados
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
/// Esquinas
        rlutil::locate(59,15);
        cout << (char) 201<< endl;
        rlutil::locate(59,25);
        cout << (char) 200<< endl;
        rlutil::locate(104,25);
        cout << (char) 188<< endl;
        rlutil::locate(104,15);
        cout << (char) 187<< endl;


///Menu
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
        //cout << "key: "<< key << endl;
        //rlutil::anykey();

        switch (key)
        {
        case 14:
            //Arriba
            rlutil::locate(77,17 +(posicionY));
            cout << " " << endl;
            posicionY--;
            if (posicionY<0)
            {
                posicionY = 0;
            }
            break;
        case 15:
            //Abajo
            rlutil::locate(77,17 +(posicionY));
            cout << " " << endl;
            posicionY++;
            if (posicionY>4)
            {
                posicionY = 4;
            }
            break;
        case 1:
            //ENTER
            switch (posicionY)
            {
            case 0:
                ///EN CONSTRUCCION-FALTA ARMAR LA FUNCION PARA JUGAR
                rlutil::cls();
                /// FUNCION DE JUEGO
                jugar(vTopTresPuntos, vTopTresNombres);
                break;
            case 1:
                ///REGLAS
                mostrarReglas();
                break;
            case 2:
                ///NO MUESTRA EL COUT-REVISARLO
                rlutil::cls();
                mostrarEstadisticas(vTopTresPuntos, vTopTresNombres);
                rlutil::anykey();
                rlutil::cls();
                break;
            case 3:
                mostrarCreditos();
                break;
            case 4:
                opciones = 0;
            }
            break;
        }
    }

    /*default:
        rlutil::cls();
        rlutil ::setColor(rlutil::RED);
        rlutil::locate(15, 1);
        cout << "------------OPCION NO VALIDA. PULSE <<ENTER>> PARA REGRESAR AL MENU------------"<< endl;
        rlutil::anykey();
        rlutil ::setColor(rlutil::BLACK);/*/





    while (opciones !=0);

}
