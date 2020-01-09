#include <ostream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const unsigned int T = 100000;
vector<unsigned int> invasores(T),defensores(T);

template <typename Tipo>
 unsigned int posInsBin(vector<Tipo> & v,Tipo vAb) {
unsigned int resul = 0
    ,t = v.size();
if(t > 0) {
    if(v[0] < vAb && vAb < v[t-1]) {
        int i = 0
             ,d = t - 1
             ,m;
        resul = d;
        while (d - i >= 2) {
            m = (i + d) / 2;
            if(v[m] < vAb) {
                i = m;
                resul = d;
                } else if(vAb < v[m]) {
                d = m;
                resul = d;
                } else {
                resul = m;
                i = d;
                }
            }
        } else if(v[0] >= vAb) {
        resul = 0;
        } else if(v[t-1] <= vAb) {
        resul = t;
        }
    } else {
    resul = 0;
    }
return(resul);
}
template unsigned int posInsBin(vector<unsigned int> &,unsigned int);

unsigned int exitos(unsigned int t) {
unsigned int resul = 0,pos,i;
for(i=0;i<t;i++) {
    pos = posInsBin(defensores,invasores[i]);
    if(pos < defensores.size()) {;
        resul++;
        defensores.erase(defensores.begin()+(pos));
        }
    }
return(resul);
}
void leeDefensores( unsigned int t) {
defensores.resize(t);
for(auto & x:defensores) {
    cin >> x;
    }
sort(defensores.begin(),defensores.end());
}
void leeInvasores( unsigned int t) {
unsigned int i;
for(i=0;i<=t-1;i++) {
    cin >> invasores[i];
    }
//invasores.resize(t);
}
int main(int argc, char *argv[]) {
unsigned int N;
//invasores.reserve(T);
//defensores.reserve(T);
do {
    cin >> N;
    if(feof(stdin)) break;
//    defensores.clear();
    leeInvasores(N);
    leeDefensores(N);
    std::cout << exitos( N) << endl;
    } while (true);
return 0;}
