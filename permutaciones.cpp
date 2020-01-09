#include "permutaciones.h"
funcion matrizDin2D(largo sinSigno) generaPermutaciones(vectorDin(largo sinSigno) v
                                                       ,sinSigno deACuantos) {
matrizDin2D(largo sinSigno) resul;
//muestraV(resul);
si(deACuantos > 1) entonces
    largo sinSigno i;
    variarMas1(i,0,tamanio(v)-1)
        largo sinSigno uno = v[i];
        vectorDin(largo sinSigno) vAux = v;
        borra1EleVDin(vAux,i);
        matrizDin2D(largo sinSigno) m = generaPermutaciones(vAux,deACuantos-1);
        paraCada(x,m)
            insertaEleVDin(x,uno);
            agregaEleVDin(resul,x);
            finPara
        finVariar
    sino
    ajusTamanio(v,deACuantos);
    agregaEleVDin(resul,v);
    finSi
//muestraV(resul);
regresa(resul);
}

plantilla(Tipo)
funcion matrizDin2D(Tipo) permutaciones(vectorDin(Tipo) v) {
matrizDin2D(Tipo) resul = permutaciones(v,tamanio(v));
regresa(resul);
}
//implementa funcion matrizDin2D(P2DPolares) permutaciones(vectorDin(P2DPolares));
implementa funcion matrizDin2D(cadena) permutaciones(vectorDin(cadena));

plantilla(Tipo)
funcion matrizDin2D(Tipo) permutaciones(vectorDin(Tipo) v, sinSigno deACuantos) {
matrizDin2D(Tipo) resul;
vectorDin(largo sinSigno) subindices(tamanio(v));
largo sinSigno sub = 0;
paraCada(s,subindices)
    s = sub++;
    finPara
matrizDin2D(largo sinSigno) matPerm = generaPermutaciones(subindices,deACuantos);
paraCadaValor(unaPermuta,matPerm)
    vectorDin(Tipo) unResul(tamanio(unaPermuta));
    paraCada(s,unaPermuta)
        agregaEleVDin(unResul,v[s]);
        finPara
    agregaEleVDin(resul,unResul);
    finPara
regresa(resul);
}
//implementa funcion matrizDin2D(P2DPolares) permutaciones(vectorDin(P2DPolares));
implementa funcion matrizDin2D(cadena) permutaciones(vectorDin(cadena),sinSigno);
