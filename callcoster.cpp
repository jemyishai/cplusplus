#include <iostream>
#include <string>
using namespace std;

int main() {

  string input;

  cout << "Enter the day the call started at: ";
  cin >> input;
  cout << "\nEnter the time the call started at (hhmm): ";
  cin >> time;
  cout << "\nEnter the duration of the call (in minutes): ";
  cin >> duration;

  if (day == "Sat" || day =="Sun"){
    totalCost = duration*0.15;
  } else if (time >= 800 && time<=1800){
    totalCost = duration*0.40;
  } else if (time < 800 || time> 1800){
    totalCost = duration*0.25;
  }


  cout << "\nThis call will cost $";
  printf("%2.2f",totalCost);
  cout <<endl;

  return 0;
}

