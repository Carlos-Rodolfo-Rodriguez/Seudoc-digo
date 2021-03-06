#include <program1.h>
/**
*    Enunciado: He begins at his starting location, and then move next. Moves are always exactly one house to the north (^), south (v), 
                east (>), or west (<). After each move, he delivers another present to the house at his new location.
                How many houses receive at least one present?
*/
#include "Casa.h"
principal                                                       // Unidad de programa principal
vectorDin(Casa) casas;
cadena renglon;
largo equis = 0,yGriega = 0, nVeces;
Casa estaCasa(0,0,1);
Casa otraCasa(0,0,1);
logico robot = FALSO;
agregaEleVDin(casas,estaCasa);
limpiar;                                                        // Limpia la pantalla.
leeRenglon(cin,renglon);
paraCada(car,renglon)
    si(robot) entonces
        otraCasa.proximaCasa(car,casas);
        sino
        estaCasa.proximaCasa(car,casas);
        finSi
    robot = NO robot;
    finPara
mostrar << tamanio(casas) << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal

