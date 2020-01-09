#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: 
*/
constante entera T1 = 2, T2 =3, T3 = 4;

#define matriz(tipo,tam) array<tipo,tam>
principal                                                       // Unidad de programa principal
arreglo3D(real,T1,T2,T3) mat3D;
limpiar;                                                        // Limpia la pantalla.
entero cuenta {0};
paraCada(fila,mat3D)
    mostrar << "Fila:" << salto;
    paraCada(colu,fila)
        mostrar << "Columna:" << salto;
        paraCada(ele,colu)
            ele = cuenta++;
            mostrar << ele << ", ";
            finParaCada
            mostrar << salto;
        finParaCada
    mostrar << salto;
    finParaCada
entero fila,colu,prof;
variar(fila,0,T1-1,1)
    mostrar << "Fila:"<<fila << salto;
    variar(colu,0,T2-1,1)
        mostrar << "Columna:"<< colu << salto;
        variar(prof,0,T3-1,1)
            mostrar << mat3D[fila][colu][prof] << ", ";
            finVariar
        mostrar << salto;
        finVariar
    mostrar << salto;
    finVariar
pausa;                                                // Pausa antes de finalizar. 
finPrincipal

