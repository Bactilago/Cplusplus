//============================================================================
// Name        : 2.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <cmath>
using namespace std;


int obtenerValordeUsuario() {
	cout << "Ingrese un numero entero: " << flush;
	int x;
	cin >> x;
	return x;
}

int menor(int x, int y){
	int menor;
	if(x<y){
		menor = x;
	} else {
		menor = y;
	}
	return menor;
}

int mayor(int x, int y){
	int mayor;
	if(x>y){
		mayor = x;
	} else {
		mayor = y;
	}
	return mayor;
}

void multiplos(int x, int y){
	if(x%y == 0){
			cout <<"El primer numero (" << x << ") es multiplo del segundo (" << y << ")" << endl;
		} if (y%x == 0){
			cout << "El segundo numero ("<< y << ") es multiplo del primero (" << x << ")" << endl;
			} else if(x%y !=0 && y%x !=0 ){
			cout << "Ningun numero es multiplo del otro" << endl;
				}
}


int mcd (int x, int y) {
	int mcd;
	for(int i=1; i<=x && i<=y;i++ ) {
		if(x % i==0 && y % i==0) {
			mcd = i;
		}
	}
	return mcd;
}


int main() {
	int x = obtenerValordeUsuario();
	int y = obtenerValordeUsuario();

	if(x>0 && y>0) {

	// encontrar el menor //
	cout << "El numero menor es: " << menor(x,y) << endl;

	// encontrar el mayor //
	cout << "El numero mayor es: " << mayor(x,y) << endl;

	//funcion multiplo //
	multiplos(x,y);


	// Maximo comun divisor //
	cout << "El maximo comun divisor es: " << mcd(x,y) << endl;

	// suma de ambos //
	cout << "La suma de ambos numeros es: " << x+y << endl;

	// resta del primero menos el segundo //
	int resta= x-y;
	cout << "La resta del primero menos el segundo es: " << resta << endl;

	// valor absoluto resta del primero - segundo //
	cout << "El valor absoluto de la resta del primero menos el segundo: " << abs(resta)  << endl;

	// multiplicacion primero por segundo //
	cout << "multiplicacion del primero por el segundo es: " << x*y << endl;

	// La división entera del primero por el segundo //
	cout << "La división entera del primero por el segundo es: " << x/y << endl;

	// El residuo de la división entera del primero por el segundo //
	cout << "El residuo de la división entera del primero por el segundo es: "  << x % y << endl;




	} else {
		cout << "Digito un valor incorrecto. Favor intente de nuevo" << endl;
	}

	return 0;
}
