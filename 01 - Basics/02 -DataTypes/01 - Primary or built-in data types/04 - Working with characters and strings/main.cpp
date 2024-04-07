#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setw(25) << "The char Section" << endl;
    // char is used to store character
    char ch = 'a';
    cout << ch << endl;
    // Above cout will return a character
    // But if we want to print the ASCII code of that character
    // then we use + operator to get an ASCII code
    cout << +ch << endl;

    // Here is another example
    char ch2 = 97;
    // We directly access a char character using an ASCII code
    cout << ch2 << endl << endl;

    // String Section
    cout << setw(25) << "The String Section" << endl;

    // string is a series of characters
    string str = "Mosh Hamedani";
    cout << str << endl;
    string name;
    getline(cin, name);
    cout << "Hi " << name;
    return 0;
}
