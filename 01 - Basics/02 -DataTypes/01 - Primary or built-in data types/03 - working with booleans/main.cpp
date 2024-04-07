#include <iostream>
using namespace std;

int main()
{
    bool isNewUser = false;
    // Internally, cpp compiler represent
    // false as 0
    // true as 1
    cout << isNewUser << endl;

    // But we can print the false or true
    // using a noboolalpha or boolalpha
    // which is sticky manipulator
    cout << boolalpha << isNewUser;
}