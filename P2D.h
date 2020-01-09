#ifndef P2D_H
#define P2D_H
#include <program1.h>
estructura P2D {
privado:
    campo real x;
    campo real y;
    campo largo sinSigno id;
    campo estatico largo sinSigno cant;
publico:
    P2D();
    P2D(real,real);
    P2D(noCambia P2D porRef);
    ~P2D();
    funcion logica esOrigen();
    funcion corto sinSigno cuadrante();
    funcion P2D operador = (P2D);
    funcion real coordX();
    funcion real coordY();
    funcion largo sinSigno identif();
    procedimiento poneId(largo sinSigno);
    procedimiento lee();
    procedimiento leeM();
    procedimiento muestra();
    procedimiento muestra(logico);
    funcion real dist2D(P2D);
    procedimiento estatico leeVec(vectorDin(P2D) porRef);
    procedimiento estatico muestraV(noCambia vectorDin(P2D) porRef);
};

estructura P2DPolares : P2D {
privado:
    campo real dist;
    campo real angulo;
publico:
    P2DPolares();
    P2DPolares(real,real);
    P2DPolares(noCambia P2DPolares porRef);
    funcion P2D/*Polares*/ operador = (P2D);
//    funcion P2DPolares operador = (P2DPolares);
    procedimiento lee();
    procedimiento leeM();
    procedimiento muestra();
    procedimiento muestraTodo();
    procedimiento muestra(logico);
    procedimiento estatico leeVec(vectorDin(P2DPolares) porRef);
    procedimiento estatico muestraV(noCambia vectorDin(P2DPolares) porRef);
};
#endif

