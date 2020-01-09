#include <vector>
#include <iostream>
using namespace std;
struct Reina {
private:
    int unsigned x;
    int unsigned y;
public:
    Reina() {};
    Reina(const Reina & otra) {x = otra.x; y = otra.y;};
    Reina(int unsigned xIni,int unsigned yIni) { x = xIni; y = yIni;}
    void poneReinaEn(int unsigned xIni,int unsigned yIni) { x = xIni; y = yIni;}
    bool seAtacan(Reina);
    };
 bool Reina::seAtacan(Reina otra) {
bool resul = (x == otra.x) ||
               (y == otra.y) ||
               ((x + y) == (otra.x + otra.y)) ||
               ((x - y) == (otra.x - otra.y));
return(resul);
}
 bool hayReinasAtacadas(vector<Reina> & reinas) {
bool resul = false;
int unsigned t = reinas.size(),i1,i2;
Reina estaReina;
for(i1=0;i1<t-1;i1++) {
    estaReina = reinas[i1];
    for(i2=i1+1;i2<t;i2++) {
        if((resul = estaReina.seAtacan(reinas[i2]))) goto Salida;
        }
    }
Salida: return(resul);
}
int main(int argc, char *argv[]) {
int unsigned tam
      ,nroReinas
      ,estaX
      ,estaY;
vector<Reina> reinas;
do {
    cin >> tam;
    cin >> nroReinas;
    if(tam <= 0 || nroReinas <= 0) break;
    reinas.resize(nroReinas);
    for(auto & estaReina : reinas) {
        cin >> estaX;
        cin >> estaY;
        estaReina.poneReinaEn(estaX,estaY);
        }
    std::cout << (hayReinasAtacadas(reinas)?"SI":"NO") << endl;
    } while (true);
return 0;}
