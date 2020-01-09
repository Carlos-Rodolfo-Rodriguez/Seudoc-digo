#include "muestraV.h"
plantilla(Tipo)
procedimiento muestraV(vectorDin(Tipo) v) {
paraCadaValor(ele,v)
    mostrar << conAncho(fSi(tamanio(v) <= 5,5,1)) << ele << "  ";
    finParaCada
mostrar << salto;
}
//implementa procedimiento muestraV(vectorDin(largo largo sinSigno));
//implementa procedimiento muestraV(vectorDin(real));
//implementa procedimiento muestraV(vectorDin(corto sinSigno));
implementa procedimiento muestraV(vectorDin(entero sinSigno));
//implementa procedimiento muestraV(vectorDin(caracter));
//implementa procedimiento muestraV(vectorDin(cadena));

plantilla(Tipo)
procedimiento muestraV(matrizDin2D(Tipo) m) {
paraCadaValor(v,m)
    muestraV(v);
    finParaCada
}
implementa procedimiento muestraV(matrizDin2D(real));
implementa procedimiento muestraV(matrizDin2D(largo sinSigno));

plantilla(Tipo)
procedimiento muestraV(entero t, Tipo v[]) {
entero ind;
variarMas1(ind,0,t-1)
    mostrar << v[ind] << "  ";
    finVariar
mostrar << salto;
}
implementa procedimiento muestraV(entero,real[]);
//implementa procedimiento muestraV(entero,entero[]);
