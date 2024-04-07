// Implement swap function for swapping two variables
// using pointers

#include <iostream>
using namespace std;

void swap(int* first, int* second)
{
  int temp;
  temp = *first;
  *first = *second;
  *second = temp;
}

int main() {
  int a = 20;
  int b = 40;
  swap(&a, &b);
  
  cout << a << " " << b;

  return 0;
}