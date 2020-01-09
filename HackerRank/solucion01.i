int main(int argc, char *argv[]) {
int uno,dos;
system("clear");;
std::cout << "Valor 1:";cin >> uno;
std::cout << "Valor 2:";cin >> dos;
std::cout << uno+dos << endl;
{std::cout << "En pausa. <Escape> para continuar...";while (leeTecla(false) != 27);};
return 0;}
