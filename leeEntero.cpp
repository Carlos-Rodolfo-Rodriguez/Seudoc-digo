#include <program1.h>
procedimiento leeEntero(entero porRef e) {
caracter tecla;
logico hayDigito = FALSO
      ,haySigno = FALSO
      ,esNegativo = FALSO;
e = 0;
iterar
    leeTecSinEco(tecla);
    salirSi(tecla ES '\n' Y hayDigito);
    segun(tecla)
        caso '+':
            si(NO haySigno Y NO hayDigito) entonces
                haySigno = VERDADERO;
                mostrar << tecla;
                finSi
        otroCaso '-':
            si(NO haySigno Y NO hayDigito) entonces
                haySigno = VERDADERO;
                esNegativo = VERDADERO;
                mostrar << tecla;
                finSi
        otroCaso '0':
            hayDigito = VERDADERO;
            e = e * 10;
            mostrar << tecla;
        otroCaso '1':
            hayDigito = VERDADERO;
            e = e * 10 + 1;
            mostrar << tecla;
        otroCaso '2':
            hayDigito = VERDADERO;
            e = e * 10 + 2;
            mostrar << tecla;
        otroCaso '3':
            hayDigito = VERDADERO;
            e = e * 10 + 3;
            mostrar << tecla;
        otroCaso '4':
            hayDigito = VERDADERO;
            e = e * 10 + 4;
            mostrar << tecla;
        otroCaso '5':
            hayDigito = VERDADERO;
            e = e * 10 + 5;
            mostrar << tecla;
        otroCaso '6':
            hayDigito = VERDADERO;
            e = e * 10 + 6;
            mostrar << tecla;
        otroCaso '7':
            hayDigito = VERDADERO;
            e = e * 10 + 7;
            mostrar << tecla;
        otroCaso '8':
            hayDigito = VERDADERO;
            e = e * 10 + 8;
            mostrar << tecla;
        otroCaso '9':
            hayDigito = VERDADERO;
            e = e * 10 + 9;
            mostrar << tecla;
        casoAsumido:
//            mostrar << "Tecla rechazada:" << tecla << salto
            ;
        finSegun
    finIterar
si(esNegativo) entonces
    e = -e;
    finSi
mostrar << salto;
}