#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "matematica.h"

unsigned long factorial(int val){


    int i;
    int resultado = 1;

    for(i=2;i<=val;i++){
     resultado*=i;
    }
    return resultado;
}


float raizCuadrada(float val,float tol){
    float ter=1.0;
    float terAnt;

    do{
        terAnt = ter;
        ter = 0.5*(terAnt+(val/terAnt));
    }while(fabs(ter-terAnt>tol));

    return ter;

}


int combinatoria(int m, int n){

    int aux = 1;
    if(n < 0 || m < n){
        return 0;
    }
    aux = factorial(m) / ( factorial (n) * factorial (m-n));

    return aux;

}
