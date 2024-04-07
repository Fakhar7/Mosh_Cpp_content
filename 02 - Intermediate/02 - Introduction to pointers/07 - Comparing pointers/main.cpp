#include <iostream>
using namespace std;

int main()
{
  
  int numbers[] = {10, 20, 30};

  int* ptrX = &numbers[0];
  int* ptrY = &numbers[1];
  // We know that pointers hold address of the
  // variable that have a any value

  // If we compare two or more ptrs we actually 
  // compares the address of that elements
  // To compare the value of that pointers
  // we have to de-reference that pointers
  // Like this

  if (*ptrX < *ptrY)
    cout << *ptrX << endl;

  // But in most cases, we have to compare two or
  // more pointers ins such way that,
  // if its points to the same memory address, then do this

  if (ptrX == ptrY)
    cout << "Same" << endl;
  else cout << "Not same" << endl;
  
  // The other case is that, if the pointer is not a nullptr
  // then do this

  if (ptrX != nullptr)
    cout << "Not null" << endl;
}