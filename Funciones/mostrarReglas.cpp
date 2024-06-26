#include <iostream>
#include "rlutil.h"
#include "mostrarReglas.h"


using namespace std;

void mostrarReglas()
{
    rlutil::cls();

    rlutil::locate(30,15);

    cout << (char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<  (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << endl;

    rlutil::locate(30,35);

    cout << (char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<  (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << endl;

    rlutil::locate(75,17);
    cout << (char) 168 <<"DE QUE SE TRATA?"<< endl;

    rlutil::locate(40,18);
    cout << "Es un juego de naipes para dos a cuatro personas,basado en las cartas de la baraja francesa." << endl;
    rlutil::locate(41,20);
    cout << "Las cartas de la baraja francesa a utilizar son : 10, J, Q, K y A de las cuatro figuras:"<< endl;
    rlutil::locate(60,22);
    cout << " Corazon" << " "<< (char) 03  << ", Diamante" << " " <<(char) 04  << ", Picas" << " "<<  (char) 06 << " " << " y Trebol " << (char) 05 << "." << endl;
    rlutil::locate(38,23);
    cout << "Existen 4 cartas sin valor que ocupan solo una de las cuatro figuras. Estas son las cartas embaucadoras." << endl;

    rlutil::locate(77,26);
    cout << "MODO DE JUEGO"<< endl;
    rlutil::locate(40,27);
    cout << "A lo largo de 3 rondas los jugadores reciben cinco cartas al azar que se denominan mano."<< endl;
    rlutil::locate(50,29);
    cout << "Ademas, se da vuelta sobre la mesa una carta de las embaucadoras." << endl;
    rlutil::locate(32,30);
    cout << "Se suman los valores de las cartas que salen obviando las cartas cuyas figuras coincidan con la embaucadora."<< endl;
    rlutil::locate(37,33);
    cout << "Una partida de embaucadora la gana quien haya obtenido más puntos a lo largo de las tres rondas."<< endl;

    rlutil::locate(61, 38);
    cout << "PRESIONE <ENTER> PARA VOLVER AL MENU DE INICIO" << endl;

    rlutil::anykey();
    rlutil::cls();
}
