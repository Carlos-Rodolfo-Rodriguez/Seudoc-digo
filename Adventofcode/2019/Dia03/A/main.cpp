#include "Grilla2D.h"
#include "Interseccion.h"
#include "operLista.h"
/**
*    Enunciado: 
*/
enumerado Dir {ARR,ABA,IZQ,DER};

principal                                                       // Unidad de programa principal
matrizDin2D(Grilla2D) cables;
vectorDin(Grilla2D) unCable(1);
cadena renglon,cadNro/*,cadDir="URDL"*/;
corto sinSigno nro;
Dir URDL;
iterar
    leeRenglon(cin,renglon);
    salirSi(esFinDarch(cin) O renglon ES "");
    cadNro = "";
    ajusTamanio(unCable,1);
    paraCada(car,renglon)
        si(car ES 'U') entonces
            URDL = ARR;
            sinoSi(car ES 'R') entonces
            URDL = DER;
            sinoSi(car ES 'D') entonces
            URDL = ABA;
            sinoSi(car ES 'L') entonces
            URDL = IZQ;
            sinoSi(esDigito(car)) entonces
            cadNro += car;
            sinoSi(car ES ',') entonces
            nro = aEntero(cadNro);
            segun(URDL)
                caso     ARR: Grilla2D::arr(unCable,nro);
                otroCaso ABA: Grilla2D::aba(unCable,nro);
                otroCaso DER: Grilla2D::der(unCable,nro);
                otroCaso IZQ: Grilla2D::izq(unCable,nro);
                finSegun
            cadNro = "";
            finSi
        finPara
        nro = aEntero(cadNro);
        segun(URDL)
            caso     ARR: Grilla2D::arr(unCable,nro);
            otroCaso ABA: Grilla2D::aba(unCable,nro);
            otroCaso DER: Grilla2D::der(unCable,nro);
            otroCaso IZQ: Grilla2D::izq(unCable,nro);
            finSegun
    agregaEleVDin(cables,menosPrimero(unCable));
    finIterar
clasifica(cables[0]);
clasifica(cables[1]);
//Grilla2D::muestraV(cables[1]);
vectorDin(Grilla2D) cruces = interseccion(cables[0],cables[1]);
Grilla2D::muestraV(cruces);
mostrar << Grilla2D::menorV(cruces).distManhattan() << salto;
finPrincipal                                                    // Fin de unidad de programa principal
