#include <iostream>

using namespace std;

/// ESTA FUNCION ACUMULA LOS VALORES DE LAS CARTAS CUYOS PALOS NO COINCIDAN CON EL DE LA CARTA ENBAUCADORA Y RETORNA EL RESULTADO FINAL
/// ENTRE MINIMO Y MAXIMO ESTA EL RANGO DE CARTAS CANCELADAS POR LA EMBAUCADORA (INCLUYENDO AMBOS)
int SumarPuntos(int minimo, int maximo, int v[], int tam)
{
    /// INICIALIZAR EL ACUMULADOR
    int puntos = 0;

    for(int i=0; i<tam; i++)
    {
        /*
            SI EL ELEMENTO ES:
                > MAYOR A CERO Y MENOR AL MINIMO
                    O
                > MENOR A 21 Y MAYOR AL MAXIMO
            ACUMULARA SU VALOR A LOS PUNTOS
        */
        if((v[i] > 0 && v[i] < minimo) || (v[i] > maximo && v[i] <= 20))   // RANGOS DE CARTAS NO CANCELADAS
        {
            if(v[i] == 1 || v[i] == 6 || v[i] == 11 || v[i] == 16)  // EQUIVALENTES A CARTAS DE VALOR 10 ("10")
            {
                puntos += 10;

            }
            else if(v[i] == 2 || v[i] == 7 || v[i] == 12 || v[i] == 17) // EQUIVALENTES A CARTAS DE VALOR 11 ("J")
            {
                puntos += 11;
            }

            else if(v[i] == 3 || v[i] == 8 || v[i] == 13 || v[i] == 18) // EQUIVALENTES A CARTAS DE VALOR 12 ("Q")
            {
                puntos += 12;
            }
            else if(v[i] == 4 || v[i] == 9 || v[i] == 14 || v[i] == 19) // EQUIVALENTES A CARTAS DE VALOR 15 ("K")
            {
                puntos += 15;
            }
            else if(v[i] == 5 || v[i] == 10 || v[i] == 15 || v[i] == 20) // EQUIVALENTES A CARTAS DE VALOR 20 ("A")
            {
                puntos += 20;
            }
        }
    }
    return puntos;
}
