//Fig 3.3 funcion

#include <iostream>
using namespace std;
int cuadrado(int);


int main(int argc, char const *argv[]) {
  // replite 10 veces y calcula el cuadrado de x
  for (int x = 0; x <= 10; x++) {
    cout << cuadrado(x) << " "; //llamada de la funcion
  cout << endl;
  }
  return 0;
}

//definicion de la funcion cuadrado
int cuadrado(int y) {
  return (y*y)
}
