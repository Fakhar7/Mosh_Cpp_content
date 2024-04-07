#include <iostream>
using namespace std;

int func (int &number) {
    number *= 34;
    return number;
}

int main()
{
    int number = 2;
    func(number);
    cout << number;
}