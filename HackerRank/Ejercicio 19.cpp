#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: A left rotation operation on an array of size  shifts each of the array's elements  unit to the left.
                For example, if  left rotations are performed on array , then the array would become .
                Given an array of n integers and a number, d, perform d left rotations on the array.
                Then print the updated array as a single line of space-separated integers.

Input Format

The first line contains two space-separated integers denoting the respective values of n (the number of integers) and d (the number of left 
rotations you must perform). 
The second line contains  space-separated integers describing the respective elements of the array's initial state.
*/

principal                                                       // Unidad de programa principal
entero n,d;
leer(n);leer(d);
vector<entero> vE(n);
paraCada(v,vE)
    leer(v);
    finParaCada
for(int i = 0; i < d; i++) {
    agregaEleVDin(vE,vE[0]);
    borra1EleVDin(vE,0);
    }
paraCada(v,vE)
    mostrar << v << " ";
    finParaCada
pausa;
finPrincipal
