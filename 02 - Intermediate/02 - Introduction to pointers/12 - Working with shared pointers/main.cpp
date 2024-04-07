#include <iostream>
#include <memory>
using namespace std;

int main()
{
  // Shared pointers are those smart pointers 
  // that can points to the memory address of other
  // pointer

  shared_ptr<int> x(new int);
  // OR
  auto y = make_shared<int>();
  *y = 10;
  shared_ptr<int> z(y);

  if (y == z)
    cout << "Same reference";

  return 0;
}