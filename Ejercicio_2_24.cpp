// Ejercicio 2.24
// ver que hace este programa

##include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int contador = 1;
  while (contador<= 10) {
    std::cout << (contador % 2? "****": "++++++++") << endl;
    contador++;
  }
  return 0;
}
