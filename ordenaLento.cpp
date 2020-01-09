#include <program1.h>
#include "intercambiar.h"

plantilla(Tipo)
funcion entero posMenor(entero t, Tipo v[],entero ini) {
entero pos,resul = ini;   // Por ahora apunta al primero
variar(pos,ini+1,t-1,1)
    si(v[pos] < v[resul]) entonces
        resul = pos;
        finSi
    finVariar
retorna(resul);
}

implementa funcion entero posMenor(entero,real[],entero);
implementa funcion entero posMenor(entero,entero[],entero);

plantilla(Tipo)
procedimiento ordenaPorSeleccion(entero t, Tipo v[]) {
entero i1,i2;
variar(i1,0,t-2,1)
    variar(i2,i1+1,t-1,1)
        si(v[i2] < v[i1]) entonces
            intercambiar(v[i1],v[i2]);
            finSi
        finVariar
    finVariar
}

implementa procedimiento ordenaPorSeleccion(entero,real[]);
implementa procedimiento ordenaPorSeleccion(entero,entero[]);

//logico estaOrdenado;
//entero pos,ultimo = t-1;
//repetir
//    estaOrdenado = VERDADERO;
//    variar(pos,1,ultimo,1)
//        si(v[pos-1] > v[pos]) entonces
//            estaOrdenado = FALSO;
//            intercambiar(v[pos-1],v[pos]);
//            finSi
//        finVariar
//    ultimo--;
//    hasta(estaOrdenado);

//entero pos;
//variar(pos,0,t-1,1)
//    intercambiar(v[pos],v[posMenor(t,v,pos)]);
//    finVariar
