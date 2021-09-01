#include <iostream>

using namespace std;

void resizeArray (int*& arr, int currentSize, int newSize){
  int *temp = new int[newSize];
  for (int i=0; i< currentSize; i++)
    temp[i] = arr[i];
  delete[] arr;
  arr = temp;
}

int main(){
  int size = 10;
  int * arr = new int[size];
  for (int i= 0; i < size; i++)
    arr[i] = i*10;
  int oneMore = 110;
  int newSize = size*2;
  resizeArray(arr, size, newSize);
  size = newSize;
  arr[size++] = oneMore;

  cout << "size is: " << size << " | and arr is: " << arr << " | and &arr[21] is: " << &arr[21] <<endl;
  cout << "size is: " << size << " | and arr[20] is: " << arr[20] << " | and arr[21] is: " << arr[21] <<endl;
  cout << "size is: " << size << " | and arr[20] is: " << arr[20] << " | and arr[22] is: " << arr[22] <<endl;

}
