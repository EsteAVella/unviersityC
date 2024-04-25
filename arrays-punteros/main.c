#include <stdio.h>
#include <stdlib.h>
#include "punteros.h"
#define TAM 5

int main()
{
    int vec[TAM]={1,3,5};
    int vectorAInsertar[]={7,2};
    unsigned ce = 3;
    int i;


    for(i=0;i<(sizeof(vectorAInsertar)/sizeof(*vec));i++){
        insertar(vec,vectorAInsertar+i,&ce);
    }

    mostrarElementos(vec,ce);

    return 0;
}

