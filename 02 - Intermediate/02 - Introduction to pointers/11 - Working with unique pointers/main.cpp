#include <iostream>
#include <memory>
#include <typeinfo>
using namespace std;

int main()
{
  unique_ptr<int> x(new int);
  *x = 23;

  // We cannot do arithmetics operations with this variables
  // There are simpler way to create a unique pointer
  // We have a generic function called make_unique

  auto numbers = make_unique<int[]>(10);
  auto y = make_unique<int>();
  numbers[0] = 10;

  cout << numbers[0];

  return 0;
}