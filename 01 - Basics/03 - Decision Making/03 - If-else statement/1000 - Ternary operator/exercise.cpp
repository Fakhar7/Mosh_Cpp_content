#include <iostream>
using namespace std;

int main()
{
    short num1;
    cout << "Enter number: ";
    cin >> num1;

    short num2;
    cout << "Enter number: ";
    cin >> num2;

    short largeNum = (num1 > num2) ? num1 : num2;
    cout << largeNum;
}