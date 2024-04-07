#include <iostream>
using namespace std;

bool compare(int array1[], int array2[], int size)
{

  bool isEqual = true;

  for (int i = 0; i < size; i++)

    if (array1[i] != array2[i])
    {
      isEqual = false;
      return isEqual;
    }

  return isEqual;
}

int main()
{

  // To compare we will use a function
  int numbersA[] = {1, 2, 3, 4, 5, 6, 7, 8}; 
  int numbersB[] = {1, 2, 3, 4, 5, 6, 7, 8}; 

  bool result = compare(numbersA, numbersB, size(numbersA));
  cout << boolalpha << result;
}