#include <iostream>

#include "calcularEstadisticas.h"

using namespace std;

/// ESTA FUNCION RECIBE LOS PUNTAJES DE LA RONDA Y VERIFICA SI ALGUNO ENTRA EN EL TOP 3}
/// TAMBIEN RECIBE LOS NOMBRES PARA ACOPLARLOS A SUS PUNTAJES
void calcularEstadisticas(int puntajeMayor, std::string nombreGanador, int puntajeMenor, std::string nombrePerdedor, int vTopTresPuntos[], std::string vTopTresNombres[])
{
    if(vTopTresPuntos[0] == 0)  /// PRIMERA PARTIDA
    {
        vTopTresPuntos[0] = puntajeMayor;
        vTopTresNombres[0] = nombreGanador;

        vTopTresPuntos[1] = puntajeMenor;
        vTopTresNombres[1] = nombrePerdedor;
    }
    else    /// SEGUNDA PARTIDA EN ADELANTE
    {
        /// PREGUNTAMOS POR EL GANADOR
        if(puntajeMayor > vTopTresPuntos[0])  /// GANADOR MAYOR AL TOP 1
        {
            /// PASAMOS EL TOP 2 AL TOP 3
            vTopTresPuntos[2] = vTopTresPuntos[1];
            vTopTresNombres[2] = vTopTresNombres[1];

            /// PASAMOS EL TOP 1 AL TOP 2
            vTopTresPuntos[1] = vTopTresPuntos[0];
            vTopTresNombres[1] = vTopTresNombres[0];

            /// PONEMOS AL GANADOR EN TOP 1
            vTopTresPuntos[0] = puntajeMayor;
            vTopTresNombres[0] = nombreGanador;
        }
        else if(puntajeMayor > vTopTresPuntos[1]) /// GANADOR MAYOR AL TOP 2
        {
            /// PASAMOS EL TOP 2 AL TOP 3
            vTopTresPuntos[2] = vTopTresPuntos[1];
            vTopTresNombres[2] = vTopTresNombres[1];

            /// PONEMOS AL GANADOR EN TOP 2
            vTopTresPuntos[1] = puntajeMayor;
            vTopTresNombres[1] = nombreGanador;
        }
        else if(puntajeMayor > vTopTresPuntos[2]) /// GANADOR MAYOR AL TOP 3
        {
            /// PONEMOS AL GANADOR EN TOP 3
            vTopTresPuntos[2] = puntajeMayor;
            vTopTresNombres[2] = nombreGanador;
        }

        /// PREGUNTAMOS POR EL PERDEDOR
        if(puntajeMenor > vTopTresPuntos[1]) /// NUNCA VA A SER MAS QUE EL GANADOR
        {
            /// PASAMOS EL TOP 2 AL TOP 3
            vTopTresPuntos[2] = vTopTresPuntos[1];
            vTopTresNombres[2] = vTopTresNombres[1];

            /// PONEMOS AL PERDEROR EN TOP 2
            vTopTresPuntos[1] = puntajeMenor;
            vTopTresNombres[1] = nombrePerdedor;
        }
        else if(puntajeMenor > vTopTresPuntos[2])    /// PERDEDOR MAYOR AL TOP 3
        {
            /// PONEMOS AL PERDEROR EN TOP 3
            vTopTresPuntos[2] = puntajeMenor;
            vTopTresNombres[2] = nombrePerdedor;
        }
    }
}
