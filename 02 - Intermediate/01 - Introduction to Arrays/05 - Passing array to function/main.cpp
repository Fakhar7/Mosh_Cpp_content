#include <iostream>
using namespace std;

// int arr[] -> arr*

void printNumbers(int arr[], int size) {


  /*

  for (int number: arr)
    cout << number;
  
  We get a compilation error 
  "Cannot build expression with array function parameter 'arr'"


  Earlier, in the previous chapter, we have learn that whenever
  we reference an array without an index, we get a hexadecimal 
  number which is the memory location of the arr 
  OR 
  More accurately, we get a memory location of the first element
  of this array

  So, what is doing here?
  Our integer arr[] is now converted into integer pointer
  int arr[] -> int*

  That is why, it does't make a sense to loop over pointer
  which is just a number

  We con only loop over list of elements not a number

  So, what happened, if we loop over this using for - loop
  */

 	// whenever, we have to pass an array to function,
	// we always pass the size of that array

	for (int i = 0; i < size; i++)
		cout << arr[i] << endl;
}

int main() 
{
  int numbers[] = {10, 20, 30};
	printNumbers(numbers, size(numbers));

  return 0;
}