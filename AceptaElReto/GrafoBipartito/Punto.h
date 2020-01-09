#ifndef PUNTO_H
#define PUNTO_H
#include <program1.h>
estructura Punto {
//    campo real x;
//    campo real y;
publico:
    entero id;
    estatico entero cantPtos;
    Punto(/*real a,real b*/);
    Punto(constante Punto porRef);
    ~Punto();
    procedimiento muestraPunto() {mostrar << "Punto " << id << salto;};
    logico operador ES(entero otroId) {regresa(id ES otroId);};
    logico operador ES(Punto otroPunto) {regresa(id ES otroPunto.id);};
    logico operador NOES(Punto otroPunto) {regresa(id NOES otroPunto.id);};
    logico operador <(Punto otroPunto) {regresa(id < otroPunto.id);};
    logico operador <=(Punto otroPunto) {regresa(id <= otroPunto.id);};
    logico operador >(Punto otroPunto) {regresa(id > otroPunto.id);};
    logico operador >=(Punto otroPunto) {regresa(id >= otroPunto.id);};
    };
#endif

