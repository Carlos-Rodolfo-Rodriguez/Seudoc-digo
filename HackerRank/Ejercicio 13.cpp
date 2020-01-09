#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: Sam's house has an apple tree and an orange tree that yield an abundance of fruit.
                In the diagram below, the red region denotes his house, where  is the start polargo and  is the end point. 
                The apple tree is to the left of his house, and the orange tree is to its right. 
                You can assume the trees are located on a single point, where the apple tree is at point  and the orange tree is at point .

Apple and orange(2).png

                When a fruit falls from its tree, it lands  units of distance from its tree of origin along the -axis. 
                A negative value of  means the fruit fell  units to the tree's left, and a positive value of  means it falls  units to the tree's right.

Given the value of  for  apples and  oranges, can you determine how many apples and oranges will fall on Sam's house (i.e., in the inclusive range )? Print the number of apples that fall on Sam's house as your first line of output, then print the number of oranges that fall on Sam's house as your second line of output.

Input Format

The first line contains two space-separated integers denoting the respective values of  and . 
The second line contains two space-separated integers denoting the respective values of  and . 
The third line contains two space-separated integers denoting the respective values of  and . 
The fourth line contains  space-separated integers denoting the respective distances that each apple falls from point . 
The fifth line contains  space-separated integers denoting the respective distances that each orange falls from point .

Output Format: Print two lines of output:

On the first line, print the number of apples that fall on Sam's house.
On the second line, print the number of oranges that fall on Sam's house.
*/

funcion logica estaEntre(largo mini, largo maxi, largo valor) {
logico resul = mini <= valor Y valor <= maxi;
regresa(resul);
}

principal                                                       // Unidad de programa principal
largo xManzano,xNaranjo,iniCasa,finCasa,cantManz,cantNara,manzCasa=0,naraCasa=0,dist;
leer(iniCasa);leer(finCasa);
leer(xManzano);leer(xNaranjo);
leer(cantManz);leer(cantNara);
for(largo i=1; i <= cantManz; i++) {
    leer(dist);
    si(estaEntre(iniCasa,finCasa,xManzano+dist)) entonces
        manzCasa++;
        finSi
    }
for(largo i=1; i <= cantNara; i++) {
    leer(dist);
    si(estaEntre(iniCasa,finCasa,xNaranjo+dist)) entonces
        naraCasa++;
        finSi
    }
mostrar << manzCasa << salto;
mostrar << naraCasa << salto;
pausa;
finPrincipal
