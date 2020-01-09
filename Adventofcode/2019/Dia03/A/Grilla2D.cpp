#include "Grilla2D.h"

Grilla2D::Grilla2D() {fila = 0; colu = 0;}

Grilla2D::Grilla2D(entero otroX,entero otroY) {fila = otroX; colu = otroY;}

funcion Grilla2D Grilla2D::menorV(vectorDin(Grilla2D) v) {
Grilla2D resul = v[0];
entero pos;
variarMas1(pos,1,tamanio(v)-1)
    si(v[pos] < resul) resul = v[pos];
    finVariar
regresa(resul);
}

procedimiento Grilla2D::muestra(){
mostrar << "[" << fila << ";" << colu << "] ";
}

procedimiento Grilla2D::muestraV(vectorDin(Grilla2D) v){
mostrar << salto;
paraCadaValor(x,v)
    x.muestra();
    finPara
mostrar << salto;
}

procedimiento Grilla2D::arr(vectorDin(Grilla2D) porRef cable,corto sinSigno pasos){
Grilla2D aux = ultimo(cable);
entero i,estaFila = aux.laFila(), estaColu = aux.laColu();
variarMas1(i,1,pasos)
    agregaEleVDin(cable,Grilla2D(--estaFila,estaColu))
    finVariar
}
procedimiento Grilla2D::aba(vectorDin(Grilla2D) porRef cable,corto sinSigno pasos){
Grilla2D aux = ultimo(cable);
entero i,estaFila = aux.laFila(), estaColu = aux.laColu();
variarMas1(i,1,pasos)
    agregaEleVDin(cable,Grilla2D(++estaFila,estaColu))
    finVariar
}
procedimiento Grilla2D::izq(vectorDin(Grilla2D) porRef cable,corto sinSigno pasos){
Grilla2D aux = ultimo(cable);
entero i,estaFila = aux.laFila(), estaColu = aux.laColu();
variarMas1(i,1,pasos)
    agregaEleVDin(cable,Grilla2D(estaFila,--estaColu))
    finVariar
}
procedimiento Grilla2D::der(vectorDin(Grilla2D) porRef cable,corto sinSigno pasos){
Grilla2D aux = ultimo(cable);
entero i,estaFila = aux.laFila(), estaColu = aux.laColu();
variarMas1(i,1,pasos)
    agregaEleVDin(cable,Grilla2D(estaFila,++estaColu))
    finVariar
}
