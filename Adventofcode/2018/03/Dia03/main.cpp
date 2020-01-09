#include <program1.h>
#include "../../muestraV.h"
#include "../../palabrea.h"
/**
*    Enunciado: Each Elf has made a claim about which area of fabric would be ideal for Santa's suit. All claims have an ID and 
                consist of a single rectangle with edges parallel to the edges of the fabric. Each claim's rectangle is defined 
                as follows:
The number of inches between the left edge of the fabric and the left edge of the rectangle.
The number of inches between the top edge of the fabric and the top edge of the rectangle.
The width of the rectangle in inches.
The height of the rectangle in inches.
                A claim like #123 @ 3,2: 5x4 means that claim ID 123 specifies a rectangle 3 inches from the left edge, 2 inches 
                from the top edge, 5 inches wide, and 4 inches tall. Visually, it claims the square inches of fabric represented 
                by # (and ignores the square inches of fabric represented by .) in the diagram below:
...........
...........
...#####...
...#####...
...#####...
...#####...
...........
...........
...........
The problem is that many of the claims overlap, causing two or more claims to cover part of the same areas. For example, consider the following claims:

#1 @ 1,3: 4x4
#2 @ 3,1: 4x4
#3 @ 5,5: 2x2
Visually, these claim the following areas:

........
...2222.
...2222.
.11XX22.
.11XX22.
.111133.
.111133.
........
The four square inches marked with X are claimed by both 1 and 2. (Claim 3, while adjacent to the others, does not overlap either of them.)

If the Elves all proceed with their own plans, none of them will have enough fabric. How many square inches of fabric are within two or more claims?
*/
plantilla(Tipo)
funcion matrizDin2D(Tipo) unaMatrizDin2D(entero cFil,entero cCol,Tipo ini) {
matrizDin2D(Tipo) resul;
ajusTamanio(resul,cFil);
//entero c;
paraCada(fila,resul)
    ajusTamanio(fila,cCol);
//    variarMas1(c,0,cCol-1)
//        fila[c] = ini;
//        finVariar
    paraCada(celda,fila)
        celda = ini;
        finPara
    finPara
regresa(resul);
}

constante entero TAM = 1000;
principal                                                       // Unidad de programa principal
matrizDin2D(byte sinSigno) mTela = unaMatrizDin2D(TAM,TAM,(byte sinSigno)0);
vectorDin(cadena) palabras;
cadena renglon;
entero id,xIzq,ySup,ancho,alto,f,c/*,fMax=0,cMax=0*/;
largo cant = 0;
limpiar;                                                        // Limpia la pantalla.
iterar
    leeRenglon(cin,renglon);
    salirSi(renglon ES "");
    palabras = palabrea(reemplaza(renglon,posCarEnCad('x',renglon),1," "));
//    muestraV(palabras);
    id = aEntero(palabras[0]);
    xIzq = aEntero(palabras[1]);
    ySup = aEntero(palabras[2]);
    ancho = aEntero(palabras[3]);
    alto = aEntero(palabras[4]);
    variarMas1(f,ySup,ySup+alto-1)
        variarMas1(c,xIzq,xIzq+ancho-1)
//            si(f > fMax) fMax = f;
//            si(c > cMax) cMax = c;
            mTela[f][c]++;
            finVariar
        finVariar
    finIterar
variarMas1(f,0,TAM-1)
    variarMas1(c,0,TAM-1)
        si(mTela[f][c] > 1) cant++;
        finVariar
    finVariar
mostrar /*<<fMax<<", "<<cMax<<", "*/<< cant << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
