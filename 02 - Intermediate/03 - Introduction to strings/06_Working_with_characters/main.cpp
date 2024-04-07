#include <iostream>
using namespace std;

int main()
{
  string name = "Muhammad Fakhar";
  cout << boolalpha << islower(name[0]) << endl;
  cout << boolalpha << isupper(name[0]) << endl;
  cout << boolalpha << isalpha(name[0]) << endl;
  cout << boolalpha << isdigit(name[0]) << endl;
  cout << boolalpha << isspace(name[0]) << endl;

  // converting lower case to uppercase or vice versa
  cout << (char)toupper('a') << endl;
  cout << (char)tolower('A') << endl;

  // This two functions are helpful in most scenarios
  // like this

  char input;

  while (true)
  {
    cin >> input;
    if (tolower(input) == 'x')
      break;

    cout << "Enter again: ";

  }
  return 0;
}