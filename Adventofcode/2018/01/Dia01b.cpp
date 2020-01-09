#include <program1.h> 
#include "../../../busquedabin.h"
#include "../../../muestraV.h"
                                          // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: You notice that the device repeats the same frequency change list over and over. To calibrate the device, you need to find the first frequency it reaches twice.

For example, using the same list of changes above, the device would loop as follows:

Current frequency  0, change of +1; resulting frequency  1.
Current frequency  1, change of -2; resulting frequency -1.
Current frequency -1, change of +3; resulting frequency  2.
Current frequency  2, change of +1; resulting frequency  3.
(At this point, the device continues from the start of the list.)
Current frequency  3, change of +1; resulting frequency  4.
Current frequency  4, change of -2; resulting frequency  2, which has already been seen.
In this example, the first frequency reached twice is 2. Note that your device might need to repeat its list of frequency changes many times before a 
duplicate frequency is found, and that duplicates might be found while in the middle of processing the list.

Here are other examples:

+1, -1 first reaches 0 twice.
+3, +3, +4, -2, -4 first reaches 10 twice.
-6, +3, +8, +5, -6 first reaches 5 twice.
+7, +7, -2, -7, -4 first reaches 14 twice.
What is the first frequency your device reaches twice?


*/
principal                                                       // Unidad de programa principal
largo nro
     ,posIns
     ,suma = 0;
logico esta;
vectorDin(largo) vNro;
vectorDin(largo) vFreq;
limpiar;       
iterar
    leer(nro);
    agregaEleVDin(vNro,nro);
    suma += nro;
    si(tamanio(vFreq) > 0) entonces
        esta = estaBin(vFreq,suma);
        posIns = posInsBin(vFreq,suma);
        intercalaEleVDin(vFreq,suma,posIns);
#ifdef DEPURACION
    mostrar << suma << tabulado << nro << salto;
        muestraV(vFreq);
        si(NO estaOrd(vFreq)) entonces
            mostrar << "vector desordenado en " << desordEn(vFreq) << salto;
            muestraV(vFreq);
            pausa;
            finSi
#endif        
        sino
        esta = FALSO;
        agregaEleVDin(vFreq,suma);
        finSi
    salirSi((nro > 10000) O (esta));
    finIterar
si(NO esta) entonces 
    largo t = tamanio(vNro)
         ,posi = 0;
    iterar
        suma += vNro[posi];
//        mostrar << suma << tabulado << vNro[posi] << salto;
        salirSi(estaBin(vFreq,suma));
        posIns = posInsBin(vFreq,suma);
        intercalaEleVDin(vFreq,suma,posIns);
        si(esMult(tamanio(vFreq),10000)) mostrar << tamanio(vFreq) << " fr. exploradas.\n";
#ifdef DEPURACION
        muestraV(vFreq);
        si(NO estaOrd(vFreq)) entonces
            mostrar << "vector desordenado en " << desordEn(vFreq) << salto;
            muestraV(vFreq);
            pausa;
            finSi
#endif        
        si(++posi >= t) posi = 0;
        finIterar
    finSi
mostrar << salto << "El resultado es: " << suma << salto;
pausa;                                                          // Pausa antes de finalizar. 
finPrincipal

