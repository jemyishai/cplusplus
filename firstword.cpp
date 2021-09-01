#include <string>
using namespace std;

string firstword(string s){
  int ind = s.find(" ");
  return s.substr(0,ind);
}
