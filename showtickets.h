#include <iostream>
#include <string>
using namespace std;

class TicketMaster{
  public:
  string Row;
  string Seat;
  void setRow(string row){
    Row = row;
  };
  void setSeat(string seat){
    Seat = seat;
  };
  string getRow(){
    return Row;
  };
  string getSeat(){
    return Seat;
  };
};

class ShowTickets
{
public:
  TicketMaster collection[10];
  void sell_seat(string row, string seat)
  {
    int i;
    for (i = 0; i < 10;){
      collection[i].setRow(row);
      collection[i].setSeat(seat);
      i++;
    };
  };
 bool is_sold(string row, string seat)
  {
    bool output = false;
    int i;
    string tempRow;
    string tempSeat;
    for (i = 0; i < 10; i++){
      tempRow = collection[i].getRow();
      tempSeat = collection[i].getSeat();
      if (tempRow == row && tempSeat == seat ){
        output = true;
      }
    };
    return output;
  };
  string print_ticket(string row, string seat)
  {
    string output;
    string tempSeat;
    string isSoldTemp;
    isSoldTemp = is_sold(row, seat) ? "sold" : "available";
    output = row + " " + seat + " " + isSoldTemp;
    return output;
  };
};


