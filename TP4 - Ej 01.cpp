// Archivo de traducción de seudocódigo a C++
#include <program1.h>
/**
*    Enunciado: Leer 2 valores y si se puede, dividir el primero por el segundo.
*/
principal                                                       // Unidad de programa principal
real cociente,divisor;
limpiar;                                                        // Limpia la pantalla.
leerM(cociente,"Cociente:");
leerM(divisor,"Divisor:");
si(divisor NOES 0.0) entonces                                   // Si se puede dividir,
    mostrar <<"El resultado de dividir "<<cociente<<" por "<<divisor<<" es: "<< cociente/divisor;
    sino
    mostrar << "No se puede dividir por cero...";
    finSi
mostrar << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal

