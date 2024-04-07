#include <iostream>
using namespace std;

int main()
{
  // This string class internally work with character array
  // But the favorite thing about this class is that
  // it hides all the complexities belongs to char arrays
  string name = "Fakhar";
  name[0] = 'f';

  cout << name; 

  // So, this class has a bunch of functions that
  // we can access using a dot operator

  // return the length of a character
  name.length();

  // concatenation or combining strings
  name += " sultan";
  
  // Copying a string
  string another = name;
  
  // Comparing a strings
  if (name == another)
    cout << "Same";
  
  name.empty();   // Check if strings is empty
  name.front();   // return the first character of string
  name.back();    // return the last character of string


  return 0;
}