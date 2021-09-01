#include <iostream>
#include <sstream>
using namespace std;

// citing the following stack overflow page as it assisted in reading command line argument and then convert it to an int
// https://stackoverflow.com/questions/2797813/how-to-convert-a-command-line-argument-to-int

int main(int argc , char *argv[]) {
 if (argc >= 2)
    {
        istringstream iss( argv[1] );
        int year;
        if (iss >> year)
        {
            if(year%4==0){
              if(year%100==0 && year%400==0){
                cout << year << " was a leap year \n";
              }  else if (year%100!=0 ){
                cout << year << " was a leap year \n";
              } else{
                cout << year << " was not a leap year \n";
              }
            } else{
                cout << year << " was not a leap year \n";
            }
        }
    }

  return 0;
}


