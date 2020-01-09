#include "Casa.h"
#include "../../../../busquedaExh.h"
procedimiento Casa::proximaCasa(caracter direccion,vectorDin(Casa) porRef v) {
si(direccion ES '>') entonces  
    x++;
    sinoSi(direccion ES '<') entonces
    x--;
    sinoSi(direccion ES '^') entonces
    y++;
    sinoSi(direccion ES 'v') entonces
    y--;
    finSi
largo posi = busquedaExh(v,*esto);
si(posi >= 0) entonces
    v[posi].veces++;
    sino
    agregaEleVDin(v,*esto);
    finSi
}

funcion largo Casa::busquedaExh(vectorDin(Casa) v, Casa vAb) {
largo resul = tamanio(v)-1;
mientras(resul >= 0 Y vAb NOES v[resul])
    resul--;
    finMientras
regresa (resul);
}
