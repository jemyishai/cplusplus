#include "showticket.h"
#include <string>

class SportTicket: public ShowTicket
{
public:
  bool Beer;
  bool beer_sold()
  {
    return Beer;
  };
  void sell_beer()
  {
    Beer = true;
  };
  string print_ticket()
  {
    string output;
    string tempSeat;
    string isSoldTemp;
    isSoldTemp = beer_sold() ? "sold beer" : "nobeer";
    output = row + " " + seat + " " + isSoldTemp;
    return output;
  };
  SportTicket(string row, string seat)
      : ShowTicket(row, seat)
  {
    Beer = false;
  };
};
