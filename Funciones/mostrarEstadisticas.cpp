#include <iostream>
#include "rlutil.h"

using namespace std;

void mostrarEstadisticas(int vTopTresPuntos[], string vTopTresNombres[])
{
    rlutil::cls();
    rlutil :: locate (50, 10);
    rlutil ::setColor(rlutil::BROWN);
    cout << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 <<  (char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 << endl;
    rlutil :: locate (50, 12);
    cout << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 <<  (char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 << endl;
    rlutil :: locate (50, 20);
    cout << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 <<  (char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 << endl;

    rlutil ::setColor(rlutil::WHITE);
    rlutil :: locate (60, 11);
    cout << "= T O P   3   M A Y O R E S  P U N T A J E S =" << endl;

    rlutil :: locate (59, 14);
    cout << "1"<< (char) 248 << endl;
    rlutil :: locate (59, 16);
    cout << "2"<< (char) 248 << endl;
    rlutil :: locate (59, 18);
    cout << "3"<< (char) 248 << endl;

    rlutil :: locate (75, 14);
    cout << vTopTresPuntos[0] << endl;
    rlutil :: locate (75, 16);
    cout << vTopTresPuntos[1] << endl;
    rlutil :: locate (75, 18);
    cout << vTopTresPuntos[2] << endl;

    rlutil :: locate (95, 14);
    cout << vTopTresNombres[0] << endl;
    rlutil :: locate (95, 16);
    cout << vTopTresNombres[1] << endl;
    rlutil :: locate (95, 18);
    cout << vTopTresNombres[2] << endl;


    rlutil::anykey();
    rlutil::cls();
}
