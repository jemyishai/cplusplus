#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class ShowTicket
{
public:
  string Row;
  string Seat;
  bool Sold;
  bool is_sold()
  {
    return Sold;
  };
  void sell_seat()
  {
    Sold = true;
  };

  string print_ticket()
  {
    string output;
    string tempSeat;
    string isSoldTemp;
    isSoldTemp = is_sold() ? "sold" : "available";
    output = Row + " " + Seat + " " + isSoldTemp;
    return output;
  };

  ShowTicket(string row, string seat)
  {
    Row=row;
    Seat=seat;
    Sold=false;
  };
// string converter (int input){
//   char *intStr = itoa(input);
//   string str = string(intStr);
//   return str
// }
// string IntToString(int a)
// {
//     ostringstream temp;
//     temp << a;
//     return temp.str();
// };
};

int main (){
  ShowTicket e("AA","102");
  cout << e.print_ticket() << endl;
  return 0;
}
