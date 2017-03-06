// getting data from functions // 

#include <iostream>
using namespace std; 

void showMenu() {
  std::cout << "1. Search" << std::endl;
  std::cout << "2. View Record" << std::endl;
  std::cout << "3. Quit" << std::endl;
}

int processSelection() {
  std::cout << "Enter Selection" << std::endl;
  int input
  std::cin >> input;
  return input;
}

int main(int argc, char const *argv[]) {
  showMenu();

  int selection =processSelection();


  switch (selection) {
    case 1:
    std::cout << "Searching......" << std::endl;
    break;
    case 2:
    std::cout << "Viewing......" << std::endl;
    break;
    case 3:
    std::cout << "Quiting......" << std::endl;
    break;
    default: 
    std::cout << "Please select an item from the menu" << std::endl;
  }
  return 0;
}
