#include <iostream>
#include <limits>
using namespace std;

int main()
{
  // What is size_t?
  // size_t is a unsigned long long integer
  cout << endl << endl;

  cout << sizeof(int) << endl;        // 4
  cout << sizeof(long long) << endl;  // 4
  cout << sizeof(size_t) << endl;     // 8

  // for 32-bit compiler: size_t = unsigned long long
  // for 64-bit compiler: size_t = unsigned int

  cout << endl << endl;

  cout << numeric_limits<long long>::min() << endl;
  cout << numeric_limits<long long>::max() << endl;
  cout << numeric_limits<size_t>::min() << endl;
  cout << numeric_limits<size_t>::max() << endl;

  return 0;
}