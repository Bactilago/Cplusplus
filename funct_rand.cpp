// figura 3.8
// Tiro de un dado de seis lados 6000 veces 

#include <iostream>
using std::cout; 
using std::endl;

#include <iomanip>
using std::setw; 

#include <cstdlib> // contiene prototipo de la funcion para rand
int main(int argc, char const *argv[]) {
  int frecuencia1 = 0; 
  int frecuencia2 = 0; 
  int frecuencia3 = 0; 
  int frecuencia4 = 0;
  int frecuencia5 = 0; 
  int frecuencia6 = 0;  
  int cara; // representa tiro del dado

  // ciclo de 6000 veces y resumen de resultados
  for (size_t tiro = 0; tiro <= 6000; tiro++) {
    cara = 1+rand() % 6; // numero aleatorio del 1 al 6
    //determina el valor de la cara del dado e incrementa el contador apropiado
    switch (cara) {
      case 1:
      ++frecuencia1;
      break;
      case 2: 
      ++frecuencia2;
      break;
      case 3:
      ++frecuencia3;
      break;
      case 4:
      ++frecuencia4;
      break;
      case 5: 
      ++frecuencia5;
      break;
      case 6:
      ++frecuencia6;
      break;
      default:
      cout << "La has cagado!!" << endl; 
    } // fin switch
  } // fin for

  // despliega los resultados en for tabular 
cout << "cara" << setw(13) << "Frequencia" 
     << "\n   1" << setw(13) << frecuencia1
     << "\n   2" << setw(13) << frecuencia2
     << "\n   3" << setw(13) << frecuencia3
     << "\n   4" << setw(13) << frecuencia4
     << "\n   5" << setw(13) << frecuencia5
     << "\n   6" << setw(13) << frecuencia6 << endl; 
  
  return 0;
}
