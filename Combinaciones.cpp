#include "Combinaciones.h"
#include "muestraV.h"
funcion matrizDin2D(largo sinSigno) generaCombinaciones(vectorDin(largo sinSigno) v, sinSigno deACuantos) {
matrizDin2D(largo sinSigno) resul;
si(deACuantos > 1) entonces
    largo sinSigno i = 0;
    variarMas1(i,0,tamanio(v)-2)
        vectorDin(largo sinSigno) vAux = v;
        largo sinSigno uno = vAux[i];
        borra1EleVDin(vAux,i);
        matrizDin2D(largo sinSigno) mRes = generaCombinaciones(vAux,deACuantos-1);
        paraCada(x,mRes)
            si(uno < x[0]) entonces
                insertaEleVDin(x,uno);
                agregaEleVDin(resul,x);
                finSi
            finPara
        finVariar
//    muestraV(resul);
    sino
    ajusTamanio(resul,tamanio(v));
    largo sinSigno posV = 0;
    paraCada(x,resul)
        agregaEleVDin(x,v[posV++]);
        finPara
//    muestraV(resul);
    finSi
regresa(resul);
}

plantilla(Tipo)
funcion matrizDin2D(Tipo) combinaciones(vectorDin(Tipo) v, sinSigno deACuantos) {
matrizDin2D(Tipo) resul;
vectorDin(largo sinSigno) subindices(tamanio(v));
largo sinSigno sub = 0;
paraCada(s,subindices)
    s = sub++;
    finPara
matrizDin2D(largo sinSigno) matComb = generaCombinaciones(subindices,deACuantos);
//muestraV(matComb);
/*mostrar << tamanio(matComb) << " combinaciones:" << salto;*/
paraCadaValor(unaCombinacion,matComb)
    vectorDin(Tipo) unResul/*(tamanio(unaCombinacion))*/;
    paraCada(s,unaCombinacion)
        agregaEleVDin(unResul,v[s]);
        finPara
    agregaEleVDin(resul,unResul);
    finPara
regresa(resul);
}
implementa funcion matrizDin2D(P2D) combinaciones(vectorDin(P2D),sinSigno);
