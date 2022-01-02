#include "sportticket.h"
#include <string>

class TicketSales
{
  public:
  string print_ticket(ShowTicket *myticket){
    return myticket->print_ticket();
  };
};
