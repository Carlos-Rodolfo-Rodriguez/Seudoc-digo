#include <ostream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
template <typename Tipo>
unsigned int posInsBin(vector<Tipo> & v,Tipo vAb) {
    unsigned int resul = 0
        ,t = v.size();
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
return(resul);
}
template unsigned int posInsBin(vector<unsigned int> &,unsigned int);
void mezcla(vector<unsigned int> & v, unsigned int izq, unsigned int med, unsigned int der) {
unsigned int i1 = izq, i2 = med + 1;
vector<unsigned int> aux(der-izq+1);
for(auto & x:aux) {
    x = i1 <= med && (i2 > der || v[i1] < v[i2])?v[i1++]:v[i2++];
    }
i1 = izq;
for(auto x:aux) {
    v[i1++] = x;
    };
}

*/
const unsigned int T = 100000;
static vector<unsigned int> aux(T);

void ordenaID(vector<unsigned int> & v, unsigned int izq, unsigned int der) {
if(izq +1 < der) {
    unsigned int med = (izq + der) / 2;
    ordenaID(v,izq,med);
    ordenaID(v,med+1,der);
    unsigned int i1 = izq, i2 = med + 1;
    //aux.resize(der-izq+1);
    for(unsigned int j = 0; j <= (der-izq);j++) {
        aux[j] = i1 <= med && (i2 > der || v[i1] < v[i2])?v[i1++]:v[i2++];
    }
    i1 = izq;
    for(unsigned int j = 0; j <= (der-izq);j++) {
        v[i1++] = aux[j];
    };
    
    } else if(izq + 1 == der && v[der] < v[izq]) swap(v[izq],v[der]);
}

unsigned int exitos(vector<unsigned int> & inv, vector<unsigned int> & def) {
unsigned int resul = 0, pos,t = def.size(),vAb;
ordenaID(def,0,t-1);
//for(auto x:def) cout << x << " ";
for(unsigned int ind = 0; ind < t;ind++) {
    vAb = inv[ind];
    pos = 0;
    if(def[0] < vAb && vAb < def[t-1]) {
        int i = 0
            ,d = t - 1
            ,m;
        pos = d;
        while (d - i >= 2) {
            m = (i + d) / 2;
            if(def[m] < vAb) {
                i = m;
                pos = d;
            } else if(vAb < def[m]) {
                d = m;
                pos = d;
            } else {
                pos = m;
                i = d;
            }
        }
    } else if(def[0] >= vAb) {
        pos = 0;
    } else if(def[t-1] <= vAb) {
        pos = t;
    }
    if(pos < def.size() ) {
        resul++;
        def.erase(def.begin()+(pos));
        }
    }
return(resul);
}
int main(int argc, char *argv[]) {
vector<unsigned int> invasores(T),defensores(T);
invasores.reserve(T);
defensores.reserve(T);
unsigned int N;
do {
    cin >> N;
    if(feof(stdin)) break;
    invasores.resize(N);
    defensores.resize(N);
    for(auto & inv:invasores) cin >> inv;
    for(auto & def:defensores) cin >> def;
    std::cout << exitos(invasores,defensores) << endl;
} while (true);
return 0;
}
