#include <program1.h>
#include "intercambiar.h"

plantilla(Tipo)
funcion entero posMenorVec(entero t, Tipo v[],entero ini) {
entero pos,resul = ini;   // Por ahora apunta al primero
variar(pos,ini+1,t-1,1)
    si(v[pos] < v[resul]) entonces
        resul = pos;
        finSi
    finVariar
retorna(resul);
}

implementa funcion entero posMenorVec(entero,real[],entero);

