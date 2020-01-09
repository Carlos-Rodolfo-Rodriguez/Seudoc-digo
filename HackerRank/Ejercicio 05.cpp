#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: Dada una matriz cuadrada de hasta 10x10, mostrar la diferencia en valor absoluto entre las sumas de a diagonal principal y la secundaria
*/

constante entera T = 10;

principal                                                       // Unidad de programa principal
entero mat[T][T],f,c,cFC;
largo sumaDP = 0, sumaDS = 0;
leer(cFC);
entero colDS = cFC-1;
for(f=0;f<cFC;f++) {
    for(c=0;c<cFC;c++) {
        leer(mat[f][c]);
        }
    sumaDP += mat[f][f];
    sumaDS += mat[f][colDS--];
    }
mostrar << abs(sumaDP-sumaDS);
finPrincipal

