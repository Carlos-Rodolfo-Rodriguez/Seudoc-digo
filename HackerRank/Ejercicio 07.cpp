#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: Given an array of integers, calculate which fraction of its elements are positive, which fraction of its elements are negative, and which fraction of its elements are zeroes, respectively. Print the decimal value of each fraction on a new line.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to are acceptable.

Input Format

The first line contains an integer, , denoting the size of the array.
The second line contains space-separated integers describing an array of numbers .

Output Format

You must print the following lines:

    A decimal representing of the fraction of positive numbers in the array compared to its size.
    A decimal representing of the fraction of negative numbers in the array compared to its size.
    A decimal representing of the fraction of zeroes in the array compared to its size.

*/

principal                                                       // Unidad de programa principal
entero cant,cantMas=0,cantMenos=0,CantCero=0;
leer(cant);
vector<entero> v(cant);
paraCada(x,v)
    leer(x);
    si(x > 0) entonces
        cantMas++;
        sinoSi(x < 0) entonces
        cantMenos++;
        sino
        CantCero++;
        finSi
    finParaCada
mostrar << (doble)cantMas/cant << salto;
mostrar << (doble)cantMenos/cant << salto;
mostrar << (doble)CantCero/cant << salto;
finPrincipal

