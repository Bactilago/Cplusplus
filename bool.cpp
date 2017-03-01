
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int value1 = 8;
  int value2 = 20;

  bool condition1 = (value1 > 0 && value2 == 100);
  bool condition2 = (value1 < 10 && value2 ==20);
  cout << condition1 << endl;
  cout << condition2 << endl;
  if (condition1 && condition2) {
    cout << "Condition1 is true" << endl;
  } else {
	  cout << "Condition is false" << endl;
  }
  return 0;
}
