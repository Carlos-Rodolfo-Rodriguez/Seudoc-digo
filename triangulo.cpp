/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: Dado un riÃ¡ngulo de base y altura conocidas, calcular su superficie
*/
principal                                                       // Unidad de programa principal
real base,altura;
limpiar;                                                        // Limpia la pantalla.
leerM( base , "Base:" );
leerM(altura,"Altura:");
mostrar << "La superficie es:" << (base * altura) /  2. << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
