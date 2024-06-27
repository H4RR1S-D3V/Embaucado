#include <iostream>

#include "rlutil.h"
#include "mostrarEmbaucadora.h"

using namespace std;

/// ESTA FUNCION RECIHBE UN NUMERO DEL 1 AL 4 Y MUESTRA LA EMBAUUCADORA CORRESPONDIENTE
void mostrarEmbaucadora(int nRandom)
{
    switch(nRandom)
     {
    case 1:
        rlutil :: locate (80,6);
        cout << "CARTA EMBAUCADORA: "<< (char) 03 << "CORAZON" << (char) 03;
        break;

    case 2:
        rlutil :: locate (80,6);
        cout << "CARTA EMBAUCADORA: "<< (char) 04 << "DIAMANTE" << (char) 04 << endl;
        break;

    case 3:
        rlutil :: locate (80,6);
        cout << "CARTA EMBAUCADORA: " << (char) 06 << "PICA" << (char) 06 << endl;
        break;

    case 4:
        rlutil :: locate (80,6);
        cout << "CARTA EMBAUCADORA: " << (char) 05 << "TREBOL" << (char) 05 << endl;;
        break;
    }
}
