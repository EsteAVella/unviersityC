#include <stdio.h>
#include <stdlib.h>
#include "matematica.c"
int main()
{
    int edad = 43;
    int edad2 = 15;
    float sueldo = 25456;
    float bono = 4560;

    sueldo += bono;

    printf( "\nEl sueldo es el siguiente" );
    printf( "\n%f", sueldo );
    printf( "\nLa edad es: %d - %d", edad2, edad );

    return 0;
}
