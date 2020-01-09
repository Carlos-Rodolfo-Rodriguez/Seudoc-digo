#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: La distancia faltante para completar elcircuito
*/
principal                                                       // Unidad de programa principal
real x,y
    ,xIni = 0.0
    ,yIni = 0.0
    ,xFin = 0.0
    ,yFin = 0.0;
limpiar;                                                        // Limpia la pantalla.
iterar
    leerM(x,"x:");
    leerM(y,"y:");
    salirSi( x ES 0.0 Y y ES 0.0);
    si(xIni ES 0.0 Y yIni ES 0.0) entonces
        xIni = x;
        yIni = y;
        sino
        xFin = x;
        yFin = y;
        finSi
    finIterar
si((xIni NOES 0.0 O yIni NOES 0.0) Y
   (xFin NOES 0.0 O yFin NOES 0.0)) entonces
    mostrar << "La distancia faltante es " 
            << XalaY(XalaY((xIni-xFin),2)
                    +XalaY((yIni-yFin),2)
                   ,0.5)
            << salto;
    finSi                                           
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal

