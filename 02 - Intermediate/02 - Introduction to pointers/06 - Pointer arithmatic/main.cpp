#include <iostream>
using namespace std;

int main() {
  int numbers[] = { 10, 20, 30};
  // Here, we declare a pointer and initializes it with this array.

  int * ptr = numbers;

  // Lets imagine that the ptr points to the first element
  // of that array has an address
  // 100
  // Now here, if increment this pointer

  ptr++;
  // Here, the pointer that has an address 100
  // instead of 101, its increment by 4
  // which is 104, this array is contain integers values
  // and integer is 4-byte wide.
  // This increment address is the memory address
  // of the second element of that array, which is 20.

  cout << *ptr << endl;

  // We can write arithmetic expression for ptr like this

  cout <<  *(ptr + 1) << endl;
  cout << ptr[1] << endl;
  cout << numbers[1] << endl;

  // Above all approaches are same
  // Second approach is recommended 
  // but compiler convert the second to the first, under the hood
}