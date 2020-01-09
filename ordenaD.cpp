#include "ordenaD.h"

//plantilla(Tipo)

plantilla(Tipo)
procedimiento ordenaID(largo sinSigno izq,largo sinSigno der,vectorDin(Tipo) porRef v) {
si(izq+1 < der) entonces
    largo sinSigno med = (izq + der) / 2;
    ordenaID(izq,med,v);
    ordenaID(med+1,der,v);
    //unir(izq,med,der,v);
    sinoSi(izq+1 ES der) entonces
    finSi
}
implementa procedimiento ordenaID(largo sinSigno,largo sinSigno,vectorDin(largo sinSigno) porRef);plantilla(Tipo)

procedimiento ordenaD(vectorDin(Tipo) porRef v) {
clasifica(v);
//ordenaID((largo sinSigno)0,(largo sinSigno)tamanio(v),v);
}
implementa procedimiento ordenaID(vectorDin(largo sinSigno) porRef);
