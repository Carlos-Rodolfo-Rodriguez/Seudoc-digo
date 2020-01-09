// Archivo de traducción de seudocódigo a C++
#include <program1.h>
/**
*    Enunciado: Leer 3 valores y determinar cuál (primero, segundo o tercer valor) es el mayor.
*/
principal                                                       // Unidad de programa principal
real uno,dos,tres;
limpiar;                                                        // Limpia la pantalla.
leerM(uno,"Valor 1:");
leerM(dos,"Valor 2:");
leerM(tres,"Valor 3:");
si(uno >= dos Y uno >= tres) entonces                           // El primero es mayor
    mostrar << "El primero es mayor";
    si(dos ES uno) entonces                                     // y el 2°    
        mostrar << ", y el segundo también es mayor";
        finSi
    si(tres ES uno) entonces                                    // y el 3°.
        mostrar << ", y el tercero también lo es";
        finSi
    mostrar << ".";
    sino                                                        // No es el primero
    si(dos >= tres) entonces
        mostrar << "El segundo es mayor";
        si(tres ES dos) entonces
            mostrar << " y el tercero también lo es";
            finSi
        mostrar << ".";
        sino
        mostrar << "El mayor es el tercero.";
        finSi
    finSi
mostrar << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal

