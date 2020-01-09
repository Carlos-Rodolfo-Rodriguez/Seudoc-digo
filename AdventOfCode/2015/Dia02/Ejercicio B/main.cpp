#include <program1.h>
/**
*    Enunciado: The ribbon required to wrap a present is the shortest distance around its sides, or the smallest perimeter of any 
                one face. Each present also requires a bow made out of ribbon as well; the feet of ribbon required for the perfect
                bow is equal to the cubic feet of volume of the present. Don't ask how they tie the bow, though; they'll never tell.
                For example: 2x3x4 requires 2+2+3+3 = 10 feet of ribbon plus 2*3*4 = 24 feet for the bow, for a total of 34 feet.
                            1x1x10 requires 1+1+1+1 = 4 feet plus 1*1*10 = 10 feet for a total of 14 feet.
                How many total feet of ribbon should they order?
*/
#include "../../palabrea.h"
#include "../../muestraV.h"
principal                                                       // Unidad de programa principal
largo larg,anch=1,alt,perimLxAn,perimLxAl,perimAlxAn,otra;
largo largo total = 0;
vectorDin(cadena) dimensiones(3);
cadena renglon;
limpiar;                                                        // Limpia la pantalla.
iterar
    leeRenglon(cin,renglon);
    salirSi(esFinDarch(cin));
    cambiaCad(renglon,'x',' ');
    dimensiones = palabrea(renglon);
    larg = aEntero(dimensiones[0]);
    anch = aEntero(dimensiones[1]);
    alt = aEntero(dimensiones[2]);
    muestraV(dimensiones);
    perimAlxAn = alt + anch;
    perimLxAl = larg + alt;
    perimLxAn = larg + anch;
    si(perimAlxAn <= perimLxAl Y perimAlxAn <= perimLxAn) entonces
        otra = perimAlxAn * 2;
        sinoSi(perimLxAl <= perimLxAn) entonces
        otra = perimLxAl * 2;
        sino
        otra = perimLxAn * 2;
        finSi
    total += (alt * anch * larg) + otra;
    finIterar
mostrar << total << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
