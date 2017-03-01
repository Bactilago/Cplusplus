// funcion mayor de tres numeros
#include <iostream>
using namespace std;

double mayor(double, double, double); // prototipo de la funcion

//definicion de funcion mayor
double mayor(double x, double y, double z) {
	double may = x;

	if (y > may) {
		may = y;
	}
	if (z > may) {
		may = z;
	}

	return may;
}

// main function

int main(int argc, char const *argv[]) {
	double num1, num2, num3;
	std::cout << "Introduzca tres numeros de punto flotante: " << '\n';
	std::cin >> num1 >> num2 >> num3;
	std::cout << "El mayor es: " <<
		mayor(num1, num2, num3) << endl;

	return 0;
}
