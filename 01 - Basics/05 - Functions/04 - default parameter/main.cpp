#include <iostream>
using namespace std;

// The default parameter should come at last of all parameters

double calculateTax(double income, double taxRate = .2)
{
    return income * taxRate;
}
int main() {
    double tax = calculateTax(34'000);
    cout << tax;
    return 0;
}
