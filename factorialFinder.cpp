#include "stdafx.h"

#include <iostream>
using namespace std;

int factorialFinder(int x) {
	if (x == 1) {
		return 1;
	}
	else {
		//cout << x << endl;
		return x*factorialFinder(x - 1);

	}
}

int main(int argc, char const *argv[]) {
	cout << factorialFinder(5) << endl;
	return 0;
}
