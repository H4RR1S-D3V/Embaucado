#include <iostream>

#include "rlutil.h"
#include "estiloDeMenu.h"

using namespace std;

void estiloDeMenu()
{
    // LINEA ARRIBA Y ABAJO
    for(int i=0; i<45; i++)
    {
        rlutil::locate(60+i,15);
        cout << (char) 205;

        rlutil::locate(60+i,25);
        cout << (char) 205;
    }
    // LINEAS DE LOS COSTADOS
    for(int j=24; j>15; j--)
    {
        rlutil::locate(59,j);
        cout << (char) 186;

        rlutil::locate(104,j);
        cout << (char) 186;
    }
    // ESQUINAS
    rlutil::locate(59,15);
    cout << (char) 201<< endl;
    rlutil::locate(59,25);
    cout << (char) 200<< endl;
    rlutil::locate(104,25);
    cout << (char) 188<< endl;
    rlutil::locate(104,15);
    cout << (char) 187<< endl;
}
