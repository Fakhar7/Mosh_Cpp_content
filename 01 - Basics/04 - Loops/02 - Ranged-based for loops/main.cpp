#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3};

    // Traditional way
    for(int i = 0; i < sizeof(numbers) / sizeof(int); i++)
        cout << numbers[i] << endl;

    // C++ has own way
    for(int number: numbers)
        cout << number << endl;

    // we can apply this on strings
    // because strings are series of characters

    string name = "Muhammad Fakhar Sultan";
    for (char ch: name)
        cout << ch << endl;
    return 0;
}
