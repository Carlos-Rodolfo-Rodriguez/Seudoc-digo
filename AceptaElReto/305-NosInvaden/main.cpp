#include <program1.h>
#include "../../leeVecD.h"
#include "../../ordenaD.h"
#include "../../busquedabin.h"
/**
*    Enunciado: 
*/
funcion largo sinSigno exitos(vectorDin(largo sinSigno) inv, vectorDin(largo sinSigno) def) {
largo sinSigno resul = 0;
largo pos;
clasifica(inv);
clasifica(def);
iterar
    pos = posInsBin(def,primeroLista(inv));
    salirSi(pos ES tamanio(def) O def[pos] < primeroLista(inv));
    resul++;
    borra1EleVDin(inv,0);
    borra1EleVDin(def,pos);
    finIterar
regresa(resul);
}

principal                                                       // Unidad de programa principal
largo sinSigno N;
iterar
    leer(N);
    salirSi(esFinDArch(stdin));
    vectorDin(largo sinSigno) invasores(N),defensores(N);
    leeVecD(invasores);
    leeVecD(defensores);
    mostrar << exitos(invasores,defensores) << salto;
    finIterar
finPrincipal                                                    // Fin de unidad de programa principal
