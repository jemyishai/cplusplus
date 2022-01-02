#include "cpluspluslabs.h"


void add_node_head(NODE** data, string firstname,string lastname, string email){
  NODE *head = (*data);
  NODE *temp = new NODE;
  temp->firstname = firstname;
  temp->lastname = lastname;
  temp->email = email;
  temp->next = head;

  *data = temp;
};
