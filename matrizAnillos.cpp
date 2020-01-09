// Archivo de traducción de seudocódigo a C++
// Matriz Anillos (elementos pintados de blanco)

/*
 * Alumno: Martin Hector Matias - Legajo: 41002
 * Final Programacion 1 - Tema 3 - 28/07/2015
*/

#include <program1.h>

/**
 * Enunciado: Se tiene una matriz de cualquier tamanio entre 2x2 y 13x15 filas por columnas, cuyo tamanio real lo elige el
			  usuario y es siempre impar. Se quiere calcular el desvi­o estandard de las celdas de la zona marcada en blanco
*/
	constante entero TAM = 15;


principal                                                       				// Unidad de programa principal
	
	entero matriz[TAM][TAM];
	entero dimX, dimY, fil, col ,medio, inicio=0, cont=0;
	real suma=0.0;
	real prom=0.0;
	real vec, s;
	
limpiar;                                                        				// Limpia la pantalla.

	repetir
		leerM(dimX, "Ingrese el valor de la dimension de matriz para X: ");
	hasta(dimX >=2 Y dimX <=13 Y dimX%2 NOES 0);
	
	repetir
		leerM(dimY, "Ingrese el valor de la dimension de matriz para Y: ");
	hasta(dimY >=2 Y dimY <=15 Y dimY%2 NOES 0);	
	
/* Arma la matriz con valores aleatorios */
	variar(fil, 0, dimX-1, 1)
		variar(col, 0, dimY-1, 1)
			matriz[fil][col] = (entero)alAzarRealEntre(-10.0,10.0);
		finVariar;
	finVariar;	
	
/* Muestra la matriz */
	variar(fil, 0, dimX-1, 1)
		mostrar <<salto<< "\n"; 
		variar(col, 0, dimY-1, 1)
			mostrar <<matriz[fil][col]<< tabulado;
		finVariar;
	finVariar;
	mostrar <<salto;	
	
/* Matriz anillos (elementos pintados de blanco) */	
	mostrar<<"\n\nMatriz anillos: "<<salto;
	
	mientras(cont<dimY Y cont<dimX) {
		
	variar(fil, inicio+1, dimY-1-1, 1)											// Primer Ciclo
		mostrar<<matriz[inicio+1][fil]<< salto;
		cont++;
		suma = suma + matriz[inicio+1][fil];
	finVariar;	
	
	variar(col, inicio+2, dimX-2, 1)											// Segundo ciclo
		mostrar <<matriz[col][dimX-2]<< salto;
		cont++;
		suma = suma + matriz[col][dimX-2];		
	finVariar;
	
	variar(fil, dimY-2-1, inicio+1, -1)											// Tercer ciclo
		mostrar<<matriz[dimY-2][fil]<< salto;
		cont++;
		suma = suma + matriz[dimY-2-1][fil];		
	finVariar;
	
	variar(col, dimX-2-1, inicio+2, -1)										    // Cuarto ciclo
		mostrar<<matriz[col][inicio+1]<< salto;
		cont++;
		suma = suma + matriz[col][inicio+2];		
	finVariar;
	
/*	dimX = dimX-2;
	dimY = dimY-2;	
	inicio = inicio+1;
*/	
	finMientras;
	
	prom = suma/cont;
	
/* Desvio Estandar */	
		variar(fil, 0, dimY-1, 1)
			variar(col, fil, dimX-1, 1)
				vec = (matriz[fil][col] - prom)*(matriz[fil][col] - prom);
			finVariar;
		finVariar;
		s = XalaY(1/(cont-1)*vec, 0.5);		
	mostrar <<"El desvio estandar es: "<< s <<salto;

pausa;                                                          				// Pausa antes de finalizar. 
finPrincipal                                                   				// Fin de unidad de programa principal.
}
