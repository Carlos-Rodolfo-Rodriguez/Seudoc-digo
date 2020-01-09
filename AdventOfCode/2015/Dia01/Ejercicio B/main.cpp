#include <program1.h>
/**
*    Enunciado: Now, given the same instructions, find the position of the first character that causes him to enter the basement 
                (floor -1). The first character in the instructions has position 1, the second character has position 2, and so on.
                For example:) causes him to enter the basement at character position 1.
                            ()()) causes him to enter the basement at character position 5.
*/
principal                                                       // Unidad de programa principal
cadena renglon,relleno="----------",re;
largo piso = 0
     ,ciclo = 0;
limpiar;                                                        // Limpia la pantalla.
leeRenglon(cin,renglon);
mostrar << fSi(cin.eof(),"EOF","No EOF") << salto;
paraCada(tecla,renglon)
    ciclo++;
    si(tecla ES '(') entonces
        piso++;
        sinoSi(tecla ES ')') entonces
        piso--;
        finSi
    si(piso > 0) entonces
        rellena('+',piso,re);
        re = relleno + re;
        sinoSi(piso < 0) entonces
        re = izquierda(relleno,9+piso);
        mostrar << aCadena(ciclo,"0000")<<": " << re << piso << salto;
        break;
        sino
        re = relleno;
        finSi
    mostrar << aCadena(ciclo,"0000")<<": " << re << piso << salto;
    finPara
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
