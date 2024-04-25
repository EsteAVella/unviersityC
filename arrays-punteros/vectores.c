#include <stdio.h>
#include <stdlib.h>
#include "punteros.h"

void mostrarElementos(int* vec, unsigned ce){
    int i;
    for( i = 0; i < ce ; i++){
        printf(" %d",*vec);
        vec++;
    }
}

int insertar(int* vec, int* val, unsigned* ce){

    vec +=(*ce); //caigo a la ultima posicion

    while( *(vec-1) > *val ){ //aca tomo el vector para comparar el valor si es mayor es
        *vec = *(vec - 1);
        vec--;
    }
    (*ce)++;
    *vec = *val;

    return 0;
}

