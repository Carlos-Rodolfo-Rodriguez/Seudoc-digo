#include "P2D.h"
largo sinSigno P2D::cant = 0;

P2D::P2D() {
x = 0.f;
y = 0.f;
id = ++cant;
}

P2D::P2D(real estaX,real estaY) {
x = estaX; 
y = estaY; 
id = ++cant;
}

P2D::P2D(noCambia P2D porRef otro) {
x = otro.x; 
y = otro.y; 
id = ++cant;
}

P2D::~P2D() {
//mostrar << "Destruyendo " << id << salto;
si(id ES cant) cant--;
}

funcion logica P2D::esOrigen() {regresa(x ES 0.f Y y ES 0.f);}

funcion P2D P2D::operador = (P2D otro) {
x = otro.x; 
y = otro.y;
regresa(deRef esto);
}

procedimiento P2D::muestra() {
mostrar << /*id <<*/ "(" << x << ";"<< y <<") ";
}

procedimiento P2D::muestra(logico salta) {
muestra();
si(salta) mostrar << salto;
}

funcion real P2D::dist2D(P2D otro) {
regresa(raiz2(cuadrado(x-otro.x)+cuadrado(y-otro.y)));
}

funcion real P2D::coordX() {regresa(x);}
funcion real P2D::coordY() {regresa(y);}
funcion largo sinSigno P2D::identif() {regresa(id);}
procedimiento P2D::poneId(largo sinSigno nvaId) {id = nvaId;}

funcion corto sinSigno P2D::cuadrante() {
corto sinSigno resul;
si(x >= 0 Y y >= 0) entonces
    resul = 1;
    sinoSi(x <= 0 Y y >= 0) entonces
    resul = 2;
    sinoSi(x <= 0 Y y <= 0) entonces
    resul = 3;
    sino
    resul = 4;
    finSi
regresa(resul);
}

procedimiento P2D::lee() {
leer(x);
leer(y);
}

procedimiento P2D::leeM() {
leerM(x,"X:");
leerM(y,"Y:");
}

procedimiento P2D::leeVec(vectorDin(P2D) porRef v) {
paraCada(ele,v)
    ele.lee();
    finPara
}

procedimiento P2D::muestraV(noCambia vectorDin(P2D) porRef v) {
mostrar << "Coordenadas cartesianas:" << salto;
paraCadaValor(ele,v);
    ele.muestra(VERDADERO);
    finPara
}

P2DPolares::P2DPolares() : P2D(0.f,0.f) {dist = 0.f;angulo = 0.f;}

P2DPolares::P2DPolares(real ro, real ti) : P2D(ro * cosenoGrados(ti),ro * senoGrados(ti)) {
dist = ro;angulo = ti;}

P2DPolares::P2DPolares(noCambia P2DPolares porRef otro) : P2D(otro.dist * cosenoGrados(otro.angulo)
                                                             ,otro.dist * senoGrados(otro.angulo)) {
dist = otro.dist;angulo = otro.angulo;}

procedimiento P2DPolares::muestra(logico salta) {muestra(); si(salta) mostrar << salto;}

procedimiento P2DPolares::muestra() {
mostrar << /*identif() << */"(" << dist << ";"<< angulo <<"°) ";
}

procedimiento P2DPolares::muestraTodo() {
mostrar << identif() << "(" << dist << ";"<< angulo <<"°) ->";
P2D::muestra();
}

procedimiento P2DPolares::lee() {
real estaDist,esteAng;
leer(estaDist);
leer(esteAng);
* this = P2DPolares(estaDist,esteAng);
}

procedimiento P2DPolares::leeM() {
real estaDist,esteAng;
leerM(estaDist,"Distancia:");
leerM(esteAng,"Ángulo:");
* this = P2DPolares(estaDist,esteAng);
}

procedimiento P2DPolares::leeVec(vectorDin(P2DPolares) porRef v) {
paraCada(ele,v)
    ele.lee();
    finPara
}

procedimiento P2DPolares::muestraV(noCambia vectorDin(P2DPolares) porRef v) {
paraCadaValor(ele,v);
    ele.muestraTodo();
    mostrar << salto;
    finPara
}
