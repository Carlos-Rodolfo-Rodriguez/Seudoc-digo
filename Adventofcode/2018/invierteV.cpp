#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
plantilla(Tipo)
procedimiento invierteV(vectorDin(Tipo) porRef v) {
entero izq = 0
      ,der = tamanio(v) - 1;
mientras(izq < der)
    swap(v[izq++],v[der--]);
    finMientras
}
implementa procedimiento invierteV(vectorDin(entero) porRef v);