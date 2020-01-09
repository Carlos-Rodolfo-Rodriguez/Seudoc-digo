#include <iostream>
#include <locale>
#include <program1.h>
#include <cstring>
using namespace std;
#undef esLetra
#undef esVocal
//#define esLetra(x) isalpha(x)
// -finput-charset=cp437 -fexec-charset=cp437 -fexec-charset=iso-8859-1
#define esLetra(x)             (wcschr(L"ABCDEFGHIJKLMNÑOPQRSTUVWXYZabcdefghijklmnñopqrstuvwxyzáéíóúüÁÉÍÓÚÜ",x))
#define esVocal(x)             (wcschr(L"AEIOUaeiouáéíóúüÁÉÍÓÚÜ",x))

#define esLetrAncha(x) iswalpha(x)

int main(int argc, char *argv[]) {
	cadena prueba = "áéíóú";
    wchar_t tecla;
    unsigned char tecla2;
//    setlocale(LC_ALL,"spanish"); // locale::global(locale("spanish"));
//    std::locale loc2("es_AR.UTF8");
//    std::cout << "isalpha(, Unicode locale) returned "
//              << std::boolalpha << std::isalpha(c, loc2) << '\n';
//    cout << std::locale("").name();
    system("EXPORT TERM=linux");
    iterar
        leeTecSinEco(tecla);
        tecla2 = tecla;
        salirSi(tecla ES '.');
//        mostrar << wcschr(L"ABCDEFGHIJKLMNÑOPQRSTUVWXYZabcdefghijklmnñopqrstuvwxyzáéíóúüÁÉÍÓÚÜ",tecla) << salto;
//        for(auto x : tecla2) mostrar << x << tabulado;
//        si(esLetra(tecla) O esLetrAncha(tecla)) entonces
//            mostrar << "<- Es letra ";
//            si(esVocal(tecla)) entonces
//                mostrar << "y vocal...";
//                sinoSi(esConso(tecla)) entonces
//                mostrar << "y consonante...";
//                sino
//                mostrar << "y ...";
//                finSi
//            sinoSi(esDigito(tecla)) entonces
//            mostrar << "<- Es dígito...";
//            sinoSi(esSigno(tecla)) entonces
//            mostrar << "<- Es signo...";
//            sino
//            mostrar << "<- Es...";
//            finSi
        finIterar
    mostrar << prueba << salto;
	return 0;
}
