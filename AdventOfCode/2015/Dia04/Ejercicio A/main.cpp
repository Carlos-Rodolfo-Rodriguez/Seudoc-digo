#include <program1.h>
/**
*    Enunciado: 
*/
funcion cadena aBinario(largo nro) {
cadena resul = "";
si(nro > 0) entonces
    byte resto = nro % 2;
    resul = aBinario(nro / 2) + fSi(resto,"1","0");
    sinoSi(nro ES 0) entonces
    resul = "0";
    sino
    resul = "-" + aBinario(-nro);
    finSi
regresa(resul);
}

funcion cadena aHexadecimal(largo nro) {
cadena resul = "";
si(nro > 0) entonces
    byte resto = nro % 16;
    resul = aHexadecimal(nro / 16) + "0123456789ABCDEF"[resto];
    sinoSi(nro ES 0) entonces
    resul = "0";
    sino
    resul = "-" + aBinario(-nro);
    finSi
regresa(resul);

}

principal                                                       // Unidad de programa principal
largo nBytes;
byte b = 0;
limpiar;                                                        // Limpia la pantalla.
mientras(b < 255)
    mostrar << conAncho(10) << aHexadecimal((entero)b++);
    finMientras
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
