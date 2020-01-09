struct Triple {
    int uno;
    int dos;
    int tres;
    void lee() {cin >>(uno);cin >>(dos);cin >>(tres);};
    int comparaCon(Triple otra) {return((uno>otra.uno?1:0)+(dos>otra.dos?1:0)+(uno>otra.uno?1:0)+(tres>otra.tres?1:0));};
    };
int main(int argc, char *argv[]) {
Triple a,b;
a.lee();
b.lee();
std::cout << a.comparaCon(b);
std::cout << " ";
std::cout << b.comparaCon(a);
std::cout << "\n";
return 0;}
