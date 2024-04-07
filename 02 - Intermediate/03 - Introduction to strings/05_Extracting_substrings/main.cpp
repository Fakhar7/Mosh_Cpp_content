#include <iostream>
using namespace std;

int main()
{
  string name = "Fakhar Sultan";
  string copy = name.substr(5, 3);
  // Both these strings are independent

  cout << copy;

  return 0;
}