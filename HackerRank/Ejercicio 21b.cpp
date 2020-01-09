#include <program1.h>                                           // Archivo de traducci√≥n de seudoc√≥digo a C++
/**
*    Enunciado: You are given a list(1-indexed) of size n, initialized with zeroes. 
                You have to perform m operations on the list and output the maximum of final values of all the elements in the list. 
                For every operation, you are given three integers a, b and k and you have to add value to all the elements ranging from index to (both inclusive).

Input Format

The first line will contain two integers n and m separated by a single space.
Next lines will contain three integers a, b and k separated by a single space.
Numbers in list are numbered from 1 to n.
*/
estructura intervalo {
    largo comienzo;
    largo fin;
    largo valor;
    funcion intervalo aIntervalo(largo, largo, largo);
    procedimiento muestra() { mostrar << "[" << comienzo << ";" << fin << ";" << valor << "]" << tabulado;};
//    procedimiento incorpora(vector<intervalo>);
    };

procedimiento muestVecInt(vector<intervalo> i) {
largo ind = 0;
paraCada(unInt,i)
    mostrar << "Intervalo " << ++ind << ": ";
    unInt.muestra();
    si(esMult(ind,5)) mostrar << salto;
    finParaCada
mostrar << salto;
}

funcion largo izquierdo(vector<intervalo> i, largo valBorde) {
largo resul = i.size()-1;
mientras(resul > 0 Y i[resul].comienzo > valBorde) 
    resul--;
    finMientras
regresa(resul);
}

funcion largo derecho(vector<intervalo> i, largo valBorde) {
largo resul = 0;
mientras(resul < (largo)i.size() Y i[resul].fin <= valBorde)
    resul++;
    finMientras
regresa(resul);
}

global entero veces = 0;

procedimiento incorpora(vector<intervalo> porRef i,intervalo otroInt) {
si(esMult(++veces,10000)) mostrar << veces << tabulado;
largo izq = izquierdo(i,otroInt.comienzo)
    , der = derecho(i,otroInt.fin);
si(i[izq].comienzo ES otroInt.comienzo) entonces
    si(i[izq].fin ES otroInt.fin) entonces
        i[izq].valor += otroInt.valor;
        sino                                                                    // Es distinto
        mientras(izq < der Y i[izq].fin < otroInt.fin)
            i[izq].valor += otroInt.valor;
            izq++;
            finMientras                                                         // Sale con izq >= der O i[izq].fin >= otroInt.fin
        si(otroInt.fin < i[izq].fin) entonces                            // Si queda un resto de vector,
            intercalaEleVDin(i,i[izq],izq);                                         // duplica la posiciÛn izq en (izq+1) antes de inrmentarlo.
            i[izq+1].comienzo = otroInt.fin+1;
            finSi
        i[izq].fin = otroInt.fin;
        i[izq].valor += otroInt.valor;
        finSi
    sino
    mientras(izq < der Y i[izq].fin < otroInt.comienzo)
        izq++;
        finMientras
    intercalaEleVDin(i,i[izq],izq);                                             // Duplica la posiciÛn izq en (izq+1)
    i[izq].fin = otroInt.comienzo-1;                                          // El anterior termina en (izq-1) sin cambiar el valor,
    i[izq+1].comienzo = otroInt.comienzo;                                         // Y el izq empieza junto
    incorpora(i,otroInt);
    finSi
}

funcion intervalo intervalo::aIntervalo(largo i, largo f, largo v) {
intervalo resul;
resul.comienzo = i;
resul.fin = f;
resul.valor = v;
regresa (resul);
}

funcion largo mayorVecInt(vector<intervalo> i) {
largo resul = i[0].valor;
paraCada(unInt,i)
    si(unInt.valor > resul) entonces
        resul = unInt.valor;
        finSi
    finParaCada
regresa(resul);
}

principal                                                       // Unidad de programa principal
largo n,m,veces,a,b,k;
leer(n);leer(m);
intervalo aux = aux.aIntervalo(1,n,0);
vector<intervalo> resultado;
agregaEleVDin(resultado,aux);
//muestVecInt(resultado);
for(veces = 0; veces < m; veces++) {
    leer(a);leer(b);leer(k);
    aux = aux.aIntervalo(a,b,k);
    incorpora(resultado,aux);
//    muestVecInt(resultado);
    }
mostrar << mayorVecInt(resultado) << salto;
pausa;
finPrincipal
