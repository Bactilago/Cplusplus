#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main() {

	cout <<  "---- Print array values ---- " << endl;

	int human[5];

	cout << "Element   ----  Value" << endl;
		for(int x=0; x<5; x++){

			human[x]=15;
			cout << x << "                " << human[x] <<  endl;
		}


	cout <<  "---- sum of array elements ---- " << endl;

	int box[5] = {20, 24, 15, 33, 23};
	int sum= 0;
	for(int x=0; x<5; x++){
		sum +=box[x];
		cout << sum << endl;
	}


	cout <<  "---- Pass arrays to functions ---- " << endl;

	int x[5]={1,2,3,4,5};
	int y[3]={6,7,8};
	printArray(x,5);
	printArray(y,3);


	cout << "-----Print multidimensional arrays----" << endl;

	int table[2][3] = {{5,6,7},{9,8,7}};
	for (int row = 0; row < 2; row++) {
		for (int column = 0; column < 3; column++) {
			cout << table[row],[column] << " ";
		}
		endl;
	}



	return 0; // end of main
}

// function to print arrays
void printArray(int theArray[], int sizeOfArray){
	for(int x=0; x<sizeOfArray; x++){
		cout << theArray[x] << endl;
	}
}
