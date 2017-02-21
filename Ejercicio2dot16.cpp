//Ejercicio Autoevaluacion 2.16
//Pagina 145
#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {

	double lt = 0;
	cout << "Introduzca los litros utilizados (valor 0 entrega resultados)" << endl;
	cin >> lt;
	double km =0;
	double sumaKm =km;
	double sumaLt = lt;


	while (lt != 0) {

		cout << "Introduzca los kilometros recorridos" << endl;
		cin >> km;
		double promedio;
		promedio = km / lt;
		cout << "Los kilometros por litro para este tanque fueron: " << promedio << '\n' << endl;
		cout << "Introduzca los litros utilizados (valor 0 entrega resultados)"  << endl;
		cin >> lt;
		sumaLt += lt;
		sumaKm += km;
	} // fin de while

	cout << "Suma de KM = " << sumaKm << endl;
	cout << "Suma de Lt = " << sumaLt << endl;
 	cout << "el promedio total de KM/LT es: " << sumaKm / sumaLt << '\n' << endl;
	return 0;
}
