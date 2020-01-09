#include <program1.h>
/**
*    Enunciado: 
*/
funcion logico repite(cadena cad, entero cant) {
logico resul = FALSO;
caracter car;
cadena cade = "";
si(cad NOES "") entonces
    car = cad[0];
    entero cuenta = 0;
    paraCada(c,cad)
        si(c ES car) entonces
            cuenta++;
            sino
            cade += c;
            finSi
        finPara
    resul = (cant ES cuenta O (cade NOES "" Y repite(cade,cant)));
    finSi
regresa(resul);
}

principal                                                       // Unidad de programa principal
cadena ID;
largo cuenta2 = 0
     ,cuenta3 = 0;
limpiar;                                                        // Limpia la pantalla.
iterar
    leeRenglon(cin,ID);
    salirSi(ID ES "");
    si(repite(ID,2)) cuenta2++;
    si(repite(ID,3)) cuenta3++;
    mostrar << ID << tabulado<<cuenta2<<tabulado<<cuenta3<<salto;
    finIterar
mostrar << "Checksum:" << cuenta2 * cuenta3 << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
