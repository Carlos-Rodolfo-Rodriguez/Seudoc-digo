#include <program1.h>
/**
*    Procedimiento de ordenamiento de vectores mediante el método de mezcla (versión UTN-FRM)
*/
#include "tam.h"
#include "intercambiar.h"

plantilla(Tipo)
procedimiento mezclaJuntar(entero t, Tipo v[], entero izq, entero med, entero der) {
Tipo aux[TAM];
entero i1 = izq                                                                 // Posición inicial del subvector izquierdo
      ,i2 = med + 1                                                             // Posicion inicial del subvector derecho
      ,ind;
variar(ind,0,der-izq+1,1)
    si( i2 > der O i1 <= med Y v[i1] <= v[i2] ) entonces                        // Si debe tomar del lado izquierdo
        aux[ind] = v[i1++];
        sino
        aux[ind] = v[i2++];
        finSi
    finVariar
variar(ind,0,der-izq,1)
    v[izq+ind] = aux[ind];
    finVariar
}
implementa procedimiento mezclaJuntar(entero,real[],entero,entero,entero);

plantilla(Tipo) 
procedimiento ordenaPorMezclaID(entero t, Tipo v[], entero izq, entero der) {
entero med;
si(izq + 1 < der) entonces
    med = (izq + der) / 2;
    ordenaPorMezclaID(t,v,izq,med);                                                      // Ordena la parte izquierda
    ordenaPorMezclaID(t,v,med+1,der);
    mezclaJuntar(t,v,izq,med,der);
    sinoSi(izq+1 ES der Y v[der] < v[izq]) entonces                             // Es un subvctor de 2 elementos desordenados
    intercambiar(v[izq],v[der]);                                                // y el intercambio lo ordena.
    finSi
}
implementa procedimiento ordenaPorMezclaID(entero,real[],entero,entero);

plantilla(Tipo)
procedimiento ordenaGnomeVec(entero tam, Tipo v[]) {
entero pos = 0;
mientras(pos <= tam-1)
//    mostrar << pos+1 << salto;
    si(pos ES 0 O v[pos-1] <= v[pos]) entonces
        pos++;
        sino
        intercambiar(v[pos-1],v[pos]);
        pos = fSi(pos <= 0,0,pos-1);
        finSi
    finMientras
}
implementa procedimiento ordenaGnomeVec(entero,real[]);

plantilla(Tipo)
procedimiento ordenaPorSeleccion(entero t, Tipo v[]) {
entero i1,i2;
variar(i1,0,t-2,1)
    variar(i2,i1+1,t-1,1)
        si(v[i2] < v[i1]) entonces
            intercambiar(v[i1],v[i2]);
            finSi
        finVariar
    finVariar
}
implementa procedimiento ordenaPorSeleccion(entero,real[]);

#include "posMenorVec.h"

plantilla(Tipo)
procedimiento ordenaPorValoresExtremos(entero t, Tipo v[]) {
entero i1,i2;
variar(i1,0,t-2,1)
    intercambiar(v[i1],v[posMenorVec(t,v,i1)]);
    finVariar
}
implementa procedimiento ordenaPorValoresExtremos(entero,real[]);

plantilla(Tipo)
procedimiento ordenaPorBalanza(entero t, Tipo v[]) {
logico estaOrdenado;
entero pos,ultimo = t-1;
repetir
    estaOrdenado = VERDADERO;
    variar(pos,1,ultimo,1)
        si(v[pos-1] > v[pos]) entonces
            estaOrdenado = FALSO;
            intercambiar(v[pos-1],v[pos]);
            finSi
        finVariar
    ultimo--;
    hasta(estaOrdenado);
}
implementa procedimiento ordenaPorBalanza(entero,real[]);

plantilla(Tipo)
procedimiento ordenaPorPeine(entero t, Tipo v[]) {
entero separacion = t - 1
      ,pos
      ,cantInterc;
repetir
    cantInterc = 0;
    variar(pos,0,t-1,separacion)
        si(v[pos] < v[pos+separacion]) entonces
            intercambiar(v[pos],v[pos+separacion]);
            cantInterc++;
            finSi
        finVariar
    separacion = fSi(separacion > 1,separacion/1.3,1);
    hasta(cantInterc ES 0 Y separacion ES 1);
}

#include "leemuestvec.h"
plantilla(Tipo)
procedimiento pivotRapido(entero t, Tipo v[], entero i, entero d, entero porRef posPivot) {
Tipo pivot = v[i];
entero izq = i + 1
      ,der = d;
posPivot = i;
#ifdef DEPURACION
mostrar << "\nOrdenando entre "<< i+1 << " y " << d+1 << ":\n";
#endif
mientras(izq+1 < der)
    si(v[izq] <= pivot) entonces
        izq++;
        sino
        mientras(izq+1 < der Y v[der] >= pivot)
            der--;
            finMientras
        si(izq+1 < der) entonces
#ifdef DEPURACION
            mostrar << "\nIntercambiando las posiciones " << izq+1 << " y " << der+1 << "...";
            muestraVec(t,v);
#endif
            intercambiar(v[izq],v[der]);
            finSi
        finSi
    finMientras
#ifdef DEPURACION
mostrar << "\nIntercambiando las posiciones " << izq+1 << " y " << posPivot+1 << " (pivot definido en "<< izq+1 <<"):";
muestraVec(t,v);
#endif
intercambiar(v[izq],v[posPivot]);
posPivot = der;
}
implementa procedimiento pivotRapido(entero,real[],entero,entero,entero porRef);

plantilla(Tipo)
procedimiento ordenaRapido(entero t, Tipo v[], entero izq, entero der) {
entero posPivot;
si(izq < der) entonces
    pivotRapido(t,v,izq,der,posPivot);
    ordenaRapido(t,v,izq,posPivot-1);
    ordenaRapido(t,v,posPivot+1,der);
    finSi
}

plantilla(Tipo)
procedimiento ordena(entero t, Tipo v[]) {

Clicks comienzo = ahoraC()
      ,finaliza;
muestraVec(t,v);
auto tIni = ahora();
//ordenaPorMezclaID(t,v,0,t-1);
ordenaRapido(t,v,0,t-1);
//ordenaGnomeVec(t,v);
//ordenaPorPeine(t,v);
//ordenaPorSeleccion(t,v);
//ordenaPorValoresExtremos(t,v);
//ordenaPorBalanza(t,v);
finaliza = ahoraC();
auto tFin = ahora();
//mostrar << "Ordenado en " << (finaliza - comienzo) << " ciclos...\n";
mostrar << "Ordenado en " << (tFin - tIni).count() << " ciclos...\n";
}
//implementa procedimiento ordena(entero,doble[]);
implementa procedimiento ordena(entero,real[]);

plantilla(Tipo)
procedimiento ordena(vectorDin(Tipo) porRef v) {
//ordenaID(0,tamanio(v),v);
}
implementa procedimiento ordena(vectorDin(largo sinSigno) porRef);

