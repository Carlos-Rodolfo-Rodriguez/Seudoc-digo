/*
    program1.h es el archivo de traducción de seudocódigo a C++
    Copiarlo (en Linux): /usr/local/include
            o en Windows: c:\Archivos de Programa\Zinjai\MingW\Include              
    Si se mantiene en la misma carpeta que los fuentes, cambiar #include <program1.h> 
                                                            por #include "program1.h"
*/
#include <program1.h>
/**
*    Enunciado: Dados cuatro valores, calcular:
*/
principal                                                       // Unidad de programa principal
entero uno,dos,tres,cuatro;                                     // DeclaraciÃ³n (nacimiento de las variables)
limpiar;                                                        // Limpia la pantalla.
leerM(uno   ,"Valor 1:");                                       // Lectura del primer valor
leerM(dos   ,"Valor 2:");                                       // Lectura del segundo valor
leerM(tres  ,"Valor 3:");                                       // Lectura del tercer valor
leerM(cuatro,"Valor 4:");                                       // Lectura del cuarto valor
mostrar << "((uno > dos) O (uno > tres)) Y ((uno ES tres) O (uno >= dos)): ";
//mostrar << ((uno > dos) O (uno > tres)) Y ((uno ES tres) O (uno >= dos));
mostrar << SIoNO((uno > dos) O (uno > tres)) Y ((uno ES tres) O (uno >= dos));
mostrar << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
