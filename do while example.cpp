// do while example
#include <iostream>

using std::cout;
using std::endl;
int main(int argc, char const *argv[]) {
  int contador = 1;
  do {
    cout << contador << " "; // despliega contador

  } while(++contador <= 10);
  cout << endl;

  return 0;
}
