/*
* Proy1.h
*
*  Created on: Mar 9, 2017
*      Author: Human Waste
*/

#ifndef PROY1_H_
#define PROY1_H_
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::flush;


struct Date {
	int dia;
	int mes;
	int year;
	int yearBisiesto;
	int yMatch;
	int yearError;
	int monthError;
	int maxDaysMonth;
	int monthMatch;
	int maxDaysError;
	int daysMatch;
	int dayError;

};

class Fechas {

public:
	time_t hoy = time(0);
	tm *ltm = localtime(&hoy);



};




#endif /* PROY1_H_ */
