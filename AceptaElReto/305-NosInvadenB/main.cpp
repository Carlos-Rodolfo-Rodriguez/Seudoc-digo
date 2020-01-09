#include <program1.h>
/**
*    Enunciado: 
*/
plantilla(Tipo)
funcion sinSigno entero posInsBin(vectorDin(Tipo) porRef v,Tipo vAb) {
sinSigno entero resul = 0
    ,t = tamanio(v);
si(t > 0) entonces
    si(v[0] < vAb Y vAb < v[t-1]) entonces                                               // Está entre el primero y el último sin ser 1° ni último
        entero i = 0
             ,d = t - 1
             ,m;
        resul = d;
        mientras(d - i >= 2)                                                             // Hay lugar para m -> i < m < d
            m = (i + d) / 2;                                                             // m está al medio
            si(v[m] < vAb) entonces                                                      // Esta en la mitad derecha
                i = m;
                resul = d;
                sinoSi(vAb < v[m]) entonces                                               // Está en la mitad izquierda
                d = m;
                resul = d;
                sino                                                                             // ¡Lo encontramos!
                resul = m;
                i = d;
                finSi
            finMientras
        sinoSi(v[0] >= vAb) entonces                                                     // Es el primero
        resul = 0;
        sinoSi(v[t-1] <= vAb) entonces                                                                             // Es el último
        resul = t;
        finSi
    sino
    resul = 0;
    finSi
regresa(resul);
}
implementa funcion sinSigno entero posInsBin(vectorDin(sinSigno entero) porRef,sinSigno entero);

constante sinSigno entero T = 100000;
vectorDin(sinSigno entero) invasores(T),defensores(T);

funcion sinSigno entero exitos(/*vectorDin(sinSigno entero) inv, vectorDin(sinSigno entero) def*/
                               sinSigno entero t) {
sinSigno entero resul = 0,pos;
entero i;
variarMenos1(i,t-1,0)
    pos = posInsBin(defensores,invasores[i]);
    si(pos < tamanio(defensores)/* O defensores[pos] < invasores[0]*/) entonces;
        resul++;
    //    borra1EleVDin(invasores,i);
        borra1EleVDin(defensores,pos);
        finSi
    finVariar
regresa(resul);
}

procedimiento leeDefensores(/*vectorDin(sinSigno entero) porRef v, */sinSigno entero t) {
sinSigno entero i,valor;
variarMas1(i,0,t-1)
    leer(valor);
    intercalaEleVDin(defensores,valor,posInsBin(defensores,valor));
    finVariar
defensores.resize(t);
}
procedimiento leeInvasores(/*vectorDin(sinSigno entero) porRef v, */sinSigno entero t) {
sinSigno entero i,valor;
variarMas1(i,0,t-1)
    leer(invasores[i]);
    finVariar
invasores.resize(t);
}

principal                                                       // Unidad de programa principal
sinSigno entero N;
invasores.reserve(T);
defensores.reserve(T);
iterar
    leer(N);
    salirSi(esFinDArch(stdin));
//    invasores.clear();
    defensores.clear();
    leeInvasores(N);
    leeDefensores(N);
    mostrar << exitos(/*invasores,defensores*/N) << salto;
    finIterar
finPrincipal                                                    // Fin de unidad de programa principal
