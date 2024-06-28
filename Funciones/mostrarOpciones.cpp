#include <iostream>

#include "rlutil.h"
#include "mostrarOpciones.h"

using namespace std;

void mostrarOpciones()
{
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
}
