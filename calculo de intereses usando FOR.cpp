/* Calculo de intereses compuesto
 Pagina 98 */

#include <iostream>

using std::cout;
using std::endl;
using std::ios;
using std::fixed;

#include <iomanip>

using std::setw;
using std::setprecision;

#include <cmath>

int main(int argc, char const *argv[]) {
  double monto;
  double principal = 1000.0;
  double tasa = .05;

  //despliega encabezados de columnas de la tabla //
  cout << "Anio" <<  setw(21) << "Monto del deposito" << endl;
  //format float point //
  cout << fixed << setprecision(2);
  //calcula el monto del deposito para cada uno de los anhos
  for (int anio = 1; anio <=10; anio++) {
    //calcula el nuevo monto para el anho especificado
    monto = principal * pow(1.0 + tasa, anio);
    //despliega una fila en la tabla
    cout << setw(4) <<  anio << setw(21) << monto << endl;
  }

  return 0;
}
