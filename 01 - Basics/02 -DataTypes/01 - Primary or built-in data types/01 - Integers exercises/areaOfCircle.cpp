#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter radius4: ";
    double radius;
    cin >> radius;
    const double pi = 3.1416;
    double area = pi * pow(radius, 2);
    cout << "The area of a circle is " << area;
}