long cuantasVeces(long valABuscar,vector<long> v) {
long resul = 0;
for(auto & ele : v) {
    if(ele == valABuscar) resul++;
    }
return(resul);
}
 bool estaRepetido(long valABuscar,vector<long> v) {
bool resul = v.size() > 0 && cuantasVeces(valABuscar,v) >= 1;
return(resul);
}
int main(int argc, char *argv[]) {
long N;
cin >> N;
vector<long> v(N),v2(0);
for(auto & ele : v) {
    cin >> ele;
    if(estaRepetido(ele,v2)) {
        std::cout << "REDUNDANT" << endl;
        } else {
        std::cout << "ADDED" << endl;
        {auto it = v2.end(); v2.insert(it,(ele));};
        }
    }
return 0;}
