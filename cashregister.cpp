#include <iostream>
using namespace std;

int main() {
  float price1, price2, bmi, rate, base, purchasePrice, purchasePriceWTax;
  char card;
  bool cardBool;

  cout << "Enter price of the first item: ";
  cin >> price1;
  cout << "\nEnter price of the second item:  ";
  cin >> price2;
  cout << "\nDoes customer have a club card? (Y/N): ";
  cin >> card;
  cout << "\nEnter tax rate, e.g. 5.5 for 5.5\% tax: ";
  cin >> rate;


  base = price1 + price2;

//apply buy-one-get-one half off discount
  if (price1<price2){
    price1 = price1 - (price1*0.5);
  } else if (price1>=price2){
    price2 = price2 - (price2*0.5);
  }

  purchasePrice = price1 + price2;

//apply club card discount
if (card == 'y' || card =='Y'){
    purchasePrice = purchasePrice - (purchasePrice*0.10);
  } else if (card == 'n' || 'N'){
    cardBool = false;
  }

  purchasePriceWTax = purchasePrice+(purchasePrice*(rate/100));


  cout <<"\nBase price = ";
  printf("%2.2f",base);
  cout <<"\nPrice after discounts = ";
  printf("%2.2f",purchasePrice);
  cout <<"\nTotal Price = ";
  printf("%2.2f",purchasePriceWTax);
  cout<<endl;

  return 0;
}
