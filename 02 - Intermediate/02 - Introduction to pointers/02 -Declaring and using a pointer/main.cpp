#include <iostream>

using namespace std;

int main()
{
  int number = 10;

  // Like other variables, if we don't initialize 
  // variables, we get a garbage value

  // int* ptr;

  // int* ptr = nullPtr;
  // But, when we assign the value in this null pointer
  // we get an error of "segmentation fault" or
  // "memory access violation".
  // So, we always have to initialize a pointer
  // with a valid value.

  // The address of operator
  int *ptr = &number;

  // Indirection (de-referencing) operator 
  *ptr = 20;


  cout << number << endl;

  return 0;
}   