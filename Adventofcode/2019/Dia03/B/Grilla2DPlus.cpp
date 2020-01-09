#include "Grilla2DPlus.h"
#include "/home/carlos/.Zinjai/busqExhaustiva.h"

Grilla2DPlus::Grilla2DPlus() {
pasosMin = 0;
}
Grilla2DPlus::Grilla2DPlus(Grilla2D x) {
filCol = x;
pasosMin = 0;
}
/*
Grilla2DPlus::Grilla2DPlus(const Grilla2D &arg) {
	
}

Grilla2DPlus::~Grilla2DPlus() {
	
}
*/
funcion logico Grilla2DPlus::operador ES(Grilla2DPlus x) {
regresa(filCol ES x.filCol);
}

funcion logico Grilla2DPlus::operador NOES(Grilla2DPlus x) {
regresa(filCol NOES x.filCol);
}

funcion vectorDin(Grilla2DPlus) Grilla2DPlus::operador = (vectorDin(Grilla2D) x){
vectorDin(Grilla2DPlus) resul(tamanio(x));
pasosMin = 0; 
regresa(resul);
}

funcion sinSigno Grilla2DPlus::menosPasos(vectorDin(Grilla2D) cru
                                         ,vectorDin(Grilla2D) cab1
                                         ,vectorDin(Grilla2D) cab2) {
sinSigno i,t1,t2,resul = 0;
vectorDin(Grilla2DPlus) cable1(t1 = tamanio(cab1))
                       ,cable2(t2 = tamanio(cab2));
variarMas1(i,0,t1-1)
    cable1[i].filCol = cab1[i];
    finVariar
//vectorDin(Grilla2DPlus) cableX = cab1;
descuentaCiclos(cable1);
variarMas1(i,0,t2-1)
    cable2[i].filCol = cab2[i];
    finVariar
descuentaCiclos(cable2);
regresa(resul);
}

procedimiento Grilla2DPlus::descuentaCiclos(vectorDin(Grilla2DPlus) v) {
sinSigno pasos = 0;
entero pos;
paraCada(x,v)
    si((pos = dondEstaExh(x,v,pasos)) > 0) entonces
        mostrar << "Descontando " << (pasos - v[pos].pasosMin) << "pasos.\n";
        pasos = v[pos].pasosMin;
        sino
        si(esMult(pasos,1000)) mostrar << "Evaluando " << pasos << "pasos.\n";
        pasos++;
        finSi
    x.pasosMin = pasos;
    finPara
}

