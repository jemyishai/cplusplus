#include <iostream>
using namespace std;

int removeFirstDigit(int first){
  if (first<10){
    return 0;
  } else{
    return (first%10 + removeFirstDigit(first/10)*10);
  }
}

int copyFirstDigit(int first){
  int copy;
  copy = first;
  while(copy>=10){
    copy = copy/10;
  }
  return copy;
}

bool is_palindrome(int test)
{
  int lastDigit, firstDigit;

  if (test<=9)
  {
    return true;
  }
  else
  {
    lastDigit = test % 10;
    firstDigit = copyFirstDigit(test);
    if (lastDigit == firstDigit)
    {
      test = removeFirstDigit(test);
      cout<<test<<endl;
      test = test/10;

      is_palindrome(test);
      return true;
    }
    else
    {
      return false;
    }
  }
};


int main (){
  int numb = 30013;
  cout << numb<< endl;
  if (is_palindrome(numb) == false){
    cout << "Not a palindrome" << endl;
  }
  return 0;
}
