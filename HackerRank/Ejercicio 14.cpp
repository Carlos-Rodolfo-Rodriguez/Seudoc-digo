#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: HackerLand University has the following grading policy:

Every student receives a  in the inclusive range from  to .
Any  less than  is a failing grade.
Sam is a professor at the university and likes to round each student's  according to these rules:

If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .
If the value of  is less than , no rounding occurs as the result will still be a failing grade.
For example,  will be rounded to  but  will not be rounded because the rounding would result in a number that is less than .

Given the initial value of  for each of Sam's  students, write code to automate the rounding process. For each , round it according to the rules above and print the result on a new line.

Input Format

The first line contains a single integer denoting  (the number of students). 
Each line  of the  subsequent lines contains a single integer, , denoting student 's grade.


*/

funcion entero notaCalc(entero n) {
entero resul = n;
si(n >= 38) entonces
    entero nvaNota = n / 5 * 5 + 5;
    si(nvaNota-n < 3) entonces
        resul = nvaNota;
        finSi
    resul = fSi(resul>100,100,resul);
    finSi
regresa(resul);
}

principal                                                       // Unidad de programa principal
entero cantEst,nota,i;
leer(cantEst);
for(i = 1; i <= cantEst; i++) {
    leer(nota);
    mostrar << notaCalc(nota) << salto;
    }
pausa;
finPrincipal
