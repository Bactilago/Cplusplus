#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  const string password = "Hello"
  string input;
  do {
    cout << "Enter your password" << flush;
    cin >> input;
    if (input != password) {
      cout << "Password Denied" << endl;
    }
  } while(input != password);
  cout << "Password accepted" << endl;

/* 
the same using break instead
const string password = "Hello"
string input;
do {
  cout << "Enter your password" << flush;
  cin >> input;
  if (input == password) {
    break;
  } else {
    cout << "Password Denied" << endl;
  }
} while(true);
cout << "Password accepted" << endl;
*/

  return 0;
}
