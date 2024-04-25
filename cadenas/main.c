#include <stdio.h>
#include <stdlib.h>
#include "cadenas.h"
//#define ESLETRA(x)    ((x >='a'&& x<='z')||(x >='A'&& x<='Z')? 1:0)
//#define AMAYUSCULA(x) ((x >= 'a' && x <= 'z') ? x-('a'-'A') : 0)
//#define AMINUSCULA(x) ((x >= 'A' && x <= 'Z') ? x+('a'-'A') : 0)

// elLeta, mayuscula, minuscula, strlengt, strc, strci;
int main()
{

    char a []  = "hola";
    printf("%s", strReverse(a));

//    printf( "%c \n",AMINUSCULA(a));
//    printf( "%d \n",'a');
//    printf( "%d \n",'z');
//    printf( "%d \n",'A');
//    printf( "%d \n",'Z');
    return 0;
}
