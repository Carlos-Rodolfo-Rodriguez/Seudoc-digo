//#include <program1.h>
#include "muestraV.h"
#include "../leeVecD.h"
/**
*    Enunciado: 
*/


procedimiento permutacionInicial(largo n, vectorDin(largo) porRef v) {
largo i;
variarMas1(i,0,n-1)
    agregaEleVDin(v,i);
    finVariar
}
funcion largo largo valorPermutacion(vectorDin(largo) v) {
largo largo resul = 0
           ,multiplicador = 10;
paraCadaValor(ele,v)
    resul = resul * multiplicador + ele;
    finPara
regresa(resul);
}
procedimiento permutacionSiguiente(largo n, vectorDin(largo) porRef v) {
largo valorMin = -1
           ,valEstaPerm
           ,piso = valorPermutacion(v);
vectorDin(largo) vMin;           
entero pos1,pos2;
mostrar << "Piso:" << piso << salto;
variarMas1(pos1,0,n-2)
    variarMenos1(pos2,n-1,pos1+1)
//        mostrar << pos1 << tabulado << pos2 << salto;
        swap(v[pos1],v[pos2]);
        valEstaPerm = valorPermutacion(v);
        si((valorMin < 0 O valEstaPerm < valorMin) Y (valEstaPerm > piso)) entonces
           vMin = v;
           valorMin = valEstaPerm;
           finSi
        swap(v[pos1],v[pos2]);
        finVariar
    finVariar
v = vMin;
muestraV(vMin);
}

//procedimiento permuta(largo n, vectorDin(largo) porRef v) {
//si(n >= 0) entonces
//    largo i,aux;
//    vectorDin(largo) vAux = v;
//    variarMenos1(i,n-2,0)
//        muestraV(vAux);
//        aux = vAux[i];
//        borra1EleVDin(vAux,i);
//        agregaEleVDin(vAux,aux);
////        permuta(n-1,vAux);
//        finVariar
//muestraV(v);
//    finSi
//}

//procedimiento permutaciones(largo n, vectorDin(largo) porRef v) {
//muestraV(n,v);
//si(n > 3) entonces
//    largo i,aux;
//    variarMas1(i,1,n-1)
//        aux = v[i];
//        borra1EleVDin(v,i);
//        insertaEleVDin(v,aux);
//        permutaciones(n-1,v);
//        finVariar
//    sinoSi(n ES 2) entonces
//    finSi
//}

funcion logica reparte(largo n, vectorDin(largo) ind, vectorDin(largo) cof, vectorDin(largo) dob) {
logico resul = VERDADERO;
largo i;
variarMas1(i,0,n-1)
    resul = resul Y cof[ind[i]] >= dob[i];
    finVariar
regresa(resul);
}

funcion largo largo sinSigno factorial(largo x) {
largo largo sinSigno resul = 1;
largo i;
variarMas1(i,2,x)
    resul *= i;
    finVariar
regresa(resul);
}

funcion largo largo sinSigno formasRepartir(largo n, vectorDin(largo) cof, vectorDin(largo) dob) {
largo largo sinSigno i1 = 1,vueltas = factorial(n),resul = 0,tot = 0;
vectorDin(largo) indice;
permutacionInicial(n,indice);
repetir
permutacionSiguiente(n,indice);
    ++tot;
////    muestraV(indice);
//    si(esMult(tot,10000000)) mostrar << salto << "Analizados: " << tot << salto;
//    si(reparte(n,indice,cof,dob)) resul++;
////    swap(indice[i1],indice[i1-1]);
////    permutacionSiguiente(n,indice);
//    permutaciones(n,indice);
//    i1++;
//    si(i1 ES n) i1 = 1;
    hasta(tot ES vueltas)
regresa(resul);
}

principal                                                       // Unidad de programa principal
largo N;
vectorDin(largo) doblones,cofres;
leer(N);
leeVecD(N,doblones);
leeVecD(N,cofres);
//muestraV(doblones);    
//muestraV(cofres);    
mostrar << (formasRepartir(N,cofres,doblones) % 1000000007) << salto;
finPrincipal                                                    // Fin de unidad de programa principal
