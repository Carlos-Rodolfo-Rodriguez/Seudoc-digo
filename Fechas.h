#ifndef FECHAS_H
#define FECHAS_H
estructura Fecha {
privado:
    campo entero anio;
    campo entero mes;
    campo entero dia;
publico:
    funcion cadena cadFecha() {regresa(aCadena(dia) + "/" + aCadena(mes) + "/" + aCadena(anio));};
    procedimiento leeFecha();
    funcion logico esFechaValida();
    funcion logico operador >(Fecha);
    funcion logico operador <(Fecha);
    funcion logico operador <=(Fecha);
    funcion logico operador >=(Fecha);
    funcion logico operador ES(Fecha);
    funcion logico operador NOES(Fecha);
    procedimiento operador =(Fecha);
    procedimiento leeCualquierFecha();
    funcion estatica Fecha aFecha(entero,entero,entero);
    funcion cadena cadDiaSem();
    Fecha();
    Fecha(noCambia Fecha porRef);
    };

funcion logico esBisiesto(entero);
funcion entero cantDias(entero mes, entero anio);
#endif
