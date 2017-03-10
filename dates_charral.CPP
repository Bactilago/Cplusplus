# include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::flush;

int main()
{

	time_t hoy =  time(0);
	tm *ltm = localtime(&hoy);
	const int currYear = 1900 + ltm->tm_year;
	const int maxMonth = 12;
	const int future = currYear +1;

	cout << "Primero ingrese fecha de inicio incapacidad (día – mes –año): " << endl;

	//bool yearBisiesto;
	cout << "Ingrese anho (YYYY): " << flush;
	int userYear;
	cin >> userYear;
	int yearBisiesto=0;
	//cout << "Year before if loop: " << yearBisiesto << endl;


	  while (userYear > future ) {
	    cout << "Numero de anho incorrecto ..." << endl;
	    cout << "Ingrese anho (YYYY): " << flush;
	  	cin >> userYear;
	  }
	  //cout << "Anho: " << userYear << endl;


	  if (userYear % 4 == 0) {
		yearBisiesto = 1;
	  } else {
		yearBisiesto = 0;
	  }
	  //cout << "Year Bisiesto = " << yearBisiesto << endl;




    cout << "Ingrese numero de mes (MM): " << flush;
  	int months;
  	cin >> months;

  	while (months > maxMonth ) {
  		    cout << "Numero de mes incorrecto..." << endl;
  		    cout << "Ingrese numero de mes (MM): " << flush;
  		  	cin >> months;
  		  }
  		  //cout << "Mes: " << months << endl;


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
    		if (yearBisiesto == true) {
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


    	//cout << "El Mes: " << months << " del anho " << userYear << " tiene " <<
    			//diasMes << " dias " << endl;



	cout << "Digite el numero de dia (DD): " << flush;
	int userDays;
	cin >> userDays;

	while (userDays > diasMes ) {
			cout << "Numero de dia es incorrecto..." << endl;
			cout << "Ingrese numero de dia (DD): " << flush;
			cin >> userDays;
		  }
		  //cout << "Dia: " << userDays << endl;

	cout << "Fecha inicial: "<< userDays << "/" << months << "/" <<  userYear << endl;



		  /*cout << "dia:" << days << " mes:" << months << " Year:" << years << endl;

	int sec = 1;
	int min = sec * 60;
	int hour = 60 * min;
	int day = hour * 24;


	cout << day << endl;*/


  return 0;
}


int ingresaAnho() {
	cout << "Ingrese anho (YYYY): " << flush;
	int userYear;
	cin >> userYear;
	return userYear;
}
