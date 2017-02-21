// suma de pares //
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {
  int suma = 0;
  for (int numero = 0; numero < =100; numero +=2) {
    suma += numero; //suma numero a suma
    cout << "La suma es: " << suma << endl;
  }
  return 0;
}
