#include <iostream>
using namespace std;

void asc(int start, int end){
  if (start == end){
    cout<<start<<endl;
  } else{
    cout<<start<<endl;
    asc(start+1,end);
    cout<<start<<endl;
  }
}

int main() {
  float input1, input2;

  cout<<"Please enter a number: ";
  cin>>input1;
  cout << "\nPlease enter a second number:  ";
  cin>>input2;

  asc(input1,input2);

  return 0;
}
