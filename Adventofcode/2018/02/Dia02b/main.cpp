#include <program1.h>
/**
*    Enunciado: 
*/
funcion entero cuentaDif(cadena cad1, cadena cad2) {
entero i
      ,l1 = longitud(cad1)
      ,l2 = longitud(cad2);
entero resul = abs(l2-l1);
variarMas1(i,0,min(l1,l2)-1)
    si(cad1[i] NOES cad2[i]) resul++;
    finVariar
regresa(resul);
}

funcion cadena coincidencias(cadena cad1, cadena cad2) {
cadena resul = "";
entero i
      ,l1 = longitud(cad1)
      ,l2 = longitud(cad2);
variarMas1(i,0,min(l1,l2)-1)
    si(cad1[i] ES cad2[i]) resul+=cad1[i];
    finVariar
regresa(resul);
}

procedimiento buscaUnaDif(vectorDin(cadena) vCads) {
vectorDin(cadena) cads = vCads;
mientras(tamanio(cads) > 0)
    cadena unaCadena = cads[0];
    borra1EleVDin(cads,0);
    paraCada(otraCadena,cads)
        si(cuentaDif(unaCadena,otraCadena) ES 1) entonces
            mostrar << unaCadena << salto;
            mostrar << otraCadena << salto;
            mostrar << "Coincide:" << coincidencias(unaCadena,otraCadena) << salto;
            terminarPrograma;
            finSi
        finPara
    finMientras
}

principal                                                       // Unidad de programa principal
vectorDin(cadena) IDs;
cadena id;
largo cuenta2 = 0
     ,cuenta3 = 0;
limpiar;                                                        // Limpia la pantalla.
iterar
    leeRenglon(cin,id);
    salirSi(id ES "");
    agregaEleVDin(IDs,id);
    finIterar
buscaUnaDif(IDs);
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal  