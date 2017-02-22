//Ejercicio 2.18

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int continuar = 1;
  while (continuar == 1) {
    double salarioBase=200;
    double comision=0.09;
    cout << "Introduzca las ventas en Dolares: " << '\n';
    double ventas;
    cin >> ventas;
    double salarioTotal;
    salarioTotal = salarioBase + (ventas * comision);
    cout << "El salario Total es de: " <<  salarioTotal << '\n';
    cout << "Si desea continuar digite 1, de lo contario digite 0" << '\n';
    cin >> continuar;
  }
  return 0;
}
