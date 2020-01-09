#include "leeVecD.h"
plantilla(Tipo)
procedimiento leeVecD(entero n, vectorDin(Tipo) porRef v) {
Tipo i,valor;
variarMas1(i,1,n)
    leer(valor);
    agregaEleVDin(v,valor);
    finVariar
}
implementa procedimiento leeVecD(entero, vectorDin(largo) porRef);

plantilla(Tipo)
procedimiento leeVecD(vectorDin(Tipo) porRef v) {
paraCada(ele,v)
    leer(ele);
    finPara
}
implementa procedimiento leeVecD(vectorDin(real) porRef);

procedimiento leeVecD(vectorDin(Punto2D) porRef v) {
paraCada(ele,v)
    ele.lee();
    finPara
}

plantilla(Tipo)
procedimiento leeVecD(logico todoElArch,vectorDin(Tipo) porRef v) {
real x;
iterar
    leer(x);
    salirSi(esFinDArch(stdin));
    agregaEleVDin(v,x);
    finIterar
}
implementa procedimiento leeVecD(logico,vectorDin(real) porRef);

plantilla(Tipo)
procedimiento leeVecD(vectorDin(Tipo) porRef v,Tipo valorFin) {
real x;
iterar
    leer(x);
    salirSi(x ES valorFin);
    agregaEleVDin(v,x);
    finIterar
}
implementa procedimiento leeVecD(vectorDin(real) porRef,real);

plantilla(Tipo)
procedimiento leeMat2D(entero cFil, entero cCol, matrizDin2D(Tipo) porRef m) {
ajusTamanio(m,cFil);
paraCada(v,m)
    ajusTamanio(v,cCol);
    leeVecD(v);
    finPara
}
implementa procedimiento leeMat2D(entero cFil, entero cCol, matrizDin2D(real) porRef m);

plantilla(Tipo)
procedimiento leeMat2D(matrizDin2D(Tipo) porRef m) {
paraCada(v,m)
    leeVecD(v);
    finPara
}
implementa procedimiento leeMat2D(matrizDin2D(real) porRef m);
