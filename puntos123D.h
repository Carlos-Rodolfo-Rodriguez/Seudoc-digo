#ifndef PUNTOS123D_H
#define PUNTOS123D_H
estructura P1D {
    campo real x;
    procedimiento lee(cadena);
    procedimiento muestra();
    };
estructura P2D {
    campo P1D x;
    campo P1D y;
    procedimiento lee(cadena,cadena);
    procedimiento muestra();
    };

estructura P3D {
    campo P1D x;
    campo P1D y;
    campo P1D z;
    procedimiento lee(cadena,cadena,cadena);
    procedimiento muestra();
    };

#endif
