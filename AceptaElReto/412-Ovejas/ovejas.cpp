#include <ostream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void conectar(vector<vector<char>> & estaFoto, short fila, short colu) {
estaFoto[fila][colu] = '-';
if(fila > 0 && estaFoto[fila-1][colu] == '.') conectar(estaFoto,fila-1,colu);
if(colu > 0 && estaFoto[fila][colu-1] == '.') conectar(estaFoto,fila,colu-1);
if(fila+1 < (short)estaFoto.size() && estaFoto[fila+1][colu] == '.') conectar(estaFoto,fila+1,colu);
if(colu < (short)estaFoto[fila].size() && estaFoto[fila][colu+1] == '.') conectar(estaFoto,fila,colu+1);
}
void rellenar(vector<vector<char>> unaFoto) {
vector<vector<char>> estaFoto = unaFoto;
conectar(estaFoto,0,0);
bool hayBlanco = false;
for(auto & fila : estaFoto) {
    for(auto & car : fila) {
        hayBlanco = hayBlanco || car == '.';
        }
    }
std::cout << (hayBlanco?"SI":"NO")<< endl;
}
int main(int argc, char *argv[]) {
short ancho,alto;
do {
    cin >> ancho;
    if(feof(stdin)) break;
    cin >> alto;
    vector<vector<char>> foto(alto);
    for(auto & renglon : foto) {
        renglon.resize(ancho);
        std::string reng;
        short posi = 0;
        cin >> reng;
        for(auto & car : renglon) {
            car = reng[posi++];
            }
        }
    rellenar(foto);
    } while (true);
return 0;}
