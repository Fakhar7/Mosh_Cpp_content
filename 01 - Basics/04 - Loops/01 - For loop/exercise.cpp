#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a positive number: ";
    int number;
    cin >> number;

    if (number < 0)
        cout << "Error! Number is not positive.";
    else {
        int factorial = 1;
        for (int i = 1; i <= number; i++)
                factorial *= i;
        cout << factorial;
    }
}