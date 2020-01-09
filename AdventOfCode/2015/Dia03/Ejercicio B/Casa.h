#ifndef CASA_H
#define CASA_H
#include <program1.h>
estructura Casa {
privado:
    largo x;
    largo y;
    largo veces;
publico:
    Casa() {veces = 0;}
    Casa(largo equis, largo yGriega, largo n) {x = equis; y = yGriega; veces = n;}
    procedimiento proximaCasa(caracter,vectorDin(Casa) porRef);
    procedimiento agregaCasa(Casa);
    funcion largo ubiCasa(Casa,vectorDin(Casa));
    logico operador ES (Casa otraCasa) {regresa(x ES otraCasa.x Y y ES otraCasa.y);};
    logico operador NOES (Casa otraCasa) {regresa(NO(*esto ES otraCasa));};
    funcion largo busquedaExh(vectorDin(Casa),Casa);
    };
#endif
