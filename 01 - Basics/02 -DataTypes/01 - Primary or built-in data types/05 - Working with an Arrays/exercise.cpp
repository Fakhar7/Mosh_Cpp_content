#include <iostream>
using namespace std;

int main()
{
    string names[3];

    cout << "Name: ";
    getline(cin, names[0]);

    cout << "Name: ";
    getline(cin, names[1]);

    cout << "Name: ";
    getline(cin, names[2]);

    cout << "The first name is " << names[0];
}