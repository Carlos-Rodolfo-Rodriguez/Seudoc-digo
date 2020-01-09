#include <math.h>
#include <vector>
#include <stdio.h>
#include <iostream> 
using namespace std;
 int cantDigitos(int n) {
int resul = 1;
if(n > 10) resul = 1 + cantDigitos(n/10);
return(resul);
}
 int ultimoDigito(int n) {
int resul = n - n / 10 * 10;
return(resul);
}
 int deReves(int n) {
int resul = n;
if(resul >= 10) resul = ultimoDigito(resul) * pow(10,cantDigitos(n)-1)+deReves(resul/10);
return(resul);
}
 int descendente(int n) {
int resul = 0,i,aux = n;
vector<int> digitos {0,0,0,0};
for(i=0;i<=3;i++) {
    digitos[i] = ultimoDigito(aux);
    aux /= 10;
    }
bool estaOrd;
do {
    estaOrd = true;
    for(i=1;i<=3;i++) {
        if(digitos[i] > digitos[i-1]) {
            swap(digitos[i],digitos[i-1]);
            estaOrd = false;
            }
        }
    } while (! (estaOrd));;
for(auto & digito : digitos) {
    resul = resul * 10 + digito;
    }
return(resul);
}
 int vueltasKaprekar(int nro) {
int resul = 0
      ,aux = nro
      ,desc,asce;
while (aux != 6174 && resul < 8) {
    desc = descendente(aux);
    asce = deReves(desc);
    aux = abs(desc-asce);
    while (aux > 0 && aux < 1000) {
        aux *= 10;
        }
    resul++;
    }
return(resul);
}
int main(int argc, char *argv[]) {
int nCasos,n,nro;
cin >> nCasos;
for(n=1;n<=nCasos;n++) {
    cin >> nro;
    std::cout << vueltasKaprekar(nro) << endl;
    }
return 0;}
