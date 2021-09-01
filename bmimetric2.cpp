#include <iostream>
#include <string>
using namespace std;

int main() {
  float weight, height, bmi;
  string status;

  cout<<"Please enter weight in kilograms: ";
  cin>>weight;
  cout << "\nPlease enter height in meters:  ";
  cin>>height;

  bmi = (int)((weight / (height*height))*100+.5);
  bmi = (float)bmi/100;

  if (bmi<18.5){
     status = "Underweight";
  } else if (bmi>=18.5 && bmi<=24.9){
     status = "Normal";
  } else if (bmi>=25.0 && bmi<=29.9){
     status = "Overweight";
  } else if (bmi>=30.0) {
    status = "Obese";
  }

  cout << "\nBMI is:  " << bmi << ", Status is " << status;

  return 0;
}
