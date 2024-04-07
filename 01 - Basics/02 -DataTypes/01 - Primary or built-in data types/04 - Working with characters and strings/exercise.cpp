#include <iostream>
using namespace std;

int main()
{
    string street;
    cout << "Street: ";
    getline(cin, street);

    string city;
    cout << "City: ";
    getline(cin, city);

    string state;
    cout << "State: ";
    getline(cin, state);

    string zipCode;
    cout << "Zip Code: ";
    getline(cin, zipCode);

    cout << endl;

    cout << street << endl;
    cout<< city << ", " << state << ", " << zipCode;
}