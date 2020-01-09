/*
  Dada una matriz de cFil filas por cCol columnas, la lee
*/
#include <program1.h>
#include "Tmatrices.h"

procedimiento inicTab(entero cFil, entero cCol,
					  entero M[TAMFIL][TAMCOL],
					  entero valor) {
entero f,c;
variarMas1(f,0,cFil-1)
	variarMas1(c,0,cCol-1)
		M[f][c] = valor;
		finVariar;
    finVariar;
};

procedimiento muestraTablero(entero cFi, entero cCol,entero M[TAMFIL][TAMCOL])
entero f,c;
variarMas1(f,0,cFi-1)
    variarMas1(c,0,cCol-1)
        mostrar << M[f][c] << tabulado;
        finVariar;
    mostrar << salto;
    finVariar;
pausa;
}