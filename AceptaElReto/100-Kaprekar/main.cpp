#include <program1.h>
/**
*    Enunciado: El número es notable por la siguiente propiedad:

Elige un número de cuatro dígitos que tenga al menos dos diferentes (es válido colocar el dígito 0 al principio, por lo que el número 0009 es válido).
Coloca sus dígitos en orden ascendente y en orden descendente para formar dos nuevos números. Puedes añadir los dígitos 0 que necesites al principio.
Resta el menor al mayor.
Vuelve al paso 2.
A este proceso se le conoce como la rutina de Kaprekar, y siempre llegará al número 6174 en, como mucho, 7 iteraciones. Una vez en él, el proceso no avanzará, dado que 7641 − 1467 = 6174.
Los únicos dígitos de cuatro cifras para los que la rutina de Kaprekar no alcanza el número 6174 son los repdigits, es decir 
aquellos cuyas cuatro cifras son iguales (como 1111), pues en la primera iteración se alcanzará el valor 0 y no podrá salirse
 de él. Es por esto que en el paso 1 se pedía explícitamente que el número inicial tuviera al menos dos dígitos diferentes.
El resto de los números de cuatro cifras terminarán siempre en el número 6174.
Entrada
La primera línea de la entrada contendrá el número de casos de prueba. Cada uno contendrá, en una única línea, un número a comprobar.
Salida
Para cada caso de prueba, el programa indicará el número de vueltas que se debe dar a la rutina de Kaprekar para alcanzar el 6174. Para los números repdigits deberá escribir 8. Para la propia constante de Kaprekar deberá indicar 0.
*/

funcion entero cantDigitos(entero n) {
entero resul = 1;
si(n > 10) resul = 1 + cantDigitos(n/10);
regresa(resul);
}

funcion entero ultimoDigito(entero n) {
entero resul = n - n / 10 * 10;
regresa(resul);
}

funcion entero deReves(entero n) {
entero resul = n;
si(resul >= 10) resul = ultimoDigito(resul) * XalaY(10,cantDigitos(n)-1)+deReves(resul/10);
regresa(resul);
}

funcion entero descendente(entero n) {
entero resul = 0,i,aux = n;
vectorDin(entero) digitos {0,0,0,0};
variarMas1(i,0,3)
    digitos[i] = ultimoDigito(aux);
    aux /= 10;
    finVariar
logico estaOrd;
repetir
    estaOrd = VERDADERO;
    variarMas1(i,1,3)
        si(digitos[i] > digitos[i-1]) entonces
            intercambiar(digitos[i],digitos[i-1]);
            estaOrd = FALSO;
            finSi
        finVariar
    hasta(estaOrd);
paraCada(digito,digitos)
    resul = resul * 10 + digito;
    finPara
regresa(resul);
}

funcion entero vueltasKaprekar(entero nro) {
entero resul = 0
      ,aux = nro
      ,desc,asce;
mientras(aux NOES 6174 Y resul < 8)
    desc = descendente(aux);
    asce = deReves(desc);
    aux = abs(desc-asce);
    mientras(aux > 0 Y aux < 1000) 
        aux *= 10;
        finMientras
    resul++;
    finMientras
regresa(resul);
}

Principal                                                       // Unidad de programa principal
entero nCasos,n,nro;
leer(nCasos);
variarMas1(n,1,nCasos)
    leer(nro);
    mostrar << vueltasKaprekar(nro) << salto;
    finVariar
finPrincipal                                                    // Fin de unidad de programa principal
