#include <program1.h>                                           // Archivo de traducci√≥n de seudoc√≥digo a C++
/**
*    Enunciado: 
*/
principal                                                       // Unidad de programa principal
locale loc {};
cadena vocales="·ÈÌÛ˙";
caracter tecla
        ,teclAnt = ' ';
limpiar;                                                        // Limpia la pantalla.
loc = cout.getloc();
iterar 
    leeTecSinEco(tecla);
    salirSi(tecla ES '.');
    mostrar << tecla << " -> " << fSi(esVocal(tecla),"vocal","") << salto;
    mostrar << teclAnt << fSi(teclAnt < tecla," < ",fSi(teclAnt > tecla," > "," = ")) << tecla << salto;
    mostrar << (sinSigno entero)teclAnt << fSi(teclAnt < tecla," < ",fSi(teclAnt > tecla," > "," = ")) << (sinSigno entero)tecla << salto;
    teclAnt = tecla;
    finIterar
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal

