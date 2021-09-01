#include <iostream>
using namespace std;

int main() {
  float weight, height, bmi;

  cout<<"Please enter weight in kilograms: ";
  cin>>weight;
  cout << "\nPlease enter height in meters:  ";
  cin>>height;


    //(int)(var * 100 + .5)
  bmi = (int)((weight / (height*height))*100+.5);
  bmi = (float)bmi/100;

  cout << "\nBMI is:  " << bmi;

  return 0;
}
