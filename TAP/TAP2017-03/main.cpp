#include <program1.h>
#include "../leeVecD.h"
#include "../muestraV.h"
/**
*    Enunciado: 
*/

Funcion vectorDin(largo) recibe(vectorDin(largo) edul, entero duracion) {
vectorDin(largo) resul;
entero indice, indice2, subindice, t = tamanio(edul);
variarMas1(indice,0,t-1)
    agregaEleVDin(resul,0);
    variarMas1(indice2,0,duracion-1)
        subindice = indice - indice2;
        si(subindice < 0) subindice += t;
        resul[indice] += edul[subindice];
        finVariar
    finVariar
muestraV(resul);
regresa(resul);
}

funcion logica hay(vectorDin(largo) v) {
logico resul;
Largo suma = 0;
paraCada(x,v)
    suma += x;
    finParaCada
resul = (suma > 0);
regresa(resul);
}

funcion logica encontroAlternativa(entero posi, entero duracion,entero t, vectorDin(largo) porRef cuantoPone, vectorDin(largo) porRef cuantoQuiere) {
logico resul = VERDADERO
      ,puedeBuscar = VERDADERO;
vectorDin(largo) cuantoPoneAux = cuantoPone
                ,cuantoRecibe;
entero indi;
cuantoPoneAux[posi]++;
cuantoRecibe = recibe(cuantoPoneAux,duracion);
muestraV(cuantoRecibe);
si(resul = (cuantoRecibe ES cuantoQuiere)) entonces
    cuantoPone = cuantoPoneAux;
    sino
    indi = 0;
    repetir
        puedeBuscar = puedeBuscar Y ((cuantoQuiere[indi] - cuantoRecibe[indi]) >= 0);
        hasta(++indi ES t O NO puedeBuscar)
    indi = 0;
    resul = FALSO;
    si(puedeBuscar) entonces
        repetir
            si(cuantoQuiere[indi] > cuantoRecibe[indi]) 
                resul = encontroAlternativa(indi,duracion,t,cuantoPoneAux,cuantoQuiere);
            hasta(resul O ++indi ES t)        
        finSi
    finSi
regresa(resul);
}

Funcion logica satisface(entero nAmigos, entero duracionICPC, vectorDin(largo) edulcoDeseado) {
logico resul = VERDADERO;
vectorDin(largo) E;
entero i;
paraCada(e,edulcoDeseado)
    agregaEleVDin(E,0);
    finParaCada
resul = encontroAlternativa(0,duracionICPC,tamanio(edulcoDeseado),E,edulcoDeseado);
regresa(resul);
}

principal                                                       // Unidad de programa principal
entero N,K;
vectorDin(largo) G;
limpiar;                                                        // Limpia la pantalla.
leer(N); leer(K);
leeVecD((largo)N,G);
muestraV(G);
mostrar << fSi(satisface(N,K,G),"S","N") << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
