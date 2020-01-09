#include "P3D.h"

P3D::P3D() {x = 0.f; y = 0.f; z = 0.f; id = ++cantPtos; /*mostrar << "\nConstruyendo ";muestra();*/}
P3D::P3D(real xx, real yy, real zz) {x = xx; y = yy; z = zz; id = ++cantPtos; /*mostrar << "\nConstruyendo ";muestra();*/}
P3D::P3D(noCambia P3D porRef otro) {x = otro.x; y = otro.y; z = otro.z; id = ++cantPtos; /*mostrar << "\nConstruyendo ";muestra();*/}
P3D::~P3D() {/*mostrar << "Destruyendo ";muestra();*/}

largo sinSigno P3D::cantPtos = 0;

procedimiento P3D::lee() {
leer(x);
leer(y);
leer(z);
}

procedimiento P3D::muestra() {mostrar << id << ": ("<< x << ";" << y << ";" << z << ") ";}

procedimiento P3D::leeVec(vectorDin(P3D) porRef v) {
paraCada(p,v)
    p.lee();
    finPara
}

procedimiento P3D::muestraV(vectorDin(P3D) porRef v) {
paraCada(p,v)
    p.muestra();
    mostrar << salto;
    finPara
}

funcion P3D P3D::operador =(P3D origen) {x = origen.x;y = origen.y;z = origen.z; regresa(origen);}

funcion real P3D::dist3D(P3D otro) {regresa(raiz2(cuadrado(x - otro.x)+cuadrado(y - otro.y)+cuadrado(z - otro.z)));}
