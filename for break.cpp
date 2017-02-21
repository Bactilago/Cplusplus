// break example
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {
  int x; // x se declara aqui para poder utilizarla despues del ciclo
  // repite 10 veceas
  for ( x = 1; x <= 10; x++) {
      // si x=5 termina el cliclo
      if (x ==5) {
        break;
      } //
      cout << x << " "; //despliega x

  } //fin de for
  cout << "\nInterrupcion del ciclo cuando x se volvio " << x << endl;

  return 0;
}
