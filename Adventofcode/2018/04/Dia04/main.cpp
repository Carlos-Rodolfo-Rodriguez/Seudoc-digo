#include <program1.h>
#include "../../palabrea.h"
#include "../../muestraV.h"
#include "../../../../busquedabin.h"
/**
*    Enunciado: 
*/
plantilla(Tipo)
funcion byte sinSigno ultimoDigito(Tipo n) {
byte sinSigno resul = abs(n - n / 10 * 10);
regresa(resul);
}

funcion byte sinSigno minuto(largo largo t) {
largo largo resul = t - t / 100 * 100;
regresa(resul);
}

plantilla(Tipo)
funcion Tipo sumatoria(vectorDin(Tipo) v) {
Tipo resul = 0;
paraCadaValor(ele,v)
    resul += ele;
    finPara
regresa(resul);
}


principal                                                       // Unidad de programa principal
vectorDin(largo largo) fechaYhora;
vectorDin(largo) guardia;
vectorDin(cadena) palabras;
cadena renglon;
largo largo tiempo;
entero codActGuardia,posi,codGuardia,uDig,posIns;
limpiar;                                                        // Limpia la pantalla.
iterar
    leeRenglon(cin,renglon);
    salirSi(renglon ES "");
    palabras = palabrea(renglon);
//    muestraV(palabras);
    tiempo = aEntero(palabras[4])
            +aEntero(palabras[3])*100
            +aEntero(palabras[2])*10000
            +aEntero(palabras[1])*1000000
            +aEntero(palabras[0])*100000000;
    codActGuardia = fSi(palabras[5] ES "Guard",aEntero(palabras[6])*10+1,fSi(palabras[5] ES "falls",2,3));
    si(tamanio(fechaYhora) > 0) entonces
        posIns = posInsBin(fechaYhora,tiempo);
        intercalaEleVDin(fechaYhora,tiempo,posIns);
        intercalaEleVDin(guardia,codActGuardia,posIns);
//        si(NO estaOrd(fechaYhora)) entonces
//            mostrar << "Desorden detectado:\n";
//            muestraV(fechaYhora);
//            pausa;
//            finSi
        sino
        agregaEleVDin(fechaYhora,tiempo);
        agregaEleVDin(guardia,codActGuardia);
        finSi
//    si(esMult(tamanio(guardia),10)) 
//        muestraV(fechaYhora);
//    mostrar << tiempo << ": " << aCadena(codActGuardia,"00000") << salto;
    finIterar
variarMas1(posi,0,tamanio(fechaYhora)-1)
    uDig = ultimoDigito(guardia[posi]);
    si(uDig ES 1) entonces
        codGuardia = guardia[posi] / 10;
        sino
        guardia[posi] = codActGuardia = codGuardia * 10 + uDig;
        finSi
//    mostrar << fechaYhora[posi]<< conAncho(5) << guardia[posi] << salto;
    finVariar
matrizDin2D(entero) grillaHoraria;
vectorDin(entero) nroGuard;
vectorDin(entero) minutos(60,0);
byte minutoInicial,minutoFinal,esteMinuto;
logico esta;
variarMas1(posi,0,tamanio(fechaYhora)-1)
    uDig = ultimoDigito(guardia[posi]);
    si(uDig ES 1) entonces
        codGuardia = guardia[posi] / 10;
        sinoSi(uDig ES 2) entonces
        minutoInicial = minuto(fechaYhora[posi]);
        sino
        minutoFinal = minuto(fechaYhora[posi]);
        si(tamanio(nroGuard) > 0) entonces
            posIns = posInsBin(nroGuard,codGuardia);
            si(nroGuard[posIns] NOES codGuardia) entonces
                intercalaEleVDin(nroGuard,codGuardia,posIns);
                intercalaEleVDin(grillaHoraria,minutos,posIns);
                finSi
            sino
            agregaEleVDin(nroGuard,codGuardia);
            agregaEleVDin(grillaHoraria,minutos);
            posIns = 0;
            finSi
        variarMas1(esteMinuto,minutoInicial,minutoFinal)
            grillaHoraria[posIns][esteMinuto]++;
            finVariar
        finSi
//    mostrar << fechaYhora[posi]<< conAncho(5) << guardia[posi] << salto;
    finVariar
entero posMayor = 0
      ,sumaMax = 0
      ,suma;
variarMas1(posi,0,tamanio(grillaHoraria)-1)
    suma = sumatoria(grillaHoraria[posi]);
    si(suma > sumaMax) entonces
        sumaMax = suma;
        posMayor = posi;
        finSi
    finVariar
codGuardia = nroGuard[posMayor];
minutos = grillaHoraria[posMayor];
entero minutoMayor = 0
      ,diasMayor = minutos[0];
variarMas1(esteMinuto,1,59)
    si(minutos[esteMinuto] > minutos[minutoMayor]) minutoMayor = esteMinuto;
    finVariar
mostrar << "Guardia:" << codGuardia << ", minuto:" << minutoMayor << "(" << codGuardia*minutoMayor <<")\n";
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
