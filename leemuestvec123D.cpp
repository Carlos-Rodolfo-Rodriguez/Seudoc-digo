#include <program1.h>
#include "puntos123D.h"
/**
*    Procedimiento de lectura de vectores (o de generación al azar)
*/
//#include "leemuestvec.h"
//plantilla(Tipo)
//procedimiento muestraVec(entero, Tipo v[]);

#ifdef GENERAZAR
estatico largo tiempo = time(NULL);
#ifdef ORDENADO
#define VALORMINIMO     -1000.0
#else
#define VALORMINIMO     -1000.0
#endif
#define VALORMAXIMO     +1000.0
#define alAzarEntreMinMax  decimales(alAzarRealEntre(VALORMINIMO,VALORMAXIMO),2)
#endif

plantilla(Tipo)
procedimiento leerVec3D(entero t, Tipo v[]) {
entero i;                                                       // índice del bucle
#ifdef GENERAZAR
{
//iniciAlAzar;
    mostrar << "Inicializando con "<<tiempo++ << salto;
    srand(time(NULL));
}
#endif
variar(i,0,t-1,1)                                               // Bucle de lectura
#ifdef GENERAZAR
v[i].x.x = (real)alAzarEntreMinMax;
v[i].y.x = (real)alAzarEntreMinMax;
v[i].z.x = (real)alAzarEntreMinMax;
#else
    v[i].lee("x:","y:","z:");                            // Lee el i-ésimo valor (desde 0, pero muestra mensaje desde 1)    
#endif
    finVariar
}

implementa procedimiento leerVec3D(entero,P3D[]);

plantilla(Tipo)
procedimiento muestraVec3D(entero t, Tipo v[]) {
entero i;
variar(i,0,t-1,1)
    v[i].muestra();
    si(esMult(i,4)) entonces
        mostrar << salto;
        sino
        mostrar << tabulado;
        finSi
    finVariar
mostrar << salto;
}

implementa procedimiento muestraVec3D(entero,P3D[]);
