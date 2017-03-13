// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Proy1.h"

using namespace std;

int main() {



	time_t hoy = time(0);
	tm *ltm = localtime(&hoy);



	// Constants //
	const int currYear = 1900 + ltm->tm_year;
	const int currMonth = 1 + ltm->tm_mon;
	const int currDay = ltm->tm_mday;
	const int maxMonth = 12;
	const int future = currYear + 1;
	const int minYear = 2000;
	const int secPerDay = 86400;



	Fechas f1;
	Date fecha1;
	cout << "Digite la fecha inicial de incapacidad en formato DD/MM/YYYY" << endl;
	cout << "Dia: " << flush;
	cin >> fecha1.dia;
	cout << "Mes: " << flush;
	cin >> fecha1.mes;
	cout << "Año: " << flush;
	cin >> fecha1.year;
	cout << fecha1.dia << "/" << fecha1.mes << "/" << fecha1.year << endl;

	// year validation
	fecha1.yearError = 0;
	if ((fecha1.year < minYear) || (fecha1.year > future)) {
		fecha1.yearError = 1;
	}
	cout << "Error de año = " << fecha1.yearError << endl;


	//find Year match
	fecha1.yMatch = 0;
	if (fecha1.year == currYear) {
		fecha1.yMatch = 1;
	}

	cout << "Match de año = "<< fecha1.yMatch << endl;

	fecha1.monthError = 0;
	if ((((fecha1.yMatch == 1) & (fecha1.mes > currMonth)) || (fecha1.mes > maxMonth)) || (fecha1.mes < 1)) {
		fecha1.monthError = 1;
	}

	cout << "Error de mes = " << fecha1.monthError << endl;

	fecha1.monthMatch = 0;
	if (fecha1.mes == currMonth) {
		fecha1.monthMatch = 1;
	}


	//find Bisiesto
	fecha1.yearBisiesto = 0;
	if (fecha1.year % 4 == 0) {
		fecha1.yearBisiesto = 1;
	}


	switch (fecha1.mes) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		fecha1.maxDaysMonth = 31;
		fecha1.maxDaysError = 0;
		break;
	case 2:
		if (fecha1.yearBisiesto == 1) {
			fecha1.maxDaysMonth = 29;
		}
		else {
			fecha1.maxDaysMonth = 28;
		};
		fecha1.maxDaysError = 0;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		fecha1.maxDaysMonth = 30;
		fecha1.maxDaysError = 0;
		break;
	default:
		fecha1.maxDaysError = 1;
		break;
	} // end of switch

	cout << "Error en Maximo de dias = "<< fecha1.maxDaysError << endl;
	cout << "Maximo de dias para el mes elegido es: " << fecha1.maxDaysMonth << endl;



	int yearMonthMatch = 0;
	if (((fecha1.yMatch == 1) & (fecha1.monthMatch == 1))) {
		yearMonthMatch = 1;
	}

	cout << "Match de mes y año = " << yearMonthMatch << endl;

	fecha1.daysMatch = 0;
	if (fecha1.dia == currDay) {
		fecha1.daysMatch = 1;
	}

	cout << "Match de dia = " << fecha1.daysMatch  << endl;

	fecha1.dayError = 0;
	if (
		((((yearMonthMatch == 1) & (fecha1.dia > currDay)) || (fecha1.dia > fecha1.maxDaysMonth )) || (fecha1.dia < 0))
		) {

		fecha1.dayError = 1;
	}

	cout << "Error de dia = " << fecha1.dayError << endl;


	cout << fecha1.dia << "/" << fecha1.mes << "/" << fecha1.year << endl;




}



while (/* condition */) {
	/* code */
}
