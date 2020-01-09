#include <program1.h>
#include "Fechas.h"
#include "leeVar.h"

funcion cadena Fecha::cadDiaSem() {
entero esteDia = dia;
entero esteMes = mes;
entero esteAnio = anio;
entero diaSem;
si(esteMes <= 2) entonces
    esteMes += 12;
    esteAnio--;
    sino
    esteMes -= 2;
    finSi

assert(0 <= diaSem Y diaSem < 7);
cadena resul [] = {"Domingo","Lunes","Martes","MiÃ©rcoles","Jueves","Viernes","SÃ¡bado"};
regresa(resul[diaSem]);
}

funcion logico Fecha::operador ES(Fecha otraFecha) {
logico resul = (anio ES otraFecha.anio) Y
               (mes  ES otraFecha.mes) Y
               (dia  ES otraFecha.dia);
regresa(resul);
}

funcion logico Fecha::operador NOES(Fecha otraFecha) {
logico resul = NO (deRef this ES otraFecha);
regresa(resul);
}

funcion logico Fecha::operador <(Fecha otraFecha) {
logico resul = NO (deRef this > otraFecha) Y (deRef this NOES otraFecha);
regresa(resul);
}

funcion logico Fecha::operador >(Fecha otraFecha) {
logico resul =  (anio > otraFecha.anio) O
               ((anio ES otraFecha.anio Y mes > otraFecha.mes) O
                (mes ES otraFecha.mes Y dia > otraFecha.dia) )
;
regresa(resul);
}
procedimiento Fecha::operador =(Fecha otraFecha) {
si(otraFecha.esFechaValida()) entonces
    anio = otraFecha.anio;
    mes = otraFecha.mes;
    dia = otraFecha.dia;
    finSi
}

Fecha::Fecha() {
mostrar << "Creando fecha no inicializada: " << cadFecha() << salto;
}

Fecha::Fecha(noCambia Fecha porRef fechaInicial) {
Fecha fIni;
fIni.anio = fechaInicial.anio;
fIni.mes = fechaInicial.mes;
fIni.dia = fechaInicial.dia;
si(fIni.esFechaValida()) entonces
    anio = fIni.anio;
    mes = fIni.mes;
    dia = fIni.dia;
    finSi
mostrar << "Creando fecha " << cadFecha() << salto;
}

funcion logico Fecha::esFechaValida() {
logico resul = (mes >= 1 Y mes <= 12) Y
               (dia >= 1 Y dia <= cantDias(mes,anio));
regresa(resul);
}

procedimiento Fecha::leeFecha() {
leerM(anio,"Año:");
leeVar(mes,1,12,"Mes:");
leeVar(dia,1,cantDias(mes,anio),"Día:");
}

procedimiento Fecha::leeCualquierFecha() {
leerM(anio,"Año:");
leerM(mes,"Mes:");
leerM(dia,"Día:");
}

funcion Fecha Fecha::aFecha(entero a,entero m,entero d) {
Fecha resul;
resul.anio = a;
resul.mes = m;
resul.dia = d;
si(NO resul.esFechaValida()) entonces
    mostrar << resul.cadFecha() << " es inválida.\n";
    finSi
regresa(resul);
}

funcion entero cantDias(entero m, entero a) {
entero resul;
segun(m)
    caso 1 : caso 3 : caso 5 : caso 7 : caso 8 : caso 10 : caso 12 : resul = 31;
    otroCaso 4 : caso 6 : caso 9 : caso 11 : resul = 30;
    otroCaso 2 : resul = fSi(esBisiesto(a),29,28);
    finSegun
regresa(resul);
}

funcion logico esBisiesto(entero a) {
logico resul = (esMult(a,4) Y NO esMult(a,100) O esMult(a,400));
regresa(resul);
}