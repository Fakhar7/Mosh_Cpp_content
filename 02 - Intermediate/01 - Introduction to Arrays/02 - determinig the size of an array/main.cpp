#include <iostream>
using namespace std;

int main()
{
  int numbers[] = {10, 20, 30, 40};

  // we can use the int keyword
  // but we use auto keyword,
  // which let the compiler type of data
  
  /*
  for (int number: numbers)
    cout << number << endl;  
  */

  /*
  for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    cout << numbers[i] << endl;
  */

  // We have a size function in standard library, std::size(array);
  // This will return the numbers of value in arrays
  for (int i = 0; i < size(numbers); i++)
    cout << numbers[i] << endl; 

  // The other approaches is also applied in various large applications
  // Specially for old ones.

  return 0;
}