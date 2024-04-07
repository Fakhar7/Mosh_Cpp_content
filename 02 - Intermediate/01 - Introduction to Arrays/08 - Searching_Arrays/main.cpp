// Linear search algorithm
// This algorithm is called linear search,
// because the cost of algorithm increases
// as the size of array increases

#include <iostream>
using namespace std;


// we can use size_t in place of int in size parameter
int find(int numbers[], int size, int target)
{
  for (int i = 0; i < size; i++)
    if (numbers[i] == target) return i;
  
  return -1;
}


int main()
{
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int output = find(numbers, size(numbers), 11);
  cout << output;
}