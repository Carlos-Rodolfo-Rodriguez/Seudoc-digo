// Archivo de traducción de seudocódigo a C++
#include <program1.h>
/**
*    Enunciado: Se tiene un formado por un conjunto de puntos (vértices) y otro conjunto de vínculos entre dos de esos puntos (aristas)- Se desea saber 
                si forman un grafo bipartito, es decir que pueden colorearse los puntos usando dos colores y todas las aristas conectan vértices de
                distinto color.
*/
estructura Punto {
//    campo real x;
//    campo real y;
    entero id;
    estatico entero cantPtos;
    Punto(/*real a,real b*/) {/*x = a; y = b;*/ id = cantPtos++;};
    Punto(constante Punto porRef otroPunto) {id = otroPunto.id;};
    procedimiento muestraPunto() {mostrar << "Punto " << id << salto;};
    };

estructura Arista {
    entero id1;
    entero id2;
    Arista(entero uno, entero dos) {id1 = uno; id2 = dos;};
    procedimiento muestrArista() {mostrar << id1 << " " << id2 << salto;};
    };

entero Punto::cantPtos = 0;

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

funcion logico esBipartito(vectorDin(Punto) ptos, vectorDin(Arista) aristas) {
vectorDin(Punto) izq = ptos, der;
logico resul = VERDADERO;
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
    paraCada(d,der)
        resul = resul Y i.id NOES d.id;
        finPara
    finPara
mostrar << "Conj. derecho:\n";
paraCada(d,der)
    d.muestraPunto();
    finPara
regresa(resul);
}

principal                                                       // Unidad de programa principal
entero cantP,cantAristas,uno,dos,a;
limpiar;                                                        // Limpia la pantalla.
//repetir
//    leerM(cantP,"Cantidad de puntos:");
//    hasta(cantP > 0);
leer(cantP);
vectorDin(Punto) ptos(cantP);
//repetir
//    leerM(cantAristas,"Cantidad de aristas:");
//    hasta(cantAristas > 0);
leer(cantAristas);
vectorDin(Arista) aristas;
variarMas1(a,1,cantAristas)
//    leerM(uno,"Punto 1:");
//    leerM(dos,"Punto 2:");
    leer(uno);
    leer(dos);
    agregaEleVDin(aristas,Arista(uno,dos));
    finVariar
paraCada(ar,aristas)
    ar.muestrArista();
    finPara
mostrar << fSi(esBipartito(ptos,aristas),"Si","No") << salto; 
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal.




