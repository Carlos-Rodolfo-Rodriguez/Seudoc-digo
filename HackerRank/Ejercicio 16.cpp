#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: Between 2 sets. x is between A and B if x mod Ai == 0 and Bi mod x == 0
*/
constante entera T = 10;

funcion entero maxVec(entero t, entero V[]) {
entero i,resul = V[0];
for(i = 1; i < t; i++) if(V[i] > resul) resul = V[i];
regresa(resul);
}
funcion entero minVec(entero t, entero V[]) {
entero i,resul = V[0];
for(i = 1; i < t; i++) if(V[i] < resul) resul = V[i];
regresa(resul);
}

funcion logica sonFactores(entero t, entero V[], entero x) {
logico resul = VERDADERO;
entero i;
for(i = 0; i < t; i++) resul = resul Y esMult(x,V[i]);
regresa(resul);
}

funcion logica esFactor(entero x, entero t, entero V[]) {
logico resul = VERDADERO;
entero i;
for(i = 0; i < t; i++) resul = resul Y esMult(V[i],x);
regresa(resul);
}

principal                                                       // Unidad de programa principal
entero i,t1,t2,A[T],B[T],maxA,minB,cant = 0;
leer(t1);leer(t2);
for(i = 0; i < t1; i++) leer(A[i]);
for(i = 0; i < t2; i++) leer(B[i]);
maxA = maxVec(t1,A);
minB = minVec(t1,B);
for(int i = maxA; i <= minB; i++) if(sonFactores(t1,A,i) && esFactor(i,t2,B)) cant++;
mostrar << cant;
pausa;
finPrincipal
