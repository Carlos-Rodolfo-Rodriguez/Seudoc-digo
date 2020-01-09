#include "Grilla2D.h"

Grilla2D::Grilla2D() {fila = 0; colu = 0;}

Grilla2D::Grilla2D(entero otroX,entero otroY) {fila = otroX; colu = otroY;}

procedimiento Grilla2D::quitaVueltas(vectorDin(Grilla2D) porRef v) {
sinSigno pos,i1,i2,ult = tamanio(v)-1,pasos = 0;
Grilla2D ele;
mostrar << "Quitando de " << tamanio(v) << salto;
variarMas1(i1,0,ult-1)
    ++pasos;
    v[i1].pasos = fSi(v[i1].pasos ES 0,pasos,(pasos = minimo(v[i1].pasos,pasos)));
//    si(esMult(pasos,500)) mostrar << " " << i1 << salto;
    ele = v[i1];
    variarMas1(i2,i1+1,ult)
        si(v[i2] ES ele) entonces
            mostrar << " " << i1 << " " << i2 << ": "<<ele.pasos<<"=>"<<v[i2].pasos<< salto;
            v[i2].pasos = minimo(v[i2].pasos,ele.pasos);
            finSi
        finVariar
    finVariar
}

funcion sinSigno Grilla2D::calcPasos(Grilla2D vAb,vectorDin(Grilla2D) v) {
sinSigno i,/*j,pos,*/resul = 0,ult = tamanio(v)-1;
vectorDin(sinSigno) p(tamanio(v));
variarMas1(i,0,ult)
    si(v[i] ES vAb) saleDelBucle;
    finVariar
resul = v[i].pasos;;
regresa(resul);
}

funcion sinSigno Grilla2D::menosPasos(vectorDin(Grilla2D) cruces,vectorDin(Grilla2D) cable1,vectorDin(Grilla2D) cable2) {
quitaVueltas(cable1);
quitaVueltas(cable2);
sinSigno resul = calcPasos(cruces[0],cable1) + calcPasos(cruces[0],cable2)
    ,otrosPasos,esteCruce;
variarMas1(esteCruce,1,tamanio(cruces)-1)
//    cruces[esteCruce].muestra();
    si((otrosPasos = calcPasos(cruces[esteCruce],cable1) + calcPasos(cruces[esteCruce],cable2)) < resul)
        resul = otrosPasos;
    mostrar << otrosPasos << salto;
    finVariar
regresa(resul);
} 

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

procedimiento Grilla2D::arr(vectorDin(Grilla2D) porRef cable,sinSigno pasos){
Grilla2D aux = ultimo(cable);
entero i,estaFila = aux.laFila(), estaColu = aux.laColu();
variarMas1(i,1,pasos)
    agregaEleVDin(cable,Grilla2D(--estaFila,estaColu))
    finVariar
}
procedimiento Grilla2D::aba(vectorDin(Grilla2D) porRef cable,sinSigno pasos){
Grilla2D aux = ultimo(cable);
entero i,estaFila = aux.laFila(), estaColu = aux.laColu();
variarMas1(i,1,pasos)
    agregaEleVDin(cable,Grilla2D(++estaFila,estaColu))
    finVariar
}
procedimiento Grilla2D::izq(vectorDin(Grilla2D) porRef cable,sinSigno pasos){
Grilla2D aux = ultimo(cable);
entero i,estaFila = aux.laFila(), estaColu = aux.laColu();
variarMas1(i,1,pasos)
    agregaEleVDin(cable,Grilla2D(estaFila,--estaColu))
    finVariar
}
procedimiento Grilla2D::der(vectorDin(Grilla2D) porRef cable,sinSigno pasos){
Grilla2D aux = ultimo(cable);
entero i,estaFila = aux.laFila(), estaColu = aux.laColu();
variarMas1(i,1,pasos)
    agregaEleVDin(cable,Grilla2D(estaFila,++estaColu))
    finVariar
}
