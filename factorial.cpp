#include <iostream>
using namespace std;

int fac(int num){
  if (num==1){
    return 1;
  } else{
    return fac(num-1) * num;
  }
}

int main() {
  int input1, output;

  cout<<"Please enter a number: ";
  cin>>input1;

  output = fac(input1);

  cout << "Factorial of " << input1  << " is "<< output << endl;

  return 0;
}
