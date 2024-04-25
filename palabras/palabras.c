#include <stdio.h>
#include <stdlib.h>
#include "palabras.h"

int proximaPalabra(char *cad, char **ini, char **prox) {
    int cont = 0;

    while (*cad != '\0' && ESLETRA(*cad) == 0) {
        cad++;
    }
    if (*cad == '\0') {
        return 0;
    }
    if (prox != NULL) {
        cad = *prox;
        *ini = *prox;
    }
    while (*cad != '\0' && ESLETRA(*cad)) {
        cont++;
        cad++;
    }
    while (*cad != '\0' && ESLETRA(*cad) == 0) {
        cad++;
    }
    if (*cad != '\0') {
        *prox = cad;
    } else {
        *prox = NULL;
    }

    return cont;
}

void mostrarPalabra (char *ini, int cant){

    for(int i = 0; i < cant; i ++){

        printf("%c", *ini);
        ini ++;
    }
}

char* strReverse(char *cad, int cant){

    char* pv = cad + cant-1;
    char aux;
    char* ini = cad;

    while( ini < pv){
        aux = *ini;
        *ini = *pv;
        *pv = aux;
        ini ++;
        pv--;
    }
    return cad;
}
