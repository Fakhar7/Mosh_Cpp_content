#include <iostream>
using namespace std;

int main()
{
    short guess = 7;
    short number = 0;
    while (guess != number) {
        cout << "Guess: ";
        cin >> number;
    }
}