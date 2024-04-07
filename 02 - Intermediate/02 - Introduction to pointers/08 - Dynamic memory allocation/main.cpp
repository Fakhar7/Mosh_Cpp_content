#include <iostream>
using namespace std;

int main()
{
  // Stack variable
  // int numbers[10];
  
  
  // For creating a dynamic allocated array,
  // the syntax is different

  // This is array of five elements
  // Heap (Free store)
  int* numbers = new int[5];

  // For integer value ...
  int* number = new int;

  // For de-allocation 
  delete[] numbers;
  delete number;

  // Reseting the pointers
  numbers = nullptr;
  number = nullptr;

  return 0;
}