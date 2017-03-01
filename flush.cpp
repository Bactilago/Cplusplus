//============================================================================
// Name        : test2.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
# include <limits>
# include <iomanip>

using namespace std;

int main() {

	cout << "Enter your fucking name: " << flush;
	string input;
	cin >> input;
	cout << "Your entered: " << input << endl;
	float decimal = 15.458;
	cout << decimal << endl;
	cout << fixed << decimal << endl;
	cout << setprecision(20) << fixed << decimal << endl;
	double dvalue = 15.452;
	cout << setprecision(20) << fixed << dvalue << endl;
	cout << setprecision(5) << fixed << dvalue << endl;

	bool bValue = true;
	bool fValue = false;
	cout << bValue << endl;
	cout << fValue << endl;

	//char cValue =  55; will find the position 55 in the ASCII table

	char cValue = 'H';
	cout << int(cValue) << endl;
	cout << (cValue) << endl;
	return 0;
}
