#ifndef P3D_H
#define P3D_H
#include <program1.h>
estructura P3D {
privado:
    campo real x;
    campo real y;
    campo real z;
    campo largo sinSigno id;
    campo estatico largo sinSigno cantPtos;
publico:
    P3D();
    P3D(real, real, real);
    P3D(noCambia P3D porRef );
	~P3D();
    procedimiento muestra();
    procedimiento lee();
    funcion P3D operador =(P3D);
    funcion real dist3D(P3D);
    procedimiento estatico leeVec(vectorDin(P3D) porRef);
    procedimiento estatico muestraV(vectorDin(P3D) porRef);
};
#endif
