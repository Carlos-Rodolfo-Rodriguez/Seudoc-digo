/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: Dados dos valores, mostrar si el primero es mayor, menor o igual que el segundo
*/
principal                                                       // Unidad de programa principal
real uno,dos;                                                   // DeclaraciÃ³n (nacimiento de las variables)
limpiar;                                                        // Limpia la pantalla.
leerM(uno,"Valor 1:");                                          // Lectura del primer valor
leerM(dos,"Valor 2:");                                          // Lectura del segundo valor
mostrar << "El primero ("<<uno<<") es ";                        // Primer parte de la oraciÃ³n (incondicional)
si(uno > dos) entonces                                          // Si el primero es mayor al segundo
    mostrar << "mayor que e";
    sinoSi(uno < dos) entonces                                  // sino, si el primero es menor al segundo    
    mostrar << "menor que e";
    sino                                                        // sino, son iguales (por descarte).
    mostrar << "igual a";
    finSi
mostrar << "l segundo (" << dos << ")." << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
