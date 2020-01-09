#include <program1.h>
/**
*    Enunciado: 
*/
funcion entera buscaPos(cadena aBuscar,vectorDin(cadena) ton) {
entero resul = tamanio(ton)-1;
mientras(resul >= 0 Y ton[resul] NOES aBuscar)
    resul--;
    finMientras
regresa(resul);
}

principal                                                       // Unidad de programa principal
entero S,pos;
cadena N;
vectorDin(cadena) tonos {"DO","DO#","RE","RE#","MI","FA","FA#","SOL","SOL#","LA","LA#","SI"};
leer(S);
leer(N);
pos = buscaPos(N,tonos) - S;
si(pos < 0) pos += tamanio(tonos);
mostrar << tonos[pos] << salto;
finPrincipal                                                    // Fin de unidad de programa principal
