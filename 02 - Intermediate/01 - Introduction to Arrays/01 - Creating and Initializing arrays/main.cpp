#include <iostream>
using namespace std;

int main () {
  // This is the first approach
  int number[5];
  number[0] = 10;
  number[4] = 20;

  // There is nothing that can prevent us to this.
  // So be careful while creating
  cout << number[30] << endl; 


  // The second approach is

  int number2[5] = {10, 20};
  // Here, we provide first two integers,
  // The other three integers will be zero

  cout << number2[3] << endl;

  // The third approach is that we omit the size of array
  // and compiler will automatically determined the size of
  // array by provided the numbers in the curly braces

  int number3[] = {1, 2, 3, 4, 5};

  // What if we prints the this

  cout << number3;
  // we get a hexadecimal number which is location of this array
  // And this is also called pointer

  return 0;

}