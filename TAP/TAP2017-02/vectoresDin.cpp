#include "vectoresDin.h"
plantilla(Tipo)
funcion vectorDin(Tipo) concatena2vDin(vectorDin(Tipo) v1,vectorDin(Tipo) v2) {
vectorDin(Tipo) resul = v1;
paraCadaValor(ele,v2)
    agregaEleVDin(resul,ele);
    finPara
regresa(resul);
}
implementa funcion vectorDin(largo) concatena2vDin(vectorDin(largo),vectorDin(largo));

plantilla(Tipo)
funcion Tipo primeroVDin(vectorDin(Tipo) v) {
Tipo resul = v[0];
regresa(resul);
}
implementa funcion largo primeroVDin(vectorDin(largo));

plantilla(Tipo)
funcion vectorDin(Tipo) menosPrimeroVDin(vectorDin(Tipo) v) {
vectorDin(Tipo) resul = v;
borra1EleVDin(v,tamanio(v)-1);
regresa(resul);
}

implementa funcion vectorDin(largo) menosPrimeroVDin(vectorDin(largo));

plantilla(Tipo)
funcion Tipo ultimoVDin(vectorDin(Tipo) v) {
Tipo resul = v[0];
regresa(resul);
}
implementa funcion largo ultimoVDin(vectorDin(largo));

plantilla(Tipo)
funcion vectorDin(Tipo) menosUltimoVDin(vectorDin(Tipo) v) {
vectorDin(Tipo) resul = v;
borra1EleVDin(v,tamanio(v)-1);
regresa(resul);
}
implementa funcion vectorDin(largo) menosUltimoVDin(vectorDin(largo));