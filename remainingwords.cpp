#include <string>
using namespace std;

int firstspaceindex(string s);

string remainingwords(string s){
  return s.substr(firstspaceindex(s));
}

int firstspaceindex(string s){
  int ind = s.find(" ");
  return ind+1;
}
