#include <stdio.h>
#include <stdlib.h>
#include "palabras.h"

int main()
{
    char rev[] = "Hola";
    int cRev = 4;
    char cad[] = "Hola mundo que tal";
    char *ini = cad;
    char *prox = cad;
    int cant = proximaPalabra(ini, &ini, &prox);

    mostrarPalabra(strReverse(rev, cRev), cRev );
    printf("\n");

//    while (cant > 0 && *ini != '\0') {
//        mostrarPalabra(ini, cant);
//        cant = proximaPalabra(ini, &ini, &prox);
//        printf("\n");
//    };


    return 0;
}
