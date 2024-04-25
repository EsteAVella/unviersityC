#include <stdio.h>
#include <stdlib.h>
#include "vectores.h"
#define TAM 5

int main()
{

    int vec[TAM] = {1,3,4,5,6};
    int ce = 3, pos = 1, valor = 2;

    mostrarVectores( vec , ce);

    insertarPos( vec, pos, valor, &ce);
    printf("resultado de la insercion");

    mostrarVectores( vec , ce);

    return 0;
}
