// Archivo de traducción de seudocódigo a C++
#include "program1.h"
/**
     Enunciado: You are given a list of  numbers,{...} , to be added to a database. Each of these numbers must be added to the database in the order in
                which they are given. If a number has already been added to the database, print "REDUNDANT" (without quotation marks). 
                Otherwise, add it to the database and print "ADDED"(again, without quotation marks). 
                The answer of each operation should be printed in a new line.
Input Format:
The first line contains a single integer , denoting the number of numbers to be added. 
The second line contains the  space-separated integers - .
Output Format:
 lines, each having the answer to the subsequent operation.
*/

funcion largo cuantasVeces(largo valABuscar,vectorDin(largo) v) {
largo resul = 0;
paraCada(ele,v)
    si(ele ES valABuscar) resul++;
    finParaCada
regresa(resul);
}

funcion logico estaRepetido(largo valABuscar,vectorDin(largo) v) {
logico resul = tamanio(v) > 0 Y cuantasVeces(valABuscar,v) >= 1;
regresa(resul);
}

principal                                                       // Unidad de programa principal
largo N;
leer(N);
vectorDin(largo) v(N),v2(0);
paraCada(ele,v)
    leer(ele);
    si(estaRepetido(ele,v2)) entonces
        mostrar << "REDUNDANT" << salto;
        sino
        mostrar << "ADDED" << salto;
        agregaEleVDin(v2,ele);
        finSi
    finParaCada
finPrincipal                                                    // Fin de unidad de programa principal.


