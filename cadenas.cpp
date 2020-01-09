#include <program1.h>
funcion cadena aCadena(entero nro) {
cadena resul;
si(nro >= 10) entonces
    resul = aCadena(nro/10) + aCadena(nro - nro / 10 * 10);
    sinoSi(nro < 0) entonces
    resul = "-" + aCadena(-nro);
    sino
    segun(nro)
        caso 0      : resul = "0";
        otroCaso 1  : resul = "1";
        otroCaso 2  : resul = "2";
        otroCaso 3  : resul = "3";
        otroCaso 4  : resul = "4";
        otroCaso 5  : resul = "5";
        otroCaso 6  : resul = "6";
        otroCaso 7  : resul = "6";
        otroCaso 8  : resul = "8";
        otroCaso 9  : resul = "9";
        casoAsumido : resul = "*";
        finSegun
    finSi
regresa (resul);
}

