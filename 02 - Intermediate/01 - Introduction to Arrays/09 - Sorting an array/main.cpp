// There are number of sorting methods
// Bubble sort
// Selection sort
// Insertion sort
// Merge sort
// Quick sort

// In this section, we will learn Bubble sort method

#include <iostream>
using namespace std;

void swap (int numbers[], int i, int j)
{
  int temp = numbers[i];
  numbers[i] = numbers[j];
  numbers[j] = temp;
}

void bubbleSort(int numbers[], int size) {
  for (int pass = 0; pass < size; pass++) {

    for (int i = 1; i < size; i++){
      if ( numbers[i] < numbers[i -1])
        swap(numbers, i, i - 1);
    }
  }
}

int main()
{
  int numbers[] = {2, 4, 6, 2, 1, 9, 3, 0};
  bubbleSort(numbers, size(numbers));

  for (int number: numbers)
    cout << number << endl;

  return 0;
}