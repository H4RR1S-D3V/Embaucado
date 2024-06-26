#include <iostream>
#include <cstdlib>

#include "rlutil.h"

#include "elegirNombres.h"
#include "robarMano.h"
#include "chequearMano.h"
#include "chequearMano2.h"
#include "sumarPuntos.h"
#include "decodificarMano.h"
#include "robarEmbaucadora.h"
#include "calcularEstadisticas.h"

using namespace std;

void jugar(int vTopTresPuntos[], string vTopTresNombres[])
{
    ///ESTILOS DE RONDAS

    //CUADRO
    rlutil::locate(60,10);
    cout << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 <<  (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << endl;
    rlutil::locate(60,20);
    cout << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 <<  (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << endl;
    //esquinas

    /// NOMBRES DE JUGADORES
    string nombreJugadorUno = "manu", nombreJugadorDos = "juani";
    // elegirNombres(nombreJugadorUno, nombreJugadorDos);

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

    int cambiarEmbaucadora = 0;

    /// EMPIEZAN LAS RONDAS

    for(int i=1; i<=3; i++)
    {
        system("cls");

        cout << endl << "RONDA " << i << endl;

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

            cout << endl << nombreJugadorUno << endl;
            // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
            decodificarMano(v, tam);
            cout << "PUNTAJE: " << puntajeJ1 << endl;

            cout << endl << nombreJugadorDos << endl;
            // PASAR LA MANO DEL JUGADOR 2 DE CODIGOS A CARTAS
            decodificarMano(v2, tam);
            cout << "PUNTAJE: " << puntajeJ2;

            cout << endl << "ENTER PARA CONTINUAR..." << endl;
            rlutil::getkey();
        }
        /// RONDA 2
        if(i==2)
        {
            puntajeAux1 = SumarPuntos(minimo, maximo, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
            puntajeAux2 = SumarPuntos(minimo, maximo, v2, tam);

            cout << endl << nombreJugadorUno << endl;
            // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
            decodificarMano(v, tam);
            cout << "PUNTAJE ACUMULADO: " << puntajeJ1<< endl;
            cout << "PUNTAJE DE RONDA: " << puntajeAux1 << endl;

            cout << endl << nombreJugadorDos << endl;
            // PASAR LA MANO DEL JUGADOR 2 DE CODIGOS A CARTAS
            decodificarMano(v2, tam);
            cout << "PUNTAJE ACUMULADO: " << puntajeJ2<< endl;
            cout << "PUNTAJE DE RONDA: " << puntajeAux2 << endl;

            // DAR OPCION DE CAMBIAR EMBAUCADORA (DE SER POSIBLE)
            if(puntajeJ1 >= 20)
            {
                cout << endl << nombreJugadorUno << ": 每AMBIAR EMBAUCADORA? 1-SI 0-NO" << endl;
                cin >> cambiarEmbaucadora;

                if(cambiarEmbaucadora)
                {
                    system("cls");

                    puntajeJ1-=20;

                    cout << endl << "RONDA 2" << endl;
                    robarEmbaucadora(minimo, maximo);

                    /// SUMAR PUNTOS
                    puntajeAux1 = SumarPuntos(minimo, maximo, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
                    puntajeAux2 = SumarPuntos(minimo, maximo, v2, tam);

                    cout << endl << nombreJugadorUno << endl;
                    // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
                    decodificarMano(v, tam);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ1<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux1 << endl;

                    cout << endl << nombreJugadorDos << endl;
                    // PASAR LA MANO DEL JUGADOR 2 DE CODIGOS A CARTAS
                    decodificarMano(v2, tam);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ2<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux2 << endl;

                    /// ACUMULAR PUNTAJES
                    puntajeJ1 += puntajeAux1;
                    puntajeJ2 += puntajeAux2;
                }
            }
            if(puntajeJ2 >= 20 && !cambiarEmbaucadora)
            {
                cout << endl << nombreJugadorDos << ": 每AMBIAR EMBAUCADORA? 1-SI 0-NO" << endl;
                cin >> cambiarEmbaucadora;

                if(cambiarEmbaucadora)
                {
                    system("cls");

                    puntajeJ2-=20;

                    cout << endl << "RONDA 2" << endl;
                    robarEmbaucadora(minimo, maximo);

                    /// SUMAR PUNTOS
                    puntajeAux1 = SumarPuntos(minimo, maximo, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
                    puntajeAux2 = SumarPuntos(minimo, maximo, v2, tam);

                    cout << endl << nombreJugadorUno << endl;
                    // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
                    decodificarMano(v, tam);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ1<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux1 << endl;

                    cout << endl << nombreJugadorDos << endl;
                    // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
                    decodificarMano(v2, tam);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ2<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux2 << endl;

                    /// ACUMULAR PUNTAJES
                    puntajeJ1 += puntajeAux1;
                    puntajeJ2 += puntajeAux2;
                }
            }
            /// SIN CAMBIO DE AMBAUCADORA
            if(!cambiarEmbaucadora)
            {
                puntajeJ1+=puntajeAux1;
                puntajeJ2+=puntajeAux2;
            }
            cout << endl << "ENTER PARA CONTINUAR..." << endl;
            rlutil::getkey();
            system("cls");
        }
        /// SETEAR CAMBIO DE EMBAUCADORA EN FALSE
        cambiarEmbaucadora = 0;
        /// RONDA 3
        if(i==3)
        {
            puntajeAux1 = SumarPuntos(minimo, maximo, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
            puntajeAux2 = SumarPuntos(minimo, maximo, v2, tam);

            cout << endl << nombreJugadorUno << endl;
            // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
            decodificarMano(v, tam);
            cout << "PUNTAJE ACUMULADO: " << puntajeJ1<< endl;
            cout << "PUNTAJE DE RONDA: " << puntajeAux1 << endl;

            cout << endl << nombreJugadorDos << endl;
            // PASAR LA MANO DEL JUGADOR 2 DE CODIGOS A CARTAS
            decodificarMano(v2, tam);
            cout << "PUNTAJE ACUMULADO: " << puntajeJ2<< endl;
            cout << "PUNTAJE DE RONDA: " << puntajeAux2 << endl;

            if(puntajeJ2 >= 20)
            {
                cout << endl << nombreJugadorDos << ": 每AMBIAR EMBAUCADORA? 1-SI 0-NO" << endl;
                cin >> cambiarEmbaucadora;

                if(cambiarEmbaucadora)
                {
                    system("cls");

                    puntajeJ2-=20;

                    cout << endl << "RONDA 2" << endl;
                    robarEmbaucadora(minimo, maximo);

                    /// SUMAR PUNTOS
                    puntajeAux1 = SumarPuntos(minimo, maximo, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
                    puntajeAux2 = SumarPuntos(minimo, maximo, v2, tam);

                    cout << endl << nombreJugadorUno << endl;
                    // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
                    decodificarMano(v, tam);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ1<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux1 << endl;

                    cout << endl << nombreJugadorDos << endl;
                    // PASAR LA MANO DEL JUGADOR 2 DE CODIGOS A CARTAS
                    decodificarMano(v2, tam);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ2<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux2 << endl;

                    /// ACUMULAR PUNTAJES
                    puntajeJ1 += puntajeAux1;
                    puntajeJ2 += puntajeAux2;
                }
            }
            if(puntajeJ1 >= 20 && !cambiarEmbaucadora)
            {
                cout << endl << nombreJugadorUno << ": 每AMBIAR EMBAUCADORA? 1-SI 0-NO" << endl;
                cin >> cambiarEmbaucadora;

                if(cambiarEmbaucadora)
                {
                    system("cls");

                    puntajeJ1-=20;

                    cout << endl << "RONDA 2" << endl;
                    robarEmbaucadora(minimo, maximo);

                    /// SUMAR PUNTOS
                    puntajeAux1 = SumarPuntos(minimo, maximo, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
                    puntajeAux2 = SumarPuntos(minimo, maximo, v2, tam);

                    cout << endl << nombreJugadorUno << endl;
                    // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
                    decodificarMano(v, tam);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ1<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux1 << endl;

                    cout << endl << nombreJugadorDos << endl;
                    // PASAR LA MANO DEL JUGADOR 2 DE CODIGOS A CARTAS
                    decodificarMano(v2, tam);
                    cout << "PUNTAJE ACUMULADO: " << puntajeJ2<< endl;
                    cout << "PUNTAJE DE RONDA: " << puntajeAux2 << endl;

                    /// ACUMULAR PUNTAJES
                    puntajeJ1 += puntajeAux1;
                    puntajeJ2 += puntajeAux2;
                }
            }
            /// SIN CAMBIO DE AMBAUCADORA
            if(!cambiarEmbaucadora)
            {
                puntajeJ1+=puntajeAux1;
                puntajeJ2+=puntajeAux2;
            }

            cout << endl << "ENTER PARA CONTINUAR..." << endl;
            rlutil::getkey();
            system("cls");

            cout << endl << "---PUNTAJES FINALES---";
            cout << endl << nombreJugadorUno << ": " << puntajeJ1; "!";
            cout << endl << nombreJugadorDos << ": " << puntajeJ2; "!";

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
                cout << endl << "胥MPATE!";
                /// EMPATE
                calcularEstadisticas(puntajeJ1, nombreJugadorUno, puntajeJ2, nombreJugadorDos, vTopTresPuntos, vTopTresNombres);
            }
            cout << endl << "ENTER PARA CONTINUAR..." << endl;
            rlutil::getkey();
            system("cls");
        }
    }
}
