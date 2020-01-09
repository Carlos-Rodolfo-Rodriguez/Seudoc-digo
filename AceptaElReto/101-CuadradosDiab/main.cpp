#include <program1.h>
/**
*    Enunciado: 
*/
funcion entera sumaFila(vectorDin(entero) fila) {
entero resul = 0;
paraCada(ele,fila)
    resul += ele;;
    finPara
regresa(resul);
}

funcion logica sumasF(matrizDin2D(entero) m,entero cMagica) {
logico resul = VERDADERO;
paraCada(fila,m);
    entero suma = suma;
    resul = resul Y suma ES cMagica;
    finPara

regresa(resul);
}

funcion logica esMagica(matrizDin2D(entero) m) {
logico resul;
entero cMagica = sumaFila(m[1]);
resul = sumasF(m,cMagica) /*Y sumasC(m,cMagica) Y sumaDP(m) ES cMagica Y sumaDS(m) ES cMagica*/;
regresa(resul);
}

procedimiento analiza(matrizDin2D(entero) m) {
si(esMagica(m)) entonces
    sino
    mostrar << "NO\n";
    finSi
}

principal                                                       // Unidad de programa principal
entero n;
vectorDin(entero) fila;
iterar
    leer(n);
    salirSi(n < 2);
    ajusTamanio(fila,n);
    matrizDin2D(entero) mCuad(n,fila);
    paraCada(fila,mCuad);
        paraCada(ele,fila)
            leer(ele);
            finPara
        finPara
    analiza(mCuad);
    finIterar
finPrincipal                                                    // Fin de unidad de programa principal
