// What is narrowing?
// narrowing in cpp , is a process when we assign a larger wide number
// into a short wide number then the short number collapsed.

#include <iostream>
using namespace std;

int main()
{
    int a = 9'000'000;
    short b = a;
    cout << b;
}