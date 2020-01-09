#include <program1.h>                                           // Archivo de traducción de seudocódigo a C++
/**
*    Enunciado: Given a time in -hour AM/PM format, convert it to military (-hour) time.
                Note: Midnight is 12:00:00AM on a 12 hour clock, and 00:00:00 on a 24-hour clock. 
                Noon is 12:00:00 on a 12-hour clock, and 12:00:00 on a 24-hour clock.

Input Format

A single string containing a time in -hour clock format (i.e.: or ), where and .

Output Format

Convert and print the given time in -hour format, where .

Sample Input

07:05:45PM

Sample Output

19:05:45
*/

funcion cadena tpo24(cadena tAMPM){
cadena resul = tAMPM.substr(2,6)
      ,horas = tAMPM.substr(0,2)
      ,amPm  = tAMPM.substr(8);
si(horas ES "12") entonces
    resul = fSi((amPm ES "AM"),"00","12")+resul;
    sino
    entero h = aEntero(horas)+fSi(amPm ES "PM",12,0);
    h = fSi(h ES 24,0,h);
    resul = aCadena(h,"00")+resul;
    finSi
regresa(resul);
}

principal                                                       // Unidad de programa principal
cadena tpoAMPM;
leer(tpoAMPM);
mostrar << tpo24(tpoAMPM);
pausa;
finPrincipal
