#include <program1.h>
#include "Punto.h"
#include "Arista.h"
#include "busqExhaustiva.h"
/**
*    Enunciado: 
*/
procedimiento muevePunto(vectorDin(Punto) porRef izq,vectorDin(Punto) porRef der, entero id) {
entero subInd = 0;
paraCada(p,izq)
    si(p.id ES id) entonces
        agregaEleVDin(der,Punto(p));
//        p.muestraPunto();
        borra1EleVDin(izq,subInd);
        sino
        subInd++;
        finSi
    finPara
}

funcion logico encuentraD(vectorDin(Punto) der, vectorDin(Arista) aristas, entero id) {
logico resul = FALSO;
paraCada(p,der)
    paraCada(a,aristas)
        resul = resul O (p.id ES a.id1 Y a.id2 ES id);
        finPara
    finPara
regresa(resul);
}
funcion logico encuentraI(vectorDin(Punto) izq, vectorDin(Arista) aristas, entero id) {
logico resul = FALSO;
paraCada(p,izq)
    paraCada(a,aristas)
        resul = resul O (p.id ES a.id1 Y a.id1 ES id);
        finPara
    finPara
regresa(resul);
}

funcion logico verifica(vectorDin(Arista) aristas,vectorDin(Punto) subConj) {
logico resul = VERDADERO;
paraCada(a,aristas)
    entero p1 = dondEstaExh(a.id1,subConj);
    entero p2 = dondEstaExh(a.id2,subConj);
    logico estaP1 = p1 >= 0;
    logico estaP2 = p2 >= 0;
    resul = resul Y ();
    finPara
regresa(resul);
}

funcion logico esBipartito(vectorDin(Arista) aristas,vectorDin(Punto) izq,vectorDin(Punto) der) {
logico resul = verifica(aristas,izq) Y verifica(aristas,der);
regresa(resul);
}

procedimiento separa(vectorDin(Punto) ptos,vectorDin(Arista) aristas,vectorDin(Punto) porRef izq,vectorDin(Punto) porRef der) {
paraCada(a,aristas)
    si(NO encuentraD(der,aristas,a.id2)) entonces
        muevePunto(izq,der,a.id2);
        sinoSi(encuentraI(izq,aristas,a.id1)) entonces
        muevePunto(izq,der,a.id1);
        finSi
    finPara
mostrar << "Conj. izquierdo:\n";
paraCada(i,izq)
    i.muestraPunto();
    finPara
mostrar << "Conj. derecho:\n";
paraCada(d,der)
    d.muestraPunto();
    finPara
}

principal                                                       // Unidad de programa principal
limpiar;                                                        // Limpia la pantalla.
entero cantP,cantAristas,uno,dos,a;
limpiar;                                                        // Limpia la pantalla.
leer(cantP);
vectorDin(Punto) ptos(cantP);
leer(cantAristas);
vectorDin(Arista) aristas;
variarMas1(a,1,cantAristas)
    leer(uno);
    leer(dos);
    agregaEleVDin(aristas,Arista(uno,dos));
    finVariar
paraCada(ar,aristas)
    ar.muestrArista();
    finPara
vectorDin(Punto) izq = ptos, der;
separa(ptos,aristas,izq,der);
//mostrar << fSi(esBipartito(ptos,aristas),"Si","No") << salto; 
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
