// fig 3.9
// randomizacion del programa de dados 
#include <iostream>
using std::cout; 
using std::endl;
using std::cin;

#include <iomanip>
using std::setw; 

// contiene prototipos para las funciones srand y rand
#include <cstdlib>

// la funcion main inicia la ejecucion del programa 
int main(int argc, char const *argv[]) {
  unsigned semilla; 
  cout << "Introduzca semilla: "; 
  cin >> semilla; 
  srand (semilla); // establece la semilla para el generador de num aleatorios

  //ciclo de 10 repeticiones
  for (size_t contador = 1; contador <= 10; contador++) {
    // escoge un numero aleatorio y lo despliega
    cout << setw(10) << (1+rand() % 6); 
    // si el contador es divisible entre 5 comienza una nueva linea de salida
    if (contador % 5 ==0) {
      cout << endl; 
    }
  }
  return 0;
}
