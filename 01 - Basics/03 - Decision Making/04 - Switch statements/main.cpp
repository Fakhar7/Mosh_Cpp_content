#include <iostream>
using namespace std;
int main() {
    double first;
    double second;
    cout << "Enter values: " << endl;
    cin >> first >> second;

    cout << "Select an operator:" << endl
        << " *" << endl
        << " +" << endl
        << " /" << endl
        << " -" << endl;

    char operators;
    cin >> operators;

    switch (operators) {
        case '*':
            cout <<  first * second;
            break;
        case '+':
            cout << first + second;
            break;
        case '/':
            cout << first / second;
            break;
        default:
            cout << first - second;
    }
    return 0;
}
