#ifndef ARISTA_H
#define ARISTA_H
#include <program1.h>
estructura Arista {
    entero id1;
    entero id2;
    Arista(entero,entero);
    ~Arista();
    procedimiento muestrArista() {mostrar << id1 << " " << id2 << salto;};
    };
#endif

