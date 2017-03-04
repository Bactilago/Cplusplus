//craps game
// craps.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using std::cout;
using std::endl;

//  contiene los prototipos de las funciones srand y rand
#include <cstdlib>

#include <ctime> // contiene prototipo de la funcion time
int tiraDados(void); // prototipo de la funcion

int main(int argc, char const *argv[]) {
	//enumeracion de constantes que representan el estado del juego
	enum Status { CONTINUA, GANA, PIERDE };
	int suma;
	int miPunto;
	Status estadoJuego; // puede contener CONTINUA, GANA, PIERDE
						//randomiza el generador de numeros aleatorios mediante la hora actual
	srand(time(0));
	suma = tiraDados(); //primer tiro de dados
						//determina el estado del juego y la puntuacion con base en la suma de dados
	switch (suma) {
		// gana en el primer tiro
	case 7:
	case 11:
		estadoJuego = GANA;
		break;
		// pierde en el primer tiro
	case 2:
	case 3:
	case 12:
		estadoJuego = PIERDE;
		break;
		// recuerda puntos
	default:
		estadoJuego = CONTINUA;
		miPunto = suma;
		cout << "La puntuacion es " << miPunto << endl;
		break;
	}

	//mientras el juego no se complete

	while (estadoJuego == CONTINUA) {
		suma = tiraDados(); //tira dados nuevamente
							// determina el estado del juego
		if (suma == miPunto) {
			estadoJuego = GANA;
		}
		else if (suma == 7) {
			estadoJuego = PIERDE;
		}
	}

	// Despliega mensaje de ganador o perdedor
	if (estadoJuego == GANA) {
		cout << "El jugador gana" << endl;
	}
	else {
		cout << "El jugador pierde" << endl;
	}
	return 0;
}

//tira dados, calcula la suma y despliega resultados
int tiraDados(void) {
	int dado1;
	int dado2;
	int sumaTrabajo;

	dado1 = 1 + rand() % 6;
	dado2 = 1 + rand() % 6;
	sumaTrabajo = dado1 + dado2;
	cout << "El jugador tiro " << dado1 << " + " << dado2 << " = " << sumaTrabajo << endl;
	return sumaTrabajo;
}
