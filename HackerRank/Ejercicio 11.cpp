#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: The Utopian Tree goes through 2 cycles of growth every year.
                Each spring, it doubles in height. 
                Each summer, its height increases by 1 meter.

Laura plants a Utopian Tree sapling with a height of 1 meter at the onset of spring. How tall will her tree be after growth cycles?

Input Format

The first line contains an integer, T, the number of test cases.
subsequent lines each contain an integer, N, denoting the number of cycles for that test case.
*/

funcion entera alturaFinal(entero ciclos, entero altIni, logico esPrimavera) {
entero resul;
si(ciclos > 0) entonces
    resul = alturaFinal(ciclos-1,fSi(esPrimavera,altIni*2,altIni+1),NO esPrimavera);
    sino
    resul = altIni;
    finSi
regresa(resul);
}

principal                                                       // Unidad de programa principal
entero altura = 1,T,N;
leer(T);
for(entero i = 1; i <= T; i++) {
    leer(N);
    mostrar << alturaFinal(N,altura,true) << salto;
    }
finPrincipal
