#include <iostream>
using namespace std;


// Here, we pass an array which is pointer or memory location address,
// that is why, whenever we apply changes in this function
// the original array will be changed
void printNumber(int numbers[])
{
  numbers[2] = 2;
}

int main()
{
  int numbers[] = {10, 20, 30};

  // if we print a numbers, we get a hexadecimal number 
  // Which is address of memory location of the first 
  // element of this array

  // So, if we use indirection operator here
  // we see the first element of this array
  // Which is 10 
  cout << *numbers << endl;

  printNumber(numbers);
  cout << numbers[2] << endl;
}