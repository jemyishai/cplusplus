#include <iostream>

int main() {
  int firstnum, secondnum,thirdnum,fourthnum;
  int isEven = 0;
  int isOdd = 0;
  std::cout << "Please enter 4 positive integers, separated by a space:\n";
  std::cin>>firstnum >> secondnum >> thirdnum >> fourthnum;

if (firstnum%2==0)
  isEven++;
else
  isOdd++;

if (secondnum%2==0)
    isEven++;
  else
    isOdd++;

if (thirdnum%2==0)
    isEven++;
else
    isOdd++;

if (fourthnum%2==0)
    isEven++;
else
    isOdd++;

if ( isEven == isOdd)
 std::cout << "same number of evens and odds";

if(isEven>isOdd)
 std::cout << "more evens";

if(isOdd>isEven)
 std::cout << "more odds";

  return 0;
}
