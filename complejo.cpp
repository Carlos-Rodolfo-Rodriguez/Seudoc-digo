#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: real
*/

estructura Complejo {
privado:
    real parteImag;
    real parteReal;
publico:
    Complejo() {parteReal = 0.; parteImag = 0.;}
    Complejo(real r, real i) {parteReal = r; parteImag = i;}
    procedimiento ponR(real r) {parteReal = r;}
    procedimiento ponI(real i) {parteImag = i;}
    procedimiento mostrarComplejo() {mostrar <<"("<<parteReal<<";"<<parteImag<<")" << tabulado;}
    };

principal                                                       // Unidad de programa principal
entero ind = 0;
vectorDin(Complejo) v(10);
limpiar;                                                        // Limpia la pantalla.
paraCada(ele,v)
    ele.ponR(ind);
    ele.ponI(-ind++);
    finParaCada
//agregaEleVDin(v,100);
//insertaEleVDin(v,(-111));
//intercalaEleVDin(v,5.5,7);
//borra1EleVDin(v,4);
paraCada(ele,v)
    ele.mostrarComplejo();
    finParaCada
mostrar << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal

