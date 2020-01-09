#include "Punto.h"

Punto::Punto() {/*x = a; y = b;*/ id = cantPtos++;}

Punto::Punto(constante Punto porRef otroPunto) {id = otroPunto.id;}

Punto::~Punto() {
mostrar << "Destruyendo el punto " << id << salto;
}

entero Punto::cantPtos = 0;