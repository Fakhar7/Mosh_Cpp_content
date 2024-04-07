#include <iostream>
using namespace std;

int main ()
{
    int sales = 11'000;
    double commission;
    if (sales < 10'000) commission = .10;
    else if (sales <= 15'000) commission = .15;
    else commission = .2;

    cout << "The total commission is: ";
    cout << commission;
}