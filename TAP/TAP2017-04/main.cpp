#include <program1.h>
#include "../leeVecD.h"
#include "../muestraV.h"
/**
*    Enunciado: 
*/
estructura enlace {
privado:
    campo entero Aorigen;
    campo entero Bdestino;
    campo entero Pcosto;
publico:
    procedimiento muestra();
    procedimiento leeEnlace();
    /*{leer(Aorigen);leer(Bdestino);leer(Pcosto);si(Aorigen > Bdestino) swap(Aorigen,Bdestino);};*/
    };
    
procedimiento enlace::leeEnlace() {
leer(Aorigen);
leer(Bdestino);
leer(Pcosto);
}
    
procedimiento enlace::muestra() {
mostrar << "Origen: " << Aorigen << ", destino: " << Bdestino << ", costo: " << Pcosto << salto;
}

procedimiento leeRutas(entero cantRutas,vectorDin(enlace) rutas) {
paraCada(enl,rutas)
    enl.leeEnlace();
    finPara
//muestraRutas(rutas);
}


principal                                                       // Unidad de programa principal
constante largo maxPesos = 1000000;
entero Nciudades,Mrutas;
vectorDin(enlace) rutas(Mrutas);
vectorDin(real) cuadradonios;
//matrizDin2D(entero) rutas;
limpiar;                                                        // Limpia la pantalla.
leer(Nciudades); leer(Mrutas);
leeVecD(Nciudades,cuadradonios);
//leeRutas(Mrutas,rutas);
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal                                                    // Fin de unidad de programa principal
