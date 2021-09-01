#include <iostream>
using namespace std;

int main() {
  int length;
  char input;

  cout << "Enter a character: ";
  cin >> input;
  cout << endl;

  if (input>= 65 && input<=90) {
  cout << input << " is  an  upper case  letter." << endl;
  } else if (input>= 97 && input<=122) {
  cout << input << " is  a lower case  letter." << endl;
  } else if (input>= 48 && input<=57) {
  cout <<  input << " is  a digit." << endl;
  } else {
    cout << input << " is  a non-alphanumeric  character.";
  };

  return 0;
}


