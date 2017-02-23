// ejercicio 2.21

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int contador = 1;
  int mayor = 0;
  while (contador <=10) {
    cout << "Introduzca un numero: " << '\n';
    int numero;
    cin >> numero;
      if (numero > mayor) {
        mayor = numero;
      } else {
        mayor = mayor;
      }
    contador++;
  }
  cout << "El numero mayor digitado es: " <<  mayor <<'\n';
  return 0;
}
