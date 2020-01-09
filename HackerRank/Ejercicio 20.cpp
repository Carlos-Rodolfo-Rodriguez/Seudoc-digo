#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: There is a collection of N strings (There can be multiple occurences of a particular string). 
                Each string's length is no more than 20 characters. 
                There are also queries. For each query, you are given a string, and you need to find out how many times this string occurs in the given 
                collection of strings.

Input Format

The first line contains N, the number of strings.
The next N lines each contain a string.
The N+2nd line contains Q, the number of queries.
The following Q lines each contain a query string. 
*/

principal                                                       // Unidad de programa principal
entero N,Q;
leer(N);
vector<cadena> cadenas(N);
paraCada(cad,cadenas)
    leer(cad);
    finParaCada
//paraCada(cad,cadenas)
//    mostrar << cad << salto;
//    finParaCada
leer(Q);
vector<cadena> aBuscar(Q);
paraCada(cBus,aBuscar)
    leer(cBus);
    finParaCada
paraCada(cBus,aBuscar)
    entero veces = 0;
    paraCada(cad,cadenas)
        si(cBus ES cad) entonces
            veces++;
            finSi
        finParaCada
    mostrar << veces << salto;
    finParaCada
pausa;
finPrincipal
