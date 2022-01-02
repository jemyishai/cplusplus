#include "cpluspluslabs.h"


// https://stackoverflow.com/questions/20125477/linked-list-insert-at-the-end-c

// https://www.geeksforgeeks.org/linked-list-set-1-introduction/

// https://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in


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




