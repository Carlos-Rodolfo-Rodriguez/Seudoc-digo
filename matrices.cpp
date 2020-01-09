#include <program1.h>
/*
    Módulo de lectura y escritura de matrices
**/

#include "Tmatrices.h"

procedimiento leeMat( entero cF, entero cC, real m[TAMFIL][TAMCOL]) {
entero f,c;
#ifdef GENERAZAR
iniciAlAzar;
#endif
variar(f,0,cF-1,1)
    variar(c,0,cC-1,1)
#ifndef GENERAZAR
        leerM(m[f][c],"Matriz("<<f+1<<","<<c+1<<"):");
#else
m[f][c] = (entero)alAzarRealEntre(-100.0,100.0) / 10.0;
#endif
        finVariar
    finVariar
}

procedimiento muestMat( entero cF, entero cC, real m[TAMFIL][TAMCOL]) {
entero f,c;
variar(f,0,cF-1,1)
    variar(c,0,cC-1,1)
        mostrar << m[f][c] << tabulado;
        finVariar
    mostrar << salto;
    finVariar
}