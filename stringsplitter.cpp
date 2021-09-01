#include <iostream>
#include <string>
using namespace std;

int main() {
  int length;
  string input, firsthalf, secondhalf;


  cout << "Enter an odd length string: ";
  getline(cin, input);

  length = input.length();
  char middle = input[(length)/2];
  firsthalf = input.substr(0,(length/2));
  secondhalf = input.substr((length/2)+1);

  cout << "\nMiddle character: " << middle;
  cout << "\nFirst half: " << firsthalf;
  cout << "\nSecond half: " << secondhalf << endl;

  return 0;
}

