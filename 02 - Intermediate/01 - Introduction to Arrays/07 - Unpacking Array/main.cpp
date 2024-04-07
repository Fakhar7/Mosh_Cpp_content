#include <iostream>
using namespace std;

int main()
{
  // C++: structure binding
  // Javascript: destructuring
  // Python: unpacking

  int values[3] = {10, 20, 30};

  // int x = values[0];
  // int y = values[1];
  // int z = values[2];

  auto [x, y, z] = values;
  cout << x << ", " << y << ", " << z;
}