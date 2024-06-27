#include <iostream>

#include "rlutil.h"
#include "ingresarNombres.h"

using namespace std;

void ingresarNombres(string &nombreJugadorUno, string &nombreJugadorDos)
{
    rlutil::cls();

    int fin = 1;
    int posicionY = 0;

    rlutil :: locate (46,8);
    cout << (char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 << (char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 << endl;
    rlutil :: locate (46,24);
    cout << (char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 << (char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 << endl;

    rlutil :: locate (45,8);
    cout << (char) 201 << endl;
    rlutil :: locate (45,24);
    cout << (char) 200 << endl;
    rlutil :: locate (45,23);
    cout << (char) 186 << endl;
    rlutil :: locate (45,22);
    cout << (char) 186 << endl;
    rlutil :: locate (45,21);
    cout << (char) 186 << endl;
    rlutil :: locate (45,20);
    cout << (char) 186 << endl;
    rlutil :: locate (45,19);
    cout << (char) 186 << endl;
    rlutil :: locate (45,18);
    cout << (char) 186 << endl;
    rlutil :: locate (45,17);
    cout << (char) 186 << endl;
    rlutil :: locate (45,16);
    cout << (char) 186 << endl;
    rlutil :: locate (45,15);
    cout << (char) 186 << endl;
    rlutil :: locate (45,14);
    cout << (char) 186 << endl;
    rlutil :: locate (45,13);
    cout << (char) 186 << endl;
    rlutil :: locate (45,12);
    cout << (char) 186 << endl;
    rlutil :: locate (45,11);
    cout << (char) 186 << endl;
    rlutil :: locate (45,10);
    cout << (char) 186 << endl;
    rlutil :: locate (45,9);
    cout << (char) 186 << endl;

    rlutil :: locate (115, 8);
    cout << (char) 187 << endl;
    rlutil :: locate (115,24);
    cout << (char) 188 << endl;
    rlutil :: locate (115,23);
    cout << (char) 186 << endl;
    rlutil :: locate (115,22);
    cout << (char) 186 << endl;
    rlutil :: locate (115,21);
    cout << (char) 186 << endl;
    rlutil :: locate (115,20);
    cout << (char) 186 << endl;
    rlutil :: locate (115,19);
    cout << (char) 186 << endl;
    rlutil :: locate (115,18);
    cout << (char) 186 << endl;
    rlutil :: locate (115,17);
    cout << (char) 186 << endl;
    rlutil :: locate (115,16);
    cout << (char) 186 << endl;
    rlutil :: locate (115,15);
    cout << (char) 186 << endl;
    rlutil :: locate (115,14);
    cout << (char) 186 << endl;
    rlutil :: locate (115,13);
    cout << (char) 186 << endl;
    rlutil :: locate (115,12);
    cout << (char) 186 << endl;
    rlutil :: locate (115,11);
    cout << (char) 186 << endl;
    rlutil :: locate (115,10);
    cout << (char) 186 << endl;
    rlutil :: locate (115,9);
    cout << (char) 186 << endl;

    do
    {
        rlutil::locate(55,10);
        cout << "INGRESE NOMBRE DE JUGADOR UNO:";
        rlutil::locate(86,10);
        getline(cin, nombreJugadorUno);

        rlutil::locate(55,14);
        cout << "INGRESE NOMBRE DE JUGADOR DOS:";
        rlutil::locate(86,14);
        getline(cin, nombreJugadorDos);

        rlutil::locate(70,17);
        cout <<(char) 168 <<"CONFIRMAR NOMBRES?" << endl;

        rlutil::locate(78,19);
        cout << "S / N" << endl;

        int key = rlutil :: getkey();

        switch (key)
        {
        case 83:
            //SI
            return;
            break;
        case 115:
            //si
            return;
            break;
        case 78:
            //NO
            rlutil::cls();
            ingresarNombres(nombreJugadorUno, nombreJugadorDos);
            break;
        case 110:
            //no
            rlutil::cls();
            ingresarNombres(nombreJugadorUno, nombreJugadorDos);
            break;

        }
        cin >> fin;
    }
    while (fin != 0);
}
