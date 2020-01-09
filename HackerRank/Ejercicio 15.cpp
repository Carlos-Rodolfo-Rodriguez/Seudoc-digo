#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: There are two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity). The first kangaroo starts at location  and moves at a rate of  meters per jump. The second kangaroo starts at location  and moves at a rate of  meters per jump. Given the starting locations and movement rates for each kangaroo, can you determine if they'll ever land at the same location at the same time?

Input Format

A single line of four space-separated integers denoting the respective values of , , , and .

Constraints

Output Format

Print YES if they can land on the same location at the same time; otherwise, print NO.

Note: The two kangaroos must land at the same location after making the same number of jumps.

Sample Input 0

0 3 4 2
Sample Output 0

YES
*/


principal                                                       // Unidad de programa principal
largo x1,v1,x2,v2;
leer(x1);
leer(v1);
leer(x2);
leer(v2);
si(v1 > v2) entonces
    mientras(x1 < x2)
        x1 += v1;
        x2 += v2;
        finMientras
    mostrar << fSi(x1 ES x2,"YES","NO");
    sino
    mostrar << "NO";
    finSi
pausa;
finPrincipal
