/*

Given the following format for customer numbers

2 alphabetic characters
4 digits

Write a function to validate a customer number

bool isValid(string customerNumber)

*/

#include <iostream>
using namespace std;

bool isValid(string customerNumber)
{
  if (customerNumber.length() != 6)
    return false;

  for (int i = 0; i < 2; i++)
    if (!isalpha(customerNumber[i]))
      return false;

  for (int i = 2; i < customerNumber.length(); i++)
    if (!isdigit(customerNumber[i]))
      return false;

  return true;
}

int main()
{
  string customerNumber;
  while (customerNumber != "back") {
    cout << "Enter customer id: ";
    cin >> customerNumber;

    cout << boolalpha << isValid(customerNumber) << endl;
  }

  return 0;
}