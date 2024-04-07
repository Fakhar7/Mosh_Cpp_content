// There are three scenarios about constants
// *- Data is const but pointer is not
// *- Pointer is const but data is not
// *- Both data and pointer are const

#include <iostream>
using namespace std;

int main()
{
  // In the case, data is const but pointer is not
  const int x = 20;   
  const int* ptr = &x;
  // Proof:
  int x = 20;
  ptr = &x;


  // In this case, pointer is const but data is not
  int a = 20;
  int* const ptr_a = &a;



  // In this case, both are const
  const int b = 20;
  const int* const ptr_b = &b;

  return 0;
}