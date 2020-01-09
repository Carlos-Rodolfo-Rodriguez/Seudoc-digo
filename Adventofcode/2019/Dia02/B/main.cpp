#include <program1.h>
#include "../../../../muestraV.h"
/**
*    Enunciado: 
*/
principal                                                       // Unidad de programa principal
vectorDin(entero sinSigno) IntCode,IntCodeOrig;
entero sinSigno op,i,orig1,orig2,dest,noun,verb;
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
//muestraV(IntCode);
IntCodeOrig = IntCode;
noun = verb = 0;
iterar
    IntCode[1] = noun;
    IntCode[2] = verb;
    variar(i,0,tamanio(IntCode)-1,4)
        op = IntCode[i];
        si(op ES 1) entonces
            IntCode[IntCode[i+3]] = IntCode[IntCode[i+1]] + IntCode[IntCode[i+2]];
            sinoSi(op ES 2) entonces
            IntCode[IntCode[i+3]] = IntCode[IntCode[i+1]] * IntCode[IntCode[i+2]];
            sino
            break;
            finSi
        finVariar
    salirSi(IntCode[0] ES 19690720);
    verb++;
    si(verb > 99) entonces
        verb = 0;
        noun++;
        finSi
    IntCode = IntCodeOrig;
    finIterar
mostrar << salto << 100 * noun + verb << salto;
finPrincipal                                                    // Fin de unidad de programa principal
