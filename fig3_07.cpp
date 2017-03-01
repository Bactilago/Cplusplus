// figura 3.7
// simular 20 tiros de dados de seis lados y para desplegar el valor
// de cada tiro. 

#include <iostream>
using std::cout;
using std::endl;

#include <iomanop>
using std::setw;
#include <cstdlib>

int main(int argc, char const *argv[]) {
  // ciclo de 20 repeticiones
  for (size_t contador = 0; contador < 20; contador++) {
    // obtiene un numero aleatorio entre 1 y 6 y lo despliega
    cout << setw(10) << (1 + rand() % 6); 
    // si el contador es divisible entre 5, comienza nueva linea de salida
    if (contador % 5==0) {
      cout << endl;
    }
    
  } // fin for
  
  return 0;
}
