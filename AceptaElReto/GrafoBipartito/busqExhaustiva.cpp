#include "busqExhaustiva.h"
plantilla(Tipo)
funcion entero dondEstaExh(Tipo valABuscar, vectorDin(Tipo) v) {
entero resul = tamanio(v)-1;
mientras(resul >= 0 Y valABuscar NOES v[resul])
    resul--;
    finMientras
regresa(resul);
}
implementa funcion entero dondEstaExh(Punto,vectorDin(Punto));
//
//plantilla(Tipo)
//funcion logico estaExh(Tipo valABuscar, vectorDin(Tipo) v) {
//entero pos = dondEstaExh(valABuscar,v);
//logico resul = (pos >= 0);
//regresa(resul);
//}
//implementa funcion logico estaExh(Punto,vectorDin(Punto));
//implementa funcion logico estaExh(real,vectorDin(real));
//implementa funcion logico estaExh(entero,vectorDin(entero));
