#include <iostream>
#include <ctime>
#include "rlutil.h"
//#include "mostrarEstadisticas.h"
#include "jugar.h"



using namespace std;


void menu()
{
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
                /// FUNICON DE JUEGO
                jugar("guada", "manu");
                ///ACA PONER FUNCION PARA INGRESAR NOMBRES-POR AHORA HAY ESTO
                rlutil::cls();
                break;
            case 1:
                ///REGLAS
                rlutil::cls();

                rlutil::locate(30,15);

                cout << (char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<  (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << endl;

                rlutil::locate(30,35);

                cout << (char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<(char) 205 <<  (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << endl;

                rlutil::locate(75 ,17);
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
                rlutil::anykey();
                rlutil::cls();
                break;
            case 2:
                ///NO MUESTRA EL COUT-REVISARLO
                rlutil::cls();
                /// mostrarEstadisticas();
                rlutil::anykey();
                rlutil::cls();
                break;
            case 3:
                rlutil::cls();
                rlutil::locate(2, 5);
                cout << "CREDITOS"<< endl;
                cout << "GRUPO 1 :"<< endl;
                cout << "FRANCHI LEIVA GUADALUPE - LEGAJO: 30971"<< endl;
                rlutil::anykey();
                rlutil::cls();
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
