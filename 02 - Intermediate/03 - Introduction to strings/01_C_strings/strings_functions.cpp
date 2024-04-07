// We have a bunch of functions for
// working with strings
// These functions are declared in <cstring> header file
// And this header file also declared in <iostream> header file
// So we dont,t worry about to add this file
#include <iostream>
using namespace std;

int main()
{
  char name[] = "fakhar";
  char lastName[] = "Sultan";

  if(strcmp(name, lastName) == 0)
   cout << "Equal";
   
}

