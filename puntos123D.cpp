#include <program1.h>
#include "puntos123D.h"

procedimiento P3D::muestra() {
mostrar << "(";
x.muestra();
mostrar << ";";
y.muestra();
mostrar << ";";
z.muestra();
mostrar << ")";
}

procedimiento P2D::muestra() {
mostrar << "(";
x.muestra();
mostrar << ";";
y.muestra();
mostrar << ")\n";
}

procedimiento P3D::lee(cadena mens1,cadena mens2,cadena mens3) {
    x.lee(mens1);
    y.lee(mens2);
    z.lee(mens3);
}

procedimiento P2D::lee(cadena mens1,cadena mens2) {
    x.lee("x:");
    y.lee("y:");
}
procedimiento P1D::lee(cadena mens) {
leerM(x,mens);
}    

procedimiento P1D::muestra() {
    mostrar << x;
}