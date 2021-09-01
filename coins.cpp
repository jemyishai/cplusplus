#include <iostream>
using namespace std;

int main() {
  float dollars, quarters, dimes, nickels, pennies;
  int total, running_total, quarters_total, dimes_total, nickels_total, pennies_total, cents;


  cout<<"Please enter the amount of money to convert: "<< endl;
  cout <<"\n# of dollars: ";
  cin>>dollars;
  cout << "\n# of cents: ";
  cin>>cents;


  total = (dollars*100) + cents;

//need to turn the following into a function

  quarters = 25;
  quarters_total = (int)total/quarters;
  running_total = total - (quarters*quarters_total);

  dimes = 10;
  dimes_total = (int)running_total/dimes;
  running_total = running_total - (dimes*dimes_total);

  nickels = 5;
  nickels_total = (int)running_total/nickels;
  running_total = running_total - (nickels*nickels_total);

  pennies = 1;
  pennies_total = (int)running_total/pennies;
  running_total = running_total - (pennies*pennies_total);

  cout << "\nThe coins are " << quarters_total << " quarters, " << dimes_total << " dimes, " << nickels_total << " nickels and " << pennies_total << " pennies" <<  endl;

  return 0;
}
