#include <iostream>
#include "../Funciones/mostrarMenu.h"
#include "../Funciones/robarMano.h"
#include "../Funciones/chequearMano.h"
#include "../Funciones/chequearMano2.h"
#include "../Funciones/mostrarMano.h"
#include "../Funciones/decodificarMano.h"
#include "../Funciones/sumarPuntos.h"

using namespace std;

void mostrarMenu()
{
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


    cout << "-------------------EMULANDO EL MENÚ---------------------" << endl;

    /// LLENAR VECTOR MANO DEL JUGADOR 1
    robarMano(v, tam);

    /// VERIFICAR QUE NO HAYA CARTAS REPETIDAS
    // LA FUNCIÓN DEVUELVE TRUE SI HAY CARTAS REPETIDAS (POR LO QUE HAY QEU NEGARLO)
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

    /// SUMAR PUNTOS
    puntajeJ1 += SumarPuntos(6, 10, v, tam);    // VAN A RECIBIR (INT MINIMO, INT MAXIMO) => RANGO DE CARTAS CON EL PALO DE LA EMBAUCADORA
    puntajeJ2 += SumarPuntos(6, 10, v2, tam);

    /// MOSTRAR MANOS A LOS JUGADORES

    cout << endl << "-----JUGADOR 1-----" << endl;
    // PASAR LA MANO DEL JUGADOR 1 DE CÓDIGOS A CARTAS
    decodificarMano(v, tam);
    cout << "PUNTAJE: " << puntajeJ1 << endl;

    cout << endl << "-----JUGADOR 2-----" << endl;
    // PASAR LA MANO DEL JUGADOR 1 DE CÓDIGOS A CARTAS
    decodificarMano(v2, tam);
    cout << "PUNTAJE: " << puntajeJ2;
}
