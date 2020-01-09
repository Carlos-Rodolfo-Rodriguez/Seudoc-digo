#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: You are given a list(1-indexed) of size n, initialized with zeroes. 
                You have to perform m operations on the list and output the maximum of final values of all the elements in the list. 
                For every operation, you are given three integers a, b and k and you have to add value to all the elements ranging from index to (both inclusive).

Input Format

The first line will contain two integers n and m separated by a single space.
Next lines will contain three integers a, b and k separated by a single space.
Numbers in list are numbered from 1 to n.
*/

funcion largo mayorVec(vectorDin(largo) vec) {
largo resul = vec[0],i,t=vec.size();
variarMas1(i,1,t-1)
    si(vec[i] > resul) entonces
        resul = vec[i];
        finSi
    finVariar
regresa(resul);
}

constante largo N = 1000000;

principal                                                       // Unidad de programa principal
largo n,m,veces,ind,a,b,k;
leer(n);leer(m);
vectorDin(largo) v(n);
//mostrar << "Inicializando..." << salto;
for(ind = 0; ind < n; ind++) {
    v[ind] = 0;
    }
//mostrar << "Leyendo..." << salto;
for(veces = 0; veces < m; veces++) {
    leer(a);leer(b);leer(k);
    --a;--b;
    for(ind = a; ind <= b; ind++) {
        v[ind] += k;
        }
//    si(esMult(veces,1000)) mostrar << veces << tabulado;
    }
mostrar << mayorVec(v) << salto;
finPrincipal
