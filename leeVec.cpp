#include <program1.h>
#include "leeVar.h"
plantilla(Tipo)
procedimiento leeVec(entero t,Tipo v[]) {
entero ind;
variar(ind,0,t-1,1)
    leerM(v[ind],"Valor("<<ind+1<<"):");
    finVariar
}

implementa procedimiento leeVec(entero,real[]);

plantilla(Tipo)
procedimiento leeVec(entero t,Tipo v[], Tipo vMin, Tipo vMax) {
entero ind;
variar(ind,0,t-1,1)
    leeVar(v[ind],vMin,vMax,"Valor("+aCadena(ind+1)+"):");
    finVariar
}

//implementa procedimiento leeVec(entero,real[],real,real);
//implementa procedimiento leeVec(entero,real[],real,real);

plantilla(Tipo)
procedimiento lee2Vec(entero t,Tipo v1[], Tipo v2[]) {
entero ind;
variar(ind,0,t-1,1)
    leerM(v1[ind],"X("<<ind+1<<"):");
    leerM(v2[ind],"Y("<<ind+1<<"):");
    finVariar
}

//implementa procedimiento lee2Vec(entero,real[],real[]);
