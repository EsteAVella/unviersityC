#ifndef CADENAS_H_INCLUDED
#define CADENAS_H_INCLUDED

#define ESLETRA(x)    ((x >='a'&& x<='z')||(x >='A'&& x<='Z')? 1:0)
#define AMAYUSCULA(x) ((x >= 'a' && x <= 'z') ? x-('a'-'A') : 0)
#define AMINUSCULA(x) ((x >= 'A' && x <= 'Z') ? x+('a'-'A') : 0)

int strLengt( char* str );
char* strReverse( char* str);

#endif // CADENAS_H_INCLUDED
