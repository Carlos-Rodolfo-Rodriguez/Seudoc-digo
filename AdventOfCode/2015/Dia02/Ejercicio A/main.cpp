#include <program1.h>
/**
*    Enunciado: They have a list of the dimensions (length l, width w, and height h) of each present, and only want to order 
                exactly as much as they need. Every present is a box: the surface area is 2*l*w + 2*w*h + 2*h*l.
                Extra paper: the area of the smallest side.
                For example: 2x3x4 requires 2*6 + 2*12 + 2*8 = 52 square feet plus 6 square feet of slack, total 58 square feet.
                            1x1x10 requires 2*1 + 2*10 + 2*10 = 42 square feet plus 1 square foot of slack, total 43 square feet.
                            How many total square feet of wrapping paper should they order?


*/
#include "../../../palabrea.h"
#include "../../../muestraV.h"
principal                                                       // Unidad de programa principal
largo larg,anch,alt,supLxAn,supLxAl,supAlxAn,otra;
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
//    muestraV(dimensiones);
    supAlxAn = alt * anch;
    supLxAl = larg * alt;
    supLxAn = larg * anch;
    si(supAlxAn <= supLxAl Y supAlxAn <= supLxAn) entonces
        otra = supAlxAn;
        sinoSi(supLxAl <= supLxAn) entonces
        otra = supLxAl;
        sino
        otra = supLxAn;
        finSi
    total += (supAlxAn + supLxAl + supLxAn) * 2 + otra;
    finIterar
mostrar << total << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
