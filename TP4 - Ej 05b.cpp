// Archivo de traducción de seudocódigo a C++
#include <program1.h>
/**
*    Enunciado: Leer 3 valores y mostrarlos ordenados de menor a mayor.
*/
principal                                                       // Unidad de programa principal
real uno,dos,tres;
limpiar;                                                        // Limpia la pantalla.
leerM(uno,"Valor 1:");
leerM(dos,"Valor 2:");
leerM(tres,"Valor 3:");
si(uno <= dos Y uno <= tres) entonces                           // El 1° es el menor
    mostrar << uno << " ";
    si(dos <= tres) entonces
        mostrar << dos << " " << tres;
        sino
        mostrar << tres << " " << dos;
        finSi
    sino                                                        // El 1° no es el menor
    si(dos <= tres) entonces                                    // El 2° es el menor
        mostrar << dos << " ";
        si(uno <= tres) entonces
            mostrar << uno << " " << tres;
            sino
            mostrar << tres << " " << uno;
            finSi
        sino                                                    // sino, es el 3° el menor
        mostrar << tres << " ";
        si(uno <= dos) entonces
            mostrar << uno << " " << dos;
            sino
            mostrar << dos << " " << uno;
            finSi
        finSi
    finSi
mostrar << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal

