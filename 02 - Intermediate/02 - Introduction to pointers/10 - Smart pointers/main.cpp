#include <iostream>
using namespace std;

int main()
{
  int* ptr = new int;
  delete ptr;
  // delete ptr;

  // To overcome the de-allocated the pointers problem,
  // and other problem is that if we deleter pointer twice
  // times, our program will be crashed, that is why
  // we use a modern concept in C++ called smart pointers
  // It has two types:
  // (1) - Unique Pointers
  // (2) - Shared Pointers


  return 0;
}