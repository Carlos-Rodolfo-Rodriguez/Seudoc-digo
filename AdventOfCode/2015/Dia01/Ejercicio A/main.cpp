#include <program1.h>
/**
*    Enunciado: An opening parenthesis, (, means he should go up one floor, 
                and a closing parenthesis, ), means he should go down one floor.
                For example:(()) and ()() both result in floor 0.
                            ((( and (()(()( both result in floor 3.
                            ))((((( also results in floor 3.
                            ()) and ))( both result in floor -1 (the first basement level).
                            ))) and )())()) both result in floor -3.
*/
principal                                                       // Unidad de programa principal
cadena renglon,relleno="----------",re;
largo piso = 0;
limpiar;                                                        // Limpia la pantalla.
leeRenglon(cin,renglon);
mostrar << fSi(cin.eof(),"EOF","No EOF") << salto;
paraCada(tecla,renglon)
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
        sino
        re = relleno;
        finSi
    mostrar << re << piso << salto;
    finPara
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
