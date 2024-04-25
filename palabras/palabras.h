#ifndef PALABRAS_H_INCLUDED
#define PALABRAS_H_INCLUDED

#define ESLETRA(x)    ((x >='a'&& x<='z')||(x >='A'&& x<='Z')? 1:0)
#define AMAYUSCULA(x) ((x >= 'a' && x <= 'z') ? x-('a'-'A') : 0)
#define AMINUSCULA(x) ((x >= 'A' && x <= 'Z') ? x+('a'-'A') : 0)

int proximaPalabra (char *cad, char** ini, char** prox);
void mostrarPalabra (char *cad, int cant);
char* vueltaPar(char *cad, int cant);

#endif
