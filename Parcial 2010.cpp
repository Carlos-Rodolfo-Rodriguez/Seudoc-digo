#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: La distancia faltante para completar elcircuito
*/
principal                                                       // Unidad de programa principal
real x,y
    ,sumaX = 0.0                                                // Acumulador de X
    ,sumaY = 0.0;                                               // Acumulador de Y
entero cAntC3 = 0
      ,cAnt = 0;                                                // Contador
limpiar;                                                        // Limpia la pantalla.
iterar
    leerM(x,"x:");
    leerM(y,"y:");
    salirSi( x ES 0.0 Y y ES 0.0);
    cAnt++;                                                     // Se cuenta,
    sumaX += x;                                                 // Se acumulan las x
    sumaY += y;                                                 // Se acumulan las y
    si(x < 0 Y y < 0) entonces
        cAntC3++;
        finSi
    finIterar    
mostrar << "La cantidad de antenas del cuadrante 3 es " << cAntC3 << salto;  
si(cAnt > 0) entonces
    mostrar << "La ubicación promedio es (" << sumaX/cAnt << ";" << sumaY / cAnt << ")" << salto;
    finSi
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal

