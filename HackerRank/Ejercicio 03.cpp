#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: Dados 2 triplas, compararlas.
*/

estructura Triple {
    entero uno;
    entero dos;
    entero tres;
    procedimiento lee() {leer(uno);leer(dos);leer(tres);};
    funcion entera comparaCon(Triple otra) {regresa(fSi(uno>otra.uno,1,0)+fSi(dos>otra.dos,1,0)+fSi(tres>otra.tres,1,0));};
    };
    
principal                                                       // Unidad de programa principal
Triple a,b;
a.lee();
b.lee();
mostrar << a.comparaCon(b);
mostrar << " ";
mostrar << b.comparaCon(a);
mostrar << "\n";
finPrincipal
