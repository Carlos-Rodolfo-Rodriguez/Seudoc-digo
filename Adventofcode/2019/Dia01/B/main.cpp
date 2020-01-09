#include <program1.h>
/**
*    Enunciado: 
*/
principal                                                       // Unidad de programa principal
largo masa,combustible = 0,combustible2 = 0;
iterar
    leer(masa);
    salirSi(cin.eof() O masa ES 0);
    combustible2 = masa / 3 - 2;
//mostrar << combustible << salto;
    combustible += combustible2;
    iterar
        combustible2 = combustible2 / 3 - 2;
        salirSi(combustible2 <= 0);
        combustible += combustible2;
        finIterar
    finIterar
mostrar << combustible << salto;
finPrincipal                                                    // Fin de unidad de programa principal
