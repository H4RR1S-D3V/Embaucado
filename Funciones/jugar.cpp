#include <iostream>
#include "rlutil.h"


#include "robarMano.h"
#include "chequearMano.h"
#include "chequearMano2.h"
#include "sumarPuntos.h"
#include "decodificarMano.h"
#include "robarEmbaucadora.h"


using namespace std;

void jugar(string nombreJugadorUno, string nombreJugadorDos)
{
    ///ESTILOS DE RONDAS

    //CUADRO
    rlutil::locate(60,10);
    cout << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 <<  (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << endl;
    rlutil::locate(60,20);
    cout << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 <<  (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << (char) 205 << endl;






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

    /// SETEAR EMBAUCADORA
    int minimo;
    int maximo;

    /// LLENAR VECTOR MANO DEL JUGADOR 1
    robarMano(v, tam);

    /// VERIFICAR QUE NO HAYA CARTAS REPETIDAS
    // LA FUNCION DEVUELVE TRUE SI HAY CARTAS REPETIDAS (POR LO QUE HAY QEU NEGARLO)
    while(!chequearMano(v, tam))
    {
        robarMano(v, tam);  /// NO VALIDO (REPETIR)
    }

    /// LLENAR VECTOR MANO DEL JUGADOR 2
    robarMano(v2, tam);

    /// EN ESTE CASO HAY QUE VERIFICAR QUE NINGUNA CARTA SE REPITA CON LA DEL JUGADOR 1
    while(!chequearMano(v2, tam) || !chequearMano2(v2, v, tam))
    {
        robarMano(v2, tam); /// NO VALIDO
    }

    robarEmbaucadora(minimo, maximo);




    /// SUMAR PUNTOS
    puntajeJ1 += SumarPuntos(minimo, maximo, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
    puntajeJ2 += SumarPuntos(minimo, maximo, v2, tam);



    /// MOSTRAR MANOS A LOS JUGADORES

    cout << endl << nombreJugadorUno << endl;
    // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
    decodificarMano(v, tam);
    cout << "PUNTAJE: " << puntajeJ1 << endl;


    cout << endl << nombreJugadorDos << endl;
    // PASAR LA MANO DEL JUGADOR 1 DE CODIGOS A CARTAS
    decodificarMano(v2, tam);
    cout << "PUNTAJE: " << puntajeJ2;

    rlutil::getkey();


}
