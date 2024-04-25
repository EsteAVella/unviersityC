#include <stdio.h>
#include "vectores.h"

void mostrarVectores(int vec[], int ce ){
    for( int i = 0 ; i < ce ; i++){
        printf("\n %d \n", vec[i]);
    }
}

void insertarPos( int vec[], int pos, int valor, int *ce){

    for (int i = *ce ; i > pos; i--) {
        vec[i] = vec[i - 1];
    }
    *vec[pos] = valor;
    (*ce)++;
}
