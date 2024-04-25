#include <stdio.h>
#include <stdlib.h>

#include "matematica.h"

int main(){

    int m = 4;
    int n = 2;

    int result = combinatoria(m,n);
    printf("Ejercicio 2 combinatoria valores:1) %d, 2) %d es : %llu \n", m,n, result);

    return 0;
}
