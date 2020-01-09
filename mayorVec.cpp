#include <program1.h>
plantilla(Tipo)
funcion Tipo mayorVec(entero t,Tipo v[]) {
Tipo resul = v[0];                                                                  // Asume el 1°
entero ind;
variar(ind,1,t-1,1)                                                                 // Desde el 2°
    si(v[ind] > resul) entonces                                                     // Compara y si es mayor,
        resul = v[ind];                                                             // lo guarda como  resultado provisorio.
        finSi
    finVariar
regresa(resul);                                                                     // Regresa el resultado definitivo.
}

implementa funcion real mayorVec(entero,real[]);
//implementa funcion entero mayorVec(entero,entero[]);