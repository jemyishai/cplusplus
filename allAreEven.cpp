#include <iostream>
using namespace std;

bool fac(int arr[], int n)
{
  bool output;
  if (n == 0)
  {
    return true;
  }
  else if (arr[n - 1] % 2 == 0)
  {
    output = fac(arr, n - 1);
    return output;
  }
  else
  {
    return false;
  }
}

int main()
{
  bool output;
  int holder[4] = {8, 4, 6, 19};
  output = fac(holder, 4);
  if (output == true)
  {
    cout << "All are even" << endl;
  }
  else
  {
    cout << "Not all are even" << endl;
  }
  return 0;
}
