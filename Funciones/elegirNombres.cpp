#include <iostream>
#include "rlutil.h"

using namespace std;

int main()
{
    int fin = 1;
    int posicionCursor = 0 ;

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
        string nombreJugadorUno, nombreJugadorDos;

        rlutil::locate(55,10);
        cout << "INGRESE NOMBRE DE JUGADOR UNO: ";
        rlutil::locate(85,10);
        cin >> nombreJugadorUno;
        cout << endl;
        rlutil::locate(55,14);
        cout << "INGRESE NOMBRE DE JUGADOR DOS: ";
        rlutil::locate(85,14);
        cin >> nombreJugadorDos;
        cout << endl;

        rlutil::locate(70,17);
        cout << "CONFIRMAR NOMBRES?" << endl;

        rlutil::locate(78,19);
        cout << "SI"<< endl;
        rlutil::locate(78,20);
        cout << "NO"<< endl;

//No se mueve-VerificarDespues

        rlutil :: locate (72, 19);
        cout << (char) 16 << endl;


        switch (posicionCursor)
        {
        case 1:

            break;
        case 0:

            break;
        }

        cin >> fin;
    }
    while (fin != 0);


    return 0;
}
