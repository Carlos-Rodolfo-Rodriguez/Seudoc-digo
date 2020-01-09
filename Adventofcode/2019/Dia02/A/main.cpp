#include <program1.h>
#include "../../../../muestraV.h"
/**
*    Enunciado: 
*/
principal                                                       // Unidad de programa principal
vectorDin(entero sinSigno) IntCode;
entero sinSigno op,i,orig1,orig2,dest;
cadena renglon,cadNro;
iterar
    leeRenglon(cin,renglon);
    salirSi(esFinDarch(cin) O renglon ES "");
    cadNro = "";
    paraCada(car,renglon)
        si(esDigito(car)) entonces
            cadNro += car;
            sinoSi(car ES ',') entonces
            agregaEleVDin(IntCode,aEntero(cadNro));
            cadNro = "";
            finSi
        finPara
    agregaEleVDin(IntCode,aEntero(cadNro));
    finIterar
muestraV(IntCode);
variar(i,0,tamanio(IntCode)-1,4)
    op = IntCode[i];
    mostrar << i << ": ";
    si(op ES 1) entonces
//        si(tamanio(IntCode)<(IntCode[i+3]+1)) ajusTamanio(IntCode,(IntCode[i+3]+1));
        si(tamanio(IntCode)<=(IntCode[i+3]+1)) mostrar << " ¡Fuera de rango!\n";
    mostrar << "Sumando " << IntCode[IntCode[i+1]] << " y " << IntCode[IntCode[i+2]] 
            << " y guardando en " << IntCode[i+3] << salto;
        IntCode[IntCode[i+3]] = IntCode[IntCode[i+1]] + IntCode[IntCode[i+2]];
        sinoSi(op ES 2) entonces
    mostrar << "Multiplicando " << IntCode[IntCode[i+1]] << " y " << IntCode[IntCode[i+2]] 
            << " y guardando en " << IntCode[i+3] << salto;
//        si(tamanio(IntCode)<(IntCode[i+3]+1)) ajusTamanio(IntCode,(IntCode[i+3]+1));
        si(tamanio(IntCode)<=(IntCode[i+3]+1)) mostrar << " ¡Fuera de rango!\n";
        IntCode[IntCode[i+3]] = IntCode[IntCode[i+1]] * IntCode[IntCode[i+2]];
        sino
    mostrar << "Saliendo...\n";
        break;
        finSi
    finVariar
//paraCadaValor(x,IntCode)
//    mostrar << x << " ";
//    finPara
muestraV(IntCode);

mostrar << salto << IntCode[0] << salto;
//muestraV(IntCode);
finPrincipal                                                    // Fin de unidad de programa principal
