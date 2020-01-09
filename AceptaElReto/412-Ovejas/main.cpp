#include <program1.h>
/**
*    Enunciado: Cada foto comienza con una línea con dos números indicando el ancho y el alto (en pí­xeles) de la imagen (ambos menores o 
                iguales que 50). 
                A continuación viene la imagen en blanco y negro en donde el carácter '.' representa el color blanco y 'X' el negro. 
                Se puede asumir que:
                    El fondo de la imagen es siempre blanco.
                    Todas las ovejas tienen la silueta negra. Las ovejas blancas tienen algo blanco dentro de su silueta.
                    Las ovejas nunca se solapan (es decir, en las fotos las ovejas nunca se tocan).
                    Ninguna oveja entra en contacto con los bordes de la fot
                    En la foto sÃ³lo aparecen ovejas.
*/
procedimiento conectar(matrizDin2D(caracter) porRef estaFoto, corto fila, corto colu) {
estaFoto[fila][colu] = '-';
si(fila > 0 Y estaFoto[fila-1][colu] ES '.') conectar(estaFoto,fila-1,colu); 
si(colu > 0 Y estaFoto[fila][colu-1] ES '.') conectar(estaFoto,fila,colu-1); 
si(fila+1 < tamanio(estaFoto) Y estaFoto[fila+1][colu] ES '.') conectar(estaFoto,fila+1,colu); 
si(colu < tamanio(estaFoto[fila]) Y estaFoto[fila][colu+1] ES '.') conectar(estaFoto,fila,colu+1); 
}

procedimiento rellenar(matrizDin2D(caracter) unaFoto) {
matrizDin2D(caracter) estaFoto = unaFoto;
conectar(estaFoto,0,0);
logico hayBlanco = FALSO;
paraCada(fila,estaFoto)
    paraCada(car,fila)
        hayBlanco = hayBlanco O car ES '.';
        finPara
    finPara
mostrar << fSi(hayBlanco,"SI","NO")<< salto;
}

principal                                                       // Unidad de programa principal
corto ancho,alto;
iterar
    leer(ancho);
    salirSi(esFinDArch(stdin));
    leer(alto);
    matrizDin2D(caracter) foto(alto);
    paraCada(renglon,foto)
        ajusTamanio(renglon,ancho);
        cadena reng;
        corto posi = 0;
        leer(reng);
        paraCada(car,renglon)
            car = reng[posi++];
    //        mostrar << car;
            finPara
    //    mostrar << salto;
        finPara
    rellenar(foto);
    finIterar
finPrincipal                                                    // Fin de unidad de programa principal
