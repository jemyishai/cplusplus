#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  float weight, height, bmi;

  cout<<"Please enter weight in pounds: ";
  cin>>weight;
  cout << "\nPlease enter height in inches:  ";
  cin>>height;

 weight *= 0.453592;
 height *= 0.0254;

 bmi = weight / (height*height);

  cout << "\nBMI is: ";
  printf("%.2f",bmi);

  return 0;
}
