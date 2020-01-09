#ifndef GRILLA2D_H
#define GRILLA2D_H
#include <program1.h>
#include "/home/carlos/.Zinjai/busquedabin.h"
estructura Grilla2D {
protegido:
    campo entero fila;
    campo entero colu;
    sinSigno pasos;
publico:
    Grilla2D();
    Grilla2D(entero,entero);
    funcion entera laFila() {regresa(fila);}
    funcion entera laColu() {regresa(colu);}
    funcion logica operador ES(Grilla2D otro) {regresa(fila ES otro.fila Y colu ES otro.colu);}
    funcion logica operador NOES(Grilla2D otro) {regresa(fila NOES otro.fila O colu NOES otro.colu);}
    funcion logica operador <(Grilla2D otro) {regresa(distManhattan() < otro.distManhattan());}
    funcion logica operador >(Grilla2D otro) {regresa(distManhattan() > otro.distManhattan());}
    funcion logica operador >=(Grilla2D otro) {regresa(distManhattan() >= otro.distManhattan());}
    funcion logica operador <=(Grilla2D otro) {regresa(distManhattan() <= otro.distManhattan());}
    funcion sinSigno distManhattan() {regresa(abs(fila) + abs(colu));}
    funcion estatica sinSigno calcPasos(Grilla2D,vectorDin(Grilla2D));
    procedimiento estatico quitaVueltas(vectorDin(Grilla2D) porRef v);
    funcion estatica sinSigno menosPasos(vectorDin(Grilla2D),vectorDin(Grilla2D),vectorDin(Grilla2D));
    funcion estatica Grilla2D menorV(vectorDin(Grilla2D));
    procedimiento estatico arr(vectorDin(Grilla2D) porRef,sinSigno);
    procedimiento estatico aba(vectorDin(Grilla2D) porRef,sinSigno);
    procedimiento estatico izq(vectorDin(Grilla2D) porRef,sinSigno);
    procedimiento estatico der(vectorDin(Grilla2D) porRef,sinSigno);
    procedimiento estatico muestraV(vectorDin(Grilla2D));
    procedimiento muestra();
};
#endif

