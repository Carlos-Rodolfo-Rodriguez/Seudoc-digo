#include <program1.h>
funcion entero cantDecimales(entero n) {
entero resul;
si(n >= 10) entonces
    resul = 1 + cantDecimales(n / 10);
    sinoSi(n < 0) entonces
    resul = cantDecimales(-n);
    sino
    resul = 1;
    finSi
regresa(resul);
}
