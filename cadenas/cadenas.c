#include <stdio.h>
#include <stdlib.h>

int esLetra(char a){
    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z' ) ){
        return 1;
    }else {
        return 0;
    };
}

char aMayuscula(char a){
    if((a >= 'a' && a <= 'z')){
    }
    return a;

}

int strLengt( char* str ){
    int count = 0;
    while( *str ){
        count ++;
        str++;
    }
    return count;
};

char* strReverse( char* str){
    char * ini = str;
    char aux;
    char * pa  = str + strLengt(str)-1;

    while( str < pa ) {
        aux = *str;
        *str = *pa;
        *pa = aux;
        str++;
        pa--;
    };

    return ini;
}
//Falta STRCOMPARE, STRCOMPAREI, PALINDROMO,
int strCompare( char* str1, char* str2){




}
