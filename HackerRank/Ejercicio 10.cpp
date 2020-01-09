#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado:Input Format

The first line contains 26 space-separated integers describing the respective heights of each consecutive lowercase English letter (i.e., ).
The second line contains a single word, consisting of lowercase English alphabetic letters.

Constraints

    , where is an English lowercase letter.
    Word contains no more than letters.

Output Format

Print a single integer denoting the area of highlighted rectangle when the given word is selected. The unit of measurement for this is square millimeters (), but you must only print the integer.
*/
principal                                                       // Unidad de programa principal
entero alt,altMx = 0, altLetra[26];
cadena palabra;
paraCada(h,altLetra)
    leer(h);
    finParaCada
leer(palabra);
paraCada(letra,palabra)
    altMx = fSi((alt = altLetra[(entero)letra-97]) > altMx,alt,altMx);
    finParaCada
mostrar << palabra.length()*altMx;
finPrincipal

