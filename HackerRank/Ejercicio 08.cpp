#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Input Format

A single line of five space-separated integers.

Constraints

    Each integer is in the inclusive range .

Output Format

Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than 32 bit integer.)

Sample Input
1 2 3 4 5

Sample Output
10 14
*/
constante entera T = 5;

principal                                                       // Unidad de programa principal
largo mini,maxi,suma=0;
vector<largo> v(T);
for(int i = 0; i < T; i++) {
    leer(v[i]);
    suma += v[i];
    si(i ES 0) entonces
        mini = maxi = v[0];
        sinoSi(v[i] > maxi) entonces
        maxi = v[i];
        sinoSi(v[i] < mini) entonces
        mini = v[i];
        finSi
    }
mostrar << (suma-maxi) << " " << (suma-mini) << salto;
finPrincipal

