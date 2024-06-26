#include <iostream>

#include "mostrarEmbaucadora.h"

using namespace std;

/// ESTA FUNCION RECIHBE UN NUMERO DEL 1 AL 4 Y MUESTRA LA EMBAUUCADORA CORRESPONDIENTE
void mostrarEmbaucadora(int nRandom)
{
    switch(nRandom)
    {
    case 1:
        cout << endl << "CARTA EMBAUCADORA: CORAZON" << endl;
        break;

    case 2:
        cout << endl << "CARTA EMBAUCADORA: DIAMANTE" << endl;
        break;

    case 3:
        cout << endl << "CARTA EMBAUCADORA: PICA" << endl;
        break;

    case 4:
        cout << endl << "CARTA EMBAUCADORA: TREBOL" << endl;
        break;
    }
}
