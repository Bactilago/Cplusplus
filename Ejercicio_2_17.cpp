// exercise_2_17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int continuar = 0;
	cout << "Para continuar digite 1" << endl;
	cout << "Para salir digite otro digito" << endl;
	cin >> continuar;
	while (continuar == 1) {
		cout << "Introduzca el numero de cuenta: " << endl;
		int numeroCuenta;
		cin >> numeroCuenta;
		cout << "Introduzca el saldo inicial: " << endl;
		double saldoInicial;
		cin >> saldoInicial;
		cout << "Introduzca el total de cargos: " << endl;
		double totalCargos;
		cin >> totalCargos;
		cout << "Introduzca el total de creditos: " << endl;
		double totalCreditos;
		cin >> totalCreditos;
		cout << "Introduzca el limite de credito: " << endl;
		double limiteCredito;
		cin >> limiteCredito;
		double nuevoSaldo;
		nuevoSaldo = saldoInicial + totalCargos - totalCreditos;
		if (nuevoSaldo>saldoInicial) {
			cout << "Cuenta: " << numeroCuenta << endl;
			cout << "Limite de credito: " << limiteCredito << endl;
			cout << "Nuevo saldo: " << nuevoSaldo << endl;
			cout << "Ha excedido el limite de credito." << '\n' << endl;

		} // end if
		cout << "Para continuar digite 1" << endl;
		cout << "Para salir digite otro digito" << endl;
		cin >> continuar;
	} // end while

	return 0;
}
