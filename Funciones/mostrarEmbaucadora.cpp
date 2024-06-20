#include <iostream>

#include "mostrarEmbaucadora.h"

using namespace std;

void mostrarEmbaucadora(int nRandom)
{
    switch(nRandom)
    {
    case 1:
        cout << endl << "CARTA EMBAUCADORA: CORAZON";
        break;

    case 2:
        cout << endl << "CARTA EMBAUCADORA: DIAMANTE";
        break;

    case 3:
        cout << endl << "CARTA EMBAUCADORA: PICA";
        break;

    case 4:
        cout << endl << "CARTA EMBAUCADORA: TREBOL";
        break;
    }
}
