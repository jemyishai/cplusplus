// #include "cpluspluslabs.h"
#include <iostream>
#include <string>
using namespace std;

class NODE {
  public:
    string firstname;
    string lastname;
    string email;
    NODE* next;
};


// void add_node_tail(NODE** data, string firstname,string lastname, string email){
//   NODE *head = (*data);
//   // NODE *current = head;
//   NODE *temp = new NODE;
//   // NODE* current = *data;
//   temp->firstname = firstname;
//   temp->lastname = lastname;
//   temp->email = email;
//   temp->next = nullptr;

//   if (!head){
//     *data = temp;
//   } else {
//     while(head->next ){
//      head = head->next;
//       }
//     head->next = temp;
//   }

//   // delete current;
//   // delete head;
//   // delete temp;
//   // delete *data;
// };

void add_node_head(NODE** data, string firstname,string lastname, string email){
  NODE *head = (*data);
  NODE *temp = new NODE;
  temp->firstname = firstname;
  temp->lastname = lastname;
  temp->email = email;
  temp->next = head;

  *data = temp;
};


int main (){
  NODE* data = nullptr;
  add_node_head(&data,"aspen","olmsted","aspeno@aol.com");
  add_node_head(&data,"sally","jones","sally@aol.com");


  if(data->firstname == "sally") {
     cout << data->firstname << endl;
     cout << data->lastname << endl;
     cout << data->email << endl;
  }

data = data->next;

if(data->firstname == "aspen") {
   cout << data->email << endl;
}




  return 0;
}




