#include <iostream>
using namespace std;

int main()
{
  string name = "Fakhar";

  // Append a string to the other string
  name.append(" Sultan");

  // Add new part of string
  name.insert(0, "I am ");
  cout << name << endl;

  // Erase a part of string
  name.erase(0, 5);
  cout << name << endl;

  // Clear a string just like a empty string
  name.clear();
  cout << name << endl;

  // Replace a characters with other characters
  name.replace(0, 2, "FA");
  cout << name << endl;
}