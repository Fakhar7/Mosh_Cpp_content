#include <iostream>
using namespace std;

int main()
{

  // Convert strings to a numbers
  double price = stod("19.99");
  cout << price << endl; 

  // Convert numbers to strings
  string str = to_string(19);
  cout << str;

  return 0;
}