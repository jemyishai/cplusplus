#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void csv_export(string data[][10], int records,int columns, string filename){
  fstream myFile;
  myFile.open(filename, ios::out);
  if (myFile.is_open()){
    for (int i = 0; i<records; i++){
      for (int j = 0; j < columns; j++){
        string currentCol = data[i][j];
        if (j == (columns-1)){
          myFile << currentCol;
        }
        myFile << currentCol << ",";
      }
        myFile << "\n";
    }
   myFile.close();
  }
  system("pause>0");
};
