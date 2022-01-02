#include "cpluspluslabs.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void add_node_tail(NODE** data, string firstname,string lastname, string email){
  NODE *head = (*data);
  NODE *temp = new NODE;
  temp->firstname = firstname;
  temp->lastname = lastname;
  temp->email = email;
  temp->next = nullptr;

  if (!head){
    *data = temp;
  } else {
    while(head->next != nullptr){
     head = head->next;
      }
    head->next = temp;
  }

};



void csv_import(string dataStruct[][10], string filename, NODE** data){

  fstream myFile;
  int records = 0;

  myFile.open(filename, ios::in);
  if (myFile.is_open()){
    string line, word;
    while(getline(myFile,line,'\n')){
      int c = 0;
      int indexOfLine = 0;
      while((indexOfLine = line.find(',')) != -1){
        word = line.substr(0,indexOfLine);
        dataStruct[records][c] = word;
        c+=1;
        line.erase(0,indexOfLine+1);
      }
      add_node_tail(data,dataStruct[records][0],dataStruct[records][1],dataStruct[records][2]);
      records += 1;
    }
   myFile.close();
  }
  system("pause>0");
};

void csv_import2(NODE** data, string filename){
  string dataStruct[10][10];
  csv_import(dataStruct,filename, data);
};
