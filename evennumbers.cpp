#include <iostream>

int main() {
  int input;
  std::cout << "Please enter a positive integer: ";
  std::cin >> input;

  for (int i = 2; i<=input*2;i+=2){
    std::cout<< i <<"\n";
  }

  return 0;
}
