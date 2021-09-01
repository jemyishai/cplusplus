#include <iostream>
using namespace std;

int main(){
  float quarters, dimes, nickels, pennies;
  int dollars, cents, total;
  cout<<"Please enter the number of coins: "<< endl;
  cout <<"\n# of quarters: ";
  cin>>quarters;
  cout << "\n# of dimes: ";
  cin>>dimes;
  cout <<"\n# of nickels: ";
  cin>>nickels;
  cout << "\n# of pennies: ";
  cin>>pennies;

  quarters = quarters*25;
  dimes = dimes*10;
  nickels = nickels*5;

  total = quarters + dimes + nickels + pennies;

  dollars = total / 100;
  cents = total % 100;

  cout << "\nThe total is " << dollars << " dollars and " << cents << " cents" << endl;

  return 0;
}
