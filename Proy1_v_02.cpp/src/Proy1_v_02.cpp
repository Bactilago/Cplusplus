//============================================================================
// Name        : cpp.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "fecha.h"
using namespace std;

int main() {
	time_t hoy =  time(0);
	tm *ltm = localtime(&hoy);
	const int currYear = 1900 + ltm->tm_year;
	const int currMonth = 1 + ltm->tm_mon;
	const int currDay = ltm->tm_mday;
	const int maxMonth = 12;
	const int future = currYear +1;
	const int minYear = 2000;
	const int secPerDay = 86400;

	Fecha f1; //fecha 1
	//int year1= f1.ingresaAnho();

	int year1= f1.validateYear(f1.ingresaAnho(),future,minYear );
	int mes1 = f1.validateMes(year1, currYear, f1.ingresaMes(), currMonth, maxMonth);
	int diasMaxMes1 = f1.diasMesValidation(mes1,f1.findBisiesto(year1));
	int dia1= f1.validateDiasUsuario(f1.ingresaDia(),diasMaxMes1, year1, currYear, currDay );
	cout << "Fecha Inicial DD/MM/YYYY: " << dia1 << "/" << mes1 << "/" << year1 << endl;

	//obtiene la fecha en segundos usando ctime
	tm fInicial = f1.capturaFecha(year1,mes1,dia1);
	time_t fechaInicial = mktime(&fInicial);
	cout << fechaInicial << endl;

	Fecha f2; //fecha 2
	//int year1= f1.ingresaAnho();

	int year2= f2.validateYear(f2.ingresaAnho(),future,minYear );
	int mes2 = f2.validateMes(year2, currYear, f2.ingresaMes(), currMonth, maxMonth);
	int diasMaxMes2 = f2.diasMesValidation(mes2,f2.findBisiesto(year2));
	int dia2= f2.validateDiasUsuario(f2.ingresaDia(),diasMaxMes2, year2, currYear, currDay );
	cout << "Fecha Inicial DD/MM/YYYY: " << dia2 << "/" << mes2 << "/" << year2 << endl;

	//obtiene la fecha en segundos usando ctime
	tm fFinal = f2.capturaFecha(year2,mes2,dia2);
	time_t fechaFinal = mktime(&fFinal);
	cout << fechaFinal << endl;

	time_t diff=(fechaFinal-fechaInicial)/secPerDay;
	cout << diff << endl;
	return 0;
}
