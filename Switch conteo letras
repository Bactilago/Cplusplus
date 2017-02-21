// switch example //
// conteo de letras //
#include <iostream>
using std::cout;
using std::cin;
using std:: endl;

int main(int argc, char const *argv[]) {
  int calificacion;
  int aContador = 0;
  int bContador = 0;
  int cContador = 0;
  int dContador = 0;
  int fContador = 0;
  cout << "Introduzca la calificacion con letra" << endl;
  << "Introduzca el caracter EOF para terminar la entrada de datos" << endl;
  //secuencia //
  while ((calificacion = cin.get()) != EOP) {
    switch (calificacion) {
      case 'A':
      case 'a':
        ++aContador;
        break;
      case 'B':
      case 'b':
        ++bContador;
        break;
      case 'C':
      case 'c':
        ++cContador;
        break;
      case 'D':
      case 'd':
        ++dContador;
        break;
      case 'F':
      case 'f':
        ++fContador;
        break;
      case '\n':
      case '\t':
      case ' ':
        break;
      default:
        cout << "Introdujo una letra incorrecta"
             << "Introduzca una nueva tecla"  << endl;
         break;


    } //fin de switch
  }  // fin de while

  // despliega resumen de resultados
  std::cout << "\n\n Los totales de calificaciones por letra son: "
            << "\nA: " << aContador
            << "\nB: " << bContador
            << "\nC: " << cContador
            << "\nD: " << dContador
            << "\nF  " << fContador << endl;
  return 0;
}
