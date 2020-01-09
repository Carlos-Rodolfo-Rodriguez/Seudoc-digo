#include <program1.h>
/**
*    Enunciado: 
*/
estructura Reina {
privado:
    campo entero sinSigno x;
    campo entero sinSigno y;
publico:
    Reina() {};
    Reina(constante Reina porRef otra) {x = otra.x; y = otra.y;};
    Reina(entero sinSigno xIni,entero sinSigno yIni) { x = xIni; y = yIni;}
    procedimiento poneReinaEn(entero sinSigno xIni,entero sinSigno yIni) { x = xIni; y = yIni;}
    funcion logica seAtacan(Reina); 
    };

funcion logica Reina::seAtacan(Reina otra) {
logico resul = (x ES otra.x) O
               (y ES otra.y) O
               ((x + y) ES (otra.x + otra.y)) O
               ((x - y) ES (otra.x - otra.y));
regresa(resul);
}

funcion logica hayReinasAtacadas(vectorDin(Reina) porRef reinas) {
logico resul = FALSO;
entero sinSigno t = tamanio(reinas),i1,i2;
Reina estaReina;
variarMas1(i1,0,t-2)
    estaReina = reinas[i1];
    variarMas1(i2,i1+1,t-1)
        si(resul = estaReina.seAtacan(reinas[i2])) goto Salida;
        finVariar
    finVariar
Salida: regresa(resul);
}

principal                                                       // Unidad de programa principal
entero sinSigno tam
      ,nroReinas
      ,estaX
      ,estaY;
vectorDin(Reina) reinas;
iterar
    leer(tam);
    leer(nroReinas);
    salirSi(tam <= 0 O nroReinas <= 0);
    ajusTamanio(reinas,nroReinas);
    paraCada(estaReina,reinas)
        leer(estaX);
        leer(estaY);
        estaReina.poneReinaEn(estaX,estaY);
        finPara
    mostrar << fSi(hayReinasAtacadas(reinas),"SI","NO") << salto;
    finIterar
finPrincipal                                                    // Fin de unidad de programa principal
