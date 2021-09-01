#include <iostream>

int main() {
  double input;
  double fib, fib1, placeholder;
  std::cout << "Please enter a positive integer greater than 1: ";
  std::cin >> input;

  fib = 0;
  fib1 = 1;
  placeholder = 1;

  for (int i = 1; i<=input;i++){
    std::cout<< placeholder <<"\n";
    placeholder = fib1 + fib;
    fib = fib1;
    fib1 = placeholder;
  }
return 0;
}
