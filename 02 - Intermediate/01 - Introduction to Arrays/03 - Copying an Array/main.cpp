#include <iostream>
using namespace std;

int main()
{
  // Here, we have an array
  int first[] = {10, 20, 30};

  // Now, we declare another array second and
  // Set the first array to this array

  // int second[] = first;
  // We get an compilation error
  // Array initializer must be an initializer list

  // So, we can copy an array using a for loop

  // int second[3];
  int second[size(first)];

  for(int i = 0; i < size(first); i++)
    second[i] = first[i];
  // that is why, we uses a for - loop not ranged based loop

  // To check, is really first array has copied
  // we use for - range-base loop

  for (auto number: second)
    cout << number << endl;
    
  return 0;
}