# include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::flush;


	tm capturaFecha(int year, int month, int day)
{
    tm tm = {0};
    tm.tm_year = year - 1900; // years count from 1900
    tm.tm_mon = month - 1;    // months count from January=0
    tm.tm_mday = day;         // days count from 1
    return tm;
}

	int ingresaAnho() {
		cout << "Ingrese anho (YYYY): " << flush;
		int userYear;
		cin >> userYear;
		return userYear;
	}


	int validateYear(int userYear, int future  ) {
		while (userYear > future ) {
			cout << "Numero de anho incorrecto ..." << endl;
			cout << "Ingrese anho (YYYY): " << flush;
			cin >> userYear;
		}
		return userYear;
	}


	int findBisiesto(int year) {
			int yearBisiesto=0;
			if (year % 4 == 0) {
			yearBisiesto = 1;
		  } else {
			yearBisiesto = 0;
		  }
			return yearBisiesto;
		}

	int ingresaMes() {
		cout << "Ingrese el numero de  mes (MM): " << flush;
		int months;
		cin >> months;
		return months;
	}

	int validateMes(int months, int maxMonth  ) {
		while (months > maxMonth ) {
		  		    cout << "Numero de mes incorrecto..." << endl;
		  		    cout << "Ingrese el numero de  mes (MM): " << flush;
		  		  	cin >> months;
		  		  }
		return months;
	}


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
	}


	int ingresaDia() {
		cout << "Ingrese el numero de dia (DD): " << flush;
		int diaUsuario;
		cin >> diaUsuario;
		return diaUsuario;
	}


	int validateDiasUsuario(int diaUsuario, int maxDiasMes) {
		while (diaUsuario > maxDiasMes ) {
					cout << "Numero de dia es incorrecto..." << endl;
					cout << "Ingrese numero de dia (DD): " << flush;
					cin >> diaUsuario;
				  }
		return diaUsuario;
	}


int main()
{

	time_t hoy =  time(0);
	tm *ltm = localtime(&hoy);
	const int currYear = 1900 + ltm->tm_year;
	const int maxMonth = 12;
	const int future = currYear +1;

	cout << "Primero ingrese fecha de inicio incapacidad (día – mes –año): " << endl;

	int userYear = ingresaAnho();

	int year = validateYear(userYear, future);
	//cout << year << endl;

	int bisiesto = findBisiesto(year);
	//cout << bisiesto << endl;

	int mesUsuario = ingresaMes();
	int mes = validateMes(mesUsuario, maxMonth);
	//cout << mes << endl;

	int maxDiasMes = diasMesValidation(mes, bisiesto);
	//cout << maxDiasMes << endl;

	int diaUsuario = ingresaDia();

	int dia = validateDiasUsuario( diaUsuario, maxDiasMes);
	//cout << dia << endl;

	cout << "Fecha inicial: "<< dia << "/" << mes << "/" <<  year << endl;
	return 0;
}
    
