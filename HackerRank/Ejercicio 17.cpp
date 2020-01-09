#include <program1.h>                                           // Archivo de traducciÃ³n de seudocÃ³digo a C++
/**
*    Enunciado: Matriz de 6x6, valores entre -9 y 9
    calcular la máxima suma del patrón:
a b c
  d
e f g
    incluído en la matriz.
*/
constante entera T = 6;

funcion entero sumPatron(entero f, entero c, entero m[T][T]) {
entero resul = m[f-1][c-1] + m[f-1][c] + m[f-1][c+1] + m[f][c] + m[f+1][c-1] + m[f+1][c] + m[f+1][c+1];
regresa(resul);
}

funcion entero maxPatron(entero m[T][T]) {
entero resul = sumPatron(1,1,m)
      ,suma;
for(int f = 1; f < T-1; f++)
    for(int c = 1; c < T-1; c++) {
        suma = sumPatron(f,c,m);
        if(suma > resul) resul = suma;
        }
regresa(resul);
}

principal                                                       // Unidad de programa principal
entero m[T][T],f,c;
for(f = 0 ; f < T ; f++)
    for(c = 0 ; c < T ; c++)
        leer(m[f][c]);
mostrar << maxPatron(m) << salto;
pausa;
finPrincipal
