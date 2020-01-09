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
si(uno <= dos Y uno <= tres) entonces                           // El 1° es menor.
    mostrar << uno;
    si(dos <= tres) entonces                                    // 1,2,3.
        mostrar << ", " << dos << ", " << tres;
        sino                                                    // 1,3,2.
        mostrar << ", " << tres << ", " << dos;
        finSi
    sino                                                        // No es el 1°
    si(dos <= tres) entonces                                    // El menor es el 2°
        mostrar << dos;
        si(uno <= tres) entonces                                    // 1,2,3.
            mostrar << ", " << uno << ", " << tres;
            sino                                                    // 1,3,2.
            mostrar << ", " << tres << ", " << uno;
            finSi
        sino                                                    // El menor es el 3°
        mostrar << tres;
        si(dos <= uno) entonces                                    // 1,2,3.
            mostrar << ", " << dos << ", " << uno;
            sino                                                    // 1,3,2.
            mostrar << ", " << uno << ", " << dos;
            finSi
        finSi
    finSi
mostrar << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal

