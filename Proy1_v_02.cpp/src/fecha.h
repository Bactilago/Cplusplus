/*
 * fecha.h
 *
 *  Created on: Mar 8, 2017
 *      Author: Human Waste
 */

#ifndef FECHA_H_
#define FECHA_H_

#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::flush;


class Fecha {

private:



public:
	int ingresaAnho() {
			cout << "Ingrese anho (YYYY): " << flush;
			int userYear;
			cin >> userYear;
			return userYear;
		} // end enter year


	int validateYear(int userYear, int future, int minYear  ) {
		while ((userYear > future) || (userYear < minYear)) {
			cout << "Numero de anho incorrecto ..." << endl;
			cout << "Ingrese anho (YYYY): " << flush;
			cin >> userYear;
		}
		return userYear;
	} // end year validation


	int findBisiesto(int year) {
				int yearBisiesto=0;
				if (year % 4 == 0) {
				yearBisiesto = 1;
			  } else {
				yearBisiesto = 0;
			  }
				return yearBisiesto;
			} // findBisiesto


	int ingresaMes() {
		cout << "Ingrese el numero de  mes (MM): " << flush;
		int months;
		cin >> months;
		return months;
	} //fin de ingresaMes


	int validateMes(int userYear, int currYear, int months, int currMonth, int maxMonth  ) {
		while (((userYear == currYear) & (months > currMonth)) || (months > maxMonth) ) {
	//int validateMes(int months, int maxMonth  ) {
		//while (months > maxMonth ) {
		  		    cout << "Numero de mes incorrecto..." << endl;
		  		    cout << "Ingrese el numero de  mes (MM): " << flush;
		  		  	cin >> months;
		  		  }
		return months;
	} // end of validate months


	int diasMesValidation(int months, int bisiesto) {
			int diasMes = 0;
			switch (months) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				 diasMes = 31;
				break;
			case 2:
				if (bisiesto == 1) {
					diasMes = 29;
				}
				else {
					diasMes = 28;
				};
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				diasMes = 30;
				break;
			default:
				cout << "Entro Numero de mes Invalido" << endl;
				break;
			} // end of switch
			return diasMes;
		} //  end of diasMesValidation


	int ingresaDia() {
		cout << "Ingrese el numero de dia (DD): " << flush;
		int diaUsuario;
		cin >> diaUsuario;
		return diaUsuario;
	} // end of ingresa dia


	int validateDiasUsuario(int diaUsuario, int diasMes, int userYear, int currYear, int currDay) {
		while ((diaUsuario > diasMes) || ((userYear == currYear) & (diaUsuario > currDay)) ) {
		//while ((diaUsuario > diasMes) || (diaUsuario > currDay) ) {
		//while (diaUsuario > maxDiasMes ) {
					cout << "Numero de dia es incorrecto..." << endl;
					cout << "Ingrese numero de dia (DD): " << flush;
					cin >> diaUsuario;
				  }
		return diaUsuario;
	} // end of validateDiasUsuario

	tm capturaFecha(int year, int month, int day)
	{
	    tm tm = {0};
	    tm.tm_year = year - 1900; // years count from 1900
	    tm.tm_mon = month - 1;    // months count from January=0
	    tm.tm_mday = day;         // days count from 1
	    return tm;
	}
};

#endif /* FECHA_H_ */
