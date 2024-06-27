#include <iostream>
#include <cstdlib>
#include <string.h>

#include "rlutil.h"

#include "ingresarNombres.h"
#include "robarMano.h"
#include "chequearMano.h"
#include "chequearMano2.h"
#include "sumarPuntos.h"
#include "decodificarMano.h"
#include "robarEmbaucadora.h"
#include "calcularEstadisticas.h"
#include "dibujarContorno.h"

using namespace std;

void jugar(int vTopTresPuntos[], string vTopTresNombres[])
{
    rlutil::hidecursor();

    dibujarContorno();

    /// NOMBRES DE JUGADORES
    string nombreJugadorUno = "", nombreJugadorDos = "";
    ingresarNombres(nombreJugadorUno, nombreJugadorDos);

    /// INICIALIZAR VECTORES
    // CANTIDAD DE CARTAS POR MANO (MAXIMO 10)
    int tam = 5;
    // VECTOR MANO JUGADOR 1
    int v[tam];
    // VECTOR MANO JUGADOR 2
    int v2[tam];

    /// INICIALIZADORES DE PUNTAJES
    int puntajeJ1 = 0;
    int puntajeJ2 = 0;
    // PUNTAJES AUXILIARES
    int puntajeAux1;
    int puntajeAux2;

    /// SETEAR RANGO DE EMBAUCADORA
    int minimo;
    int maximo;

    char cambiarEmbaucadora;

    /// EMPIEZAN LAS RONDAS

    for(int i=1; i<=3; i++)
    {
        system("cls");

        dibujarContorno();

        rlutil::locate(47, 6);
        cout << "RONDA " << i << endl;

        /// LLENAR VECTOR MANO DEL JUGADOR 1
        robarMano(v, tam);

        /// VERIFICAR QUE NO HAYA CARTAS REPETIDAS
        // LA FUNCION DEVUELVE TRUE SI HAY CARTAS REPETIDAS (POR LO QUE HAY QUE NEGARLO)
        while(!chequearMano(v, tam))
        {
            robarMano(v, tam);  /// NO VALIDO (REPETIR)
        }

        /// LLENAR VECTOR MANO DEL JUGADOR 2
        robarMano(v2, tam);

        /// EN ESTE CASO HAY QUE VERIFICAR QUE NINGUNA CARTA SE REPITA CON LA DEL JUGADOR 1
        while(!chequearMano(v2, tam) || !chequearMano2(v2, v, tam))
        {
            robarMano(v2, tam); /// NO VALIDO (REPETIR)
        }

        robarEmbaucadora(minimo, maximo);

        /// RONDA 1
        if(i==1)
        {
            /// SUMAR PUNTOS
            puntajeJ1 += SumarPuntos(minimo, maximo, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
            puntajeJ2 += SumarPuntos(minimo, maximo, v2, tam);

            /// MOSTRAR MANOS A LOS JUGADORES

            rlutil::locate(54, 9);
            cout << nombreJugadorUno;
            // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
            decodificarMano(55, 11, v, tam);
            rlutil::locate(50, 17);
            cout << "PUNTAJE: " << puntajeJ1 << endl;

            rlutil::locate(94, 9);
            cout << nombreJugadorDos;
            // PASAR LA MANO DEL JUGADOR 2 DE CODIGOS A CARTAS
            decodificarMano(95, 11, v2, tam);
            rlutil::locate(90, 17);
            cout << "PUNTAJE: " << puntajeJ2;

            cout << endl << "ENTER PARA CONTINUAR..." << endl;
            rlutil::getkey();
        }
        /// RONDA 2
        if(i==2)
        {
            puntajeAux1 = SumarPuntos(minimo, maximo, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
            puntajeAux2 = SumarPuntos(minimo, maximo, v2, tam);


            rlutil::locate(54, 9);
            cout << nombreJugadorUno;
            // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
            decodificarMano(55, 11, v, tam);
            rlutil::locate(50, 17);
            cout << "PUNTAJE ACUMULADO: " << puntajeJ1<< endl;
            cout << "PUNTAJE DE RONDA: " << puntajeAux1 << endl;

            rlutil::locate(94, 9);
            cout << nombreJugadorDos;
            // PASAR LA MANO DEL JUGADOR 2 DE CODIGOS A CARTAS
            decodificarMano(95, 11, v2, tam);
            rlutil::locate(90, 17);
            cout << "PUNTAJE ACUMULADO: " << puntajeJ2<< endl;
            cout << "PUNTAJE DE RONDA: " << puntajeAux2 << endl;

            // DAR OPCION DE CAMBIAR EMBAUCADORA (DE SER POSIBLE)
            if(puntajeJ1 >= 20)
            {
                cout << endl << nombreJugadorUno << ": ¿CAMBIAR EMBAUCADORA? S / N" << endl;
                cin >> cambiarEmbaucadora;

                if(cambiarEmbaucadora == char(83) || cambiarEmbaucadora == char(115))
                {
                    rlutil::cls();
                    dibujarContorno();

                    puntajeJ1-=20;

                    rlutil::locate(47, 6);
                    cout << "RONDA 2" << endl;
                    robarEmbaucadora(minimo, maximo);

                    /// SUMAR PUNTOS
                    puntajeAux1 = SumarPuntos(minimo, maximo, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
                    puntajeAux2 = SumarPuntos(minimo, maximo, v2, tam);


                    rlutil::locate(54, 9);
                    cout << nombreJugadorUno;
                    // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
                    decodificarMano(55, 11, v, tam);
                    rlutil::locate(50, 17);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ1<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux1 << endl;

                    rlutil::locate(94, 9);
                    cout << nombreJugadorDos;
                    // PASAR LA MANO DEL JUGADOR 2 DE CODIGOS A CARTAS
                    decodificarMano(95, 11, v2, tam);
                    rlutil::locate(90, 17);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ2<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux2 << endl;

                    /// ACUMULAR PUNTAJES
                    puntajeJ1 += puntajeAux1;
                    puntajeJ2 += puntajeAux2;
                }
            }
            if((puntajeJ2 >= 20) && (cambiarEmbaucadora == char(78) || cambiarEmbaucadora == char(110)))
            {
                cout << endl << nombreJugadorDos << ": ¿CAMBIAR EMBAUCADORA? S / N" << endl;
                cin >> cambiarEmbaucadora;

                if(cambiarEmbaucadora == char(83) || cambiarEmbaucadora == char(115))
                {
                    rlutil::cls();
                    dibujarContorno();

                    puntajeJ2-=20;

                    rlutil::locate(47, 6);
                    cout << "RONDA 2" << endl;
                    robarEmbaucadora(minimo, maximo);

                    /// SUMAR PUNTOS
                    puntajeAux1 = SumarPuntos(minimo, maximo, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
                    puntajeAux2 = SumarPuntos(minimo, maximo, v2, tam);


                    rlutil::locate(54, 9);
                    cout << nombreJugadorUno;
                    // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
                    decodificarMano(55, 11, v, tam);
                    rlutil::locate(50, 17);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ1<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux1 << endl;

                    rlutil::locate(94, 9);
                    cout << nombreJugadorDos;
                    // PASAR LA MANO DEL JUGADOR 2 DE CODIGOS A CARTAS
                    decodificarMano(95, 11, v2, tam);
                    rlutil::locate(90, 17);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ2<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux2 << endl;

                    /// ACUMULAR PUNTAJES
                    puntajeJ1 += puntajeAux1;
                    puntajeJ2 += puntajeAux2;
                }
            }
            /// SIN CAMBIO DE AMBAUCADORA
            if(cambiarEmbaucadora == char(78) || cambiarEmbaucadora == char(110))
            {
                puntajeJ1+=puntajeAux1;
                puntajeJ2+=puntajeAux2;
            }
            cout << endl << "ENTER PARA CONTINUAR..." << endl;
            rlutil::getkey();
            system("cls");
            dibujarContorno();
        }
        /// SETEAR CAMBIO DE EMBAUCADORA EN FALSE
        cambiarEmbaucadora = 0;
        /// RONDA 3
        if(i==3)
        {
            puntajeAux1 = SumarPuntos(minimo, maximo, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
            puntajeAux2 = SumarPuntos(minimo, maximo, v2, tam);

            rlutil::locate(54, 9);
            cout << nombreJugadorUno;
            // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
            decodificarMano(55, 11, v, tam);
            rlutil::locate(50, 17);
            cout << "PUNTAJE ACUMULADO: " << puntajeJ1<< endl;
            cout << "PUNTAJE DE RONDA: " << puntajeAux1 << endl;

            rlutil::locate(94, 9);
            cout << nombreJugadorDos;
            // PASAR LA MANO DEL JUGADOR 2 DE CODIGOS A CARTAS
            decodificarMano(95, 11, v2, tam);
            rlutil::locate(90, 17);
            cout << "PUNTAJE ACUMULADO: " << puntajeJ2<< endl;
            cout << "PUNTAJE DE RONDA: " << puntajeAux2 << endl;

            if(puntajeJ2 >= 20)
            {
                cout << endl << nombreJugadorDos << ": ¿CAMBIAR EMBAUCADORA? S / N" << endl;
                cin >> cambiarEmbaucadora;

                if(cambiarEmbaucadora == char(83) || cambiarEmbaucadora == char(115))
                {
                    system("cls");
                    dibujarContorno();

                    puntajeJ2-=20;

                    rlutil::locate(47, 6);
                    cout << "RONDA 3" << endl;
                    robarEmbaucadora(minimo, maximo);

                    /// SUMAR PUNTOS
                    puntajeAux1 = SumarPuntos(minimo, maximo, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
                    puntajeAux2 = SumarPuntos(minimo, maximo, v2, tam);

                    rlutil::locate(54, 9);
                    cout << nombreJugadorUno;
                    // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
                    decodificarMano(55, 11, v, tam);
                    rlutil::locate(50, 17);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ1<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux1 << endl;

                    rlutil::locate(94, 9);
                    cout << nombreJugadorDos;
                    // PASAR LA MANO DEL JUGADOR 2 DE CODIGOS A CARTAS
                    decodificarMano(95, 11, v2, tam);
                    rlutil::locate(90, 17);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ2<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux2 << endl;

                    /// ACUMULAR PUNTAJES
                    puntajeJ1 += puntajeAux1;
                    puntajeJ2 += puntajeAux2;
                }
            }
            if(puntajeJ1 >= 20 && (cambiarEmbaucadora == char(78) || cambiarEmbaucadora == char(110)))
            {
                cout << endl << nombreJugadorUno << ": ¿CAMBIAR EMBAUCADORA? S / N" << endl;
                cin >> cambiarEmbaucadora;

                if(cambiarEmbaucadora == char(83) || cambiarEmbaucadora == char(115))
                {
                    system("cls");
                    dibujarContorno();

                    puntajeJ1-=20;

                    rlutil::locate(47, 6);
                    cout << "RONDA 3";
                    robarEmbaucadora(minimo, maximo);

                    /// SUMAR PUNTOS
                    puntajeAux1 = SumarPuntos(minimo, maximo, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
                    puntajeAux2 = SumarPuntos(minimo, maximo, v2, tam);

                    rlutil::locate(54, 9);
                    cout << nombreJugadorUno;
                    // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
                    decodificarMano(55, 11, v, tam);
                    rlutil::locate(50, 17);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ1<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux1 << endl;

                    rlutil::locate(94, 9);
                    cout << nombreJugadorDos;
                    // PASAR LA MANO DEL JUGADOR 2 DE CODIGOS A CARTAS
                    decodificarMano(95, 11, v2, tam);
                    rlutil::locate(90, 17);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ2<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux2 << endl;

                    /// ACUMULAR PUNTAJES
                    puntajeJ1 += puntajeAux1;
                    puntajeJ2 += puntajeAux2;
                }
            }
            /// SIN CAMBIO DE AMBAUCADORA
            if(cambiarEmbaucadora == char(78) || cambiarEmbaucadora == char(110))
            {
                puntajeJ1+=puntajeAux1;
                puntajeJ2+=puntajeAux2;
            }

            cout << endl << "ENTER PARA CONTINUAR..." << endl;
            rlutil::getkey();
            system("cls");

            /// PANTALLA DE GANADOR
            rlutil ::setColor(rlutil::BROWN);
            cout << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 <<  (char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 << endl;
            rlutil :: locate (50, 12);
            cout << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 <<  (char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 << endl;
            rlutil :: locate (50, 20);
            cout << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 << (char)42 <<  (char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 <<(char)42 << endl;

            cout << endl << "---PUNTAJES FINALES---";
            rlutil::locate(54, 9);
            cout << nombreJugadorUno << ": " << puntajeJ1; "!";
            rlutil::locate(94, 9);
            cout << nombreJugadorDos << ": " << puntajeJ2; "!";

            /// DEFINIR GANADOR
            if(puntajeJ1 > puntajeJ2)
            {
                cout << endl << "GANADOR/A: " << nombreJugadorUno;
                /// GANADOR JR1
                calcularEstadisticas(puntajeJ1, nombreJugadorUno, puntajeJ2, nombreJugadorDos, vTopTresPuntos, vTopTresNombres);
            }
            else if(puntajeJ2 > puntajeJ1)
            {
                cout << endl << "GANADOR/A: " << nombreJugadorDos;
                /// GANADOR JR2
                calcularEstadisticas(puntajeJ2, nombreJugadorDos, puntajeJ1, nombreJugadorUno, vTopTresPuntos, vTopTresNombres);
            }
            else
            {
                cout << endl << "¡EMPATE!";
                /// EMPATE
                calcularEstadisticas(puntajeJ1, nombreJugadorUno, puntajeJ2, nombreJugadorDos, vTopTresPuntos, vTopTresNombres);
            }
            cout << endl << "ENTER PARA CONTINUAR..." << endl;
            rlutil::anykey();
            rlutil::cls();
            cin.ignore();
        }
    }
}
