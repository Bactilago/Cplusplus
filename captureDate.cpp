#include <iostream>
using namespace std;



struct date {
	int day;
	int month;
	int year;
};

date getDate(){
	date askDate;
	cout << "Enter day: " << flush;
	cin >> askDate.day;
	cout << "Enter Month: " << flush;
	cin >> askDate.month;
	cout << "enter Year: " << flush;
	cin >> askDate.year;
	return {askDate.day, askDate.month, askDate.year};
}


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	date fecha1 = getDate();
	date fecha2 = getDate();

	cout << "La fecha inicial es: " << fecha1.day << "/" << fecha1.month << "/" << fecha1.year << endl;
	cout << "La fecha final es: " << fecha2.day << "/" << fecha2.month << "/" << fecha2.year << endl;

	return 0;
}
