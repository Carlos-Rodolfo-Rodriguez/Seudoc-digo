#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: Consider a staircase of size :

   #
  ##
 ###
####

Observe that its base and height are both equal to , and the image is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size .

Input Format

A single integer, , denoting the size of the staircase.

Output Format

Print a staircase of size using # symbols and spaces.

Note: The last line must have spaces in it. 
*/

principal                                                       // Unidad de programa principal
entero escalones,espacios;
leer(escalones);
espacios = escalones - 1;
for(int renglon = 0; renglon < escalones; renglon++,espacios--) {
    for(int c =0; c<escalones;c++) {
        cout << fSi(c < espacios," ","#");
        }
    cout << "\n";
    }
finPrincipal

