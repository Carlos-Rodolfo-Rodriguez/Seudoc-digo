#ifndef GRILLA2DPLUS_H
#define GRILLA2DPLUS_H
#include "Grilla2D.h"

estructura Grilla2DPlus /*: publico Grilla2D*/ {
privado: 
    campo Grilla2D filCol;
    campo sinSigno pasosMin;
publico:
	Grilla2DPlus();
	Grilla2DPlus(Grilla2D);
//	Grilla2DPlus(const Grilla2D &arg);
//	~Grilla2DPlus();
    funcion logica operador ES(Grilla2DPlus);
    funcion logica operador NOES(Grilla2DPlus);
    funcion vectorDin(Grilla2DPlus) operador =(vectorDin(Grilla2D));
    procedimiento estatico descuentaCiclos(vectorDin(Grilla2DPlus) v);
    funcion estatica sinSigno menosPasos(vectorDin(Grilla2D)
                                        ,vectorDin(Grilla2D)
                                        ,vectorDin(Grilla2D));
};

#endif

