#include "busquedabin.h"

plantilla(Tipo)
funcion largo posInsBin(vectorDin(Tipo) porRef v,Tipo vAb) {
largo resul = 0
     ,t = tamanio(v);
si(v[0] < vAb Y vAb < v[t-1]) entonces                                               // Está entre el primero y el último sin ser 1° ni último
    largo i = 0
          ,d = t - 1
          ,m;
    resul = d;
    mientras(d - i >= 2)                                                             // Hay lugar para m -> i < m < d
        m = (i + d) / 2;                                                             // m está al medio
#ifdef DEPURACION
mostrar << "Buscando entre " << v[i] << " y " << v[d] << salto;
#endif
        si(v[m] < vAb) entonces                                                      // Esta en la mitad derecha
            i = m;
            resul = d;
            sinoSi(vAb < v[m]) entonces                                               // Está en la mitad izquierda
            d = m;
            resul = d;
            sino                                                                     // ¡Lo encontramos!
            resul = m;
            mientras(resul > 0 Y v[resul-1] ES vAb)                                 // 1ra. ocurrencia
                resul--;
                finMientras
            i = d;
            finSi
        finMientras
    sinoSi(v[0] >= vAb) entonces                                                     // Es el primero
    resul = 0;
    sinoSi(v[t-1] <= vAb) entonces                                                                             // Es el último
    resul = t;
    finSi
regresa(resul);
}
//implementa funcion largo posInsBin(vectorDin(largo sinSigno) porRef,largo sinSigno);
implementa funcion largo posInsBin(vectorDin(Grilla2D) porRef,Grilla2D);
//implementa funcion largo sinSigno posInsBin(vectorDin(entero),entero);

plantilla(Tipo)
funcion largo dondeBin(vectorDin(Tipo) porRef v,Tipo vAb) {
largo resul = (-1)
     ,t = tamanio(v);
si(v[0] < vAb Y vAb < v[t-1]) entonces                                               // Está entre el primero y el último sin ser 1° ni último
    entero i = 0
          ,d = t - 1
          ,m;
    mientras(d - i >= 2)                                                             // Hay lugar para m -> i < m < d
        m = (i + d) / 2;                                                             // m está al medio
#ifdef DEPURACION
mostrar << "Buscando entre " << v[i] << " y " << v[d] << salto;
#endif
        si(v[m] < vAb) entonces                                                      // Esta en la mitad derecha
            i = m;
            sinoSi(vAb < v[m]) entonces                                               // Está en la mitad izquierda
            d = m;
            sino                                                                     // ¡Lo encontramos!
            resul = m;
            i = d;
            finSi
        finMientras
    sinoSi(v[0] ES vAb) entonces                                                     // Es el primero
    resul = 0;
    sinoSi(v[t-1] ES vAb) entonces                                                                             // Es el último
    resul = t - 1;
////    sinoSi(v[0] > vAb O vAb > v[t-1]) entonces                                       // No está
////    resul = (-1);
    finSi
regresa(resul);
}
implementa largo dondeBin(vectorDin(Grilla2D) porRef,Grilla2D);
//implementa largo dondeBin(vectorDin(largo sinSigno) porRef,largo sinSigno);

plantilla(Tipo)
funcion logico estaBin(vectorDin(Tipo) porRef v,Tipo vAb) {
logico resul = (tamanio(v) > 0) Y (dondeBin(v,vAb) >= 0);
regresa(resul);
}
implementa logica estaBin(vectorDin(Grilla2D) porRef,Grilla2D);
//implementa funcion logico estaBin(vectorDin(largo sinSigno) porRef,largo sinSigno);

plantilla(Tipo)
funcion logico estaBin2(vectorDin(Tipo) porRef v,Tipo vAb) {
logico resul = FALSO;
largo pos = posInsBin(v,vAb);
mientras(v[pos] <= vAb)
    resul = resul O v[pos] ES vAb;
    pos++;
    finMientras
regresa(resul);
}
implementa logica estaBin2(vectorDin(Grilla2D) porRef,Grilla2D);
/*
plantilla(Tipo)
funcion logico estaOrd(vectorDin(Tipo) porRef v) {
logico resul = desordEn(v) ES 0;
regresa(resul);
}
implementa funcion logico estaOrd(vectorDin(largo sinSigno) porRef);

plantilla(Tipo)
funcion largo desordEn(vectorDin(Tipo) v) {
largo resul = tamanio(v) - 1;
mientras(resul > 0 Y v[resul-1] <= v[resul])
    resul--;
    finMientras
regresa(resul);
}
implementa funcion largo desordEn(vectorDin(largo));
*/
