#include <iostream>
using namespace std;

int main()
{
  string fullName = "Muhammad Fakhar Sultan";
  auto breakPoint = fullName.rfind(' ');
  string first = fullName.substr(0, breakPoint);
  string last = fullName.substr(breakPoint + 1 );
  cout << "(" << first << "), "; 
  cout << "(" << last << ")"; 

  return 0;
}