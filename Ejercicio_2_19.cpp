// ejercicio 2.19

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int continuar = 1;
		while (continuar == 1) {
			cout << "Introduzca la horas trabajadas: " << '\n';
			double horasTrabajadas;
			cin >> horasTrabajadas;
			cout << "Introduzca la tarifa por hora" << '\n';
			double tarifaHora;
			cin >> tarifaHora;
			if (horasTrabajadas > 40) {
				double horasExtra;
				horasExtra = horasTrabajadas - 40;
				double salarioExtra;
				salarioExtra = (horasExtra*tarifaHora)*1.5;
				double salario;
				salario = tarifaHora * 40;
				double salarioTotal;
				salarioTotal = salario + salarioExtra;
				cout << "El salario es de: " << salarioTotal << '\n';
			} // fin de if
			else {
				double salario = tarifaHora * horasTrabajadas;
				cout << "El salario es de: " << salario << '\n';
			} // fin de else
			cout << "Para agregar un nuevo salario digite 1, para salir digite 0" << '\n';
			cin >> continuar;
		} // fin de while

return 0;
}
