/*Ejercicios de Autoevaluacion

2.1
a) sequencia, seleccion y repeticion
b) if
c) controlada
d) centinela
*/

//2.2 Escriba 4 instrucciones que hagan x+1 //
// x = x+1, x+= 1, ++x, x++,

#include <iostream>

using std::cout;
using std::endl;

int a = 0;
int main(int argc, char const *argv[]) {
	if (a <=5) {
		++a;
		cout << "El resuldado de IF es: "<< a << endl;
	}

	for (int b = 1; b <= 5; ++b) {
		cout << "El resultado de FOR es: " << b << endl;
	}

	int x = 0;
		while (x < 5) {
			++x;
			cout << "El resultado de WHILE es: " << x << endl;
		}

		int y = 0;
		do {
			++y;
			cout << "El resultado de DO WHILE es: " << y << endl;
		} while (y < 5);

		return 0;
}


// 2.3
a)
z= x++ + y

b)
int contador
if (contador > 10) {
  cout << "Contador es mayor que 10" << endl;
}

c)
total -= --x;

d)
q %= divisor
q % divisor = q

// 2.4
int suma, x;
x = 1;
suma = 0;
suma += x;
cout << "La suma es: " << suma << endl;

//2.5

x = 1;
suma = 0;
while (suma <=10) {
  suma += x;
  x++;
}
cout << "La suma es: " << suma << endl;

//2.6
producto *= x++;
producto = 25, x = 6

cociente /= ++x
cociente = 0, x=6

//2.7
std::cin >> x;
std::cin >> y;
int i = 1;
int potencia =1;
potencia *= x;
++i
if (i <= y) {
std::cout << potencia << '\n';
}


//2.12
#include "stdafx.h"
#include <iostream>


using std::cout;
using std::endl;
using std::fixed;
using std::ios;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <cmath>



int main()
{

  //a)
  int suma;
  suma = 0;

  for (int x = 1; x <= 99; x += 2) {
   suma += x;
   cout << suma << endl;
  }

//b)
  double x;
	x = 333.546372;
	cout << fixed <<
		setprecision(1) << setw(15) << x <<
		setprecision(2) << setw(15) << x <<
		setprecision(3) << setw(15) << x << endl;
//c)
	x = 2.5;
	cout << fixed << setprecision(2) << setw(10) << pow(x, 3) << endl;
//d)
	int a;
	a = 1;
	while (a <= 20) {
		cout << a;

		if (a % 5 == 0) {
			cout << endl;
		}
		else {
			cout << '\t';

		}
		a++;
	}


	return 0;
}
