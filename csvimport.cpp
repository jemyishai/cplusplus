#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void csv_import(string data[][10], int columns, int *records, string filename){

  fstream myFile;
  *records = 0;

  myFile.open(filename, ios::in);
  if (myFile.is_open()){
    string line, word;
    while(getline(myFile,line,'\n')){
      int c = 0;
      int indexOfLine = 0;
      while((indexOfLine = line.find(',')) != -1){
        word = line.substr(0,indexOfLine);
        data[*records][c] = word;
        c+=1;
        line.erase(0,indexOfLine+1);
      }
      *records += 1;
    }
   myFile.close();
  }
  system("pause>0");
};

// Tried the following two methods in place of the inner loop:
// 1)
// while((getline(line,word,',') != NULL) && c<columns){
      //   data[*records][c] = word;
      //     c+=1;
      // }
//  2)
      // getline(myFile,word,',');
      // for(int c = 0; c < columns; c++){
      //   data[*records][c] = word;
      // }
// I felt I should cite the stackoverflow page, as it helped me:
// https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c
