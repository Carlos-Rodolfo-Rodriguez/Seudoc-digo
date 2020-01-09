#include "busqExhaustiva.h"
plantilla(Tipo)
funcion entero dondEstaExh(Tipo valABuscar, vectorDin(Tipo) v) {
entero resul = tamanio(v)-1;
mientras(resul >= 0 Y valABuscar NOES v[resul])
    resul--;
    finMientras
regresa(resul);
}
implementa funcion entero dondEstaExh(Grilla2D,vectorDin(Grilla2D));

plantilla(Tipo)
funcion logico estaExh(Tipo valABuscar, vectorDin(Tipo) v) {
logico resul = (dondEstaExh(valABuscar,v) >= 0);
regresa(resul);
}
implementa funcion logico estaExh(Grilla2D,vectorDin(Grilla2D));
//implementa funcion logico estaExh(real,vectorDin(real));
//implementa funcion logico estaExh(entero,vectorDin(entero));
plantilla(Tipo)
funcion entero dondEstaExh(Tipo valABuscar, vectorDin(Tipo) v,sinSigno cant) {
entero resul = 0;
sinSigno t = minimo(cant,tamanio(v));
mientras(resul < t Y valABuscar NOES v[resul] )
    resul++;
    finMientras
si(resul >= t) resul = (-1);
regresa(resul);
}
implementa funcion entero dondEstaExh(Grilla2D,vectorDin(Grilla2D),sinSigno);

plantilla(Tipo)
funcion logico estaExh(Tipo valABuscar, vectorDin(Tipo) v,sinSigno cant) {
logico resul = (dondEstaExh(valABuscar,v,cant) >= 0);
regresa(resul);
}
implementa funcion logico estaExh(Grilla2D,vectorDin(Grilla2D),sinSigno);
//implementa funcion logico estaExh(real,vectorDin(real));
//implementa funcion logico estaExh(entero,vectorDin(entero));
