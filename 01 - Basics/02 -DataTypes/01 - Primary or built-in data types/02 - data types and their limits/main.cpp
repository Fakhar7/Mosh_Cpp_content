#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main() {

    // Print the maximum and minimum values of short integers
    short shortMax = numeric_limits<short>::max();
    short shortMin = numeric_limits<short>::min();

    cout << "The limits for short" << endl;
    cout << left
         << setw(20) << "max int: " << right << setw(15) << shortMax << endl << left
         << setw(20) << "min int: " << right << setw(15) << shortMin << endl <<endl;


    // Print the maximum and minimum values of int
    int intMax = numeric_limits<int>::max();
    int intMin = numeric_limits<int>::min();

    cout << "The limits for integers" << endl;
    cout << left
    << setw(20) << "max int: " << right << setw(15) << intMax << endl << left
    << setw(20) << "min int: " << right << setw(15) << intMin << endl <<endl;


    // Print the maximum and minimum values of long integers
    long longMax = numeric_limits<long>::max();
    long longMin = numeric_limits<long>::min();

    cout << "The limits for long" <<endl;
    cout << left
    << setw(20) << "max long: " << right << setw(15) << longMax << endl << left
    << setw(20) << "min long: " << right << setw(15) << longMin << endl <<endl;


    // Print the maximum and minimum values of long long integers
    long long longLongMax = numeric_limits<long long >::max();
    long long longLongMin = numeric_limits<long long >::min();

    cout << "The limits for long long" <<endl;
    cout << left
         << setw(20) << "max long long: " << right << setw(25) << longLongMax << endl << left
         << setw(20) << "min long long: " << right << setw(25) << longLongMin << endl <<endl;


    // Print the maximum and minimum values of short float decimal point number
    double floatMax = numeric_limits<float>::max();
    double floatMin = numeric_limits<float>::min();

    cout << "The limits for float" <<endl;
    cout << left
         << setw(20) << "max float: " << right << setw(25) << floatMax << endl << left
         << setw(20) << "min float: " << right << setw(25) << floatMin << endl <<endl;


    // Print the maximum and minimum values of double decimal point number
    double doubleMax = numeric_limits<double>::max();
    double doubleMin = numeric_limits<double>::min();

    cout << "The limits for double" <<endl;
    cout << left
         << setw(20) << "max double: " << right << setw(25) << doubleMax << endl << left
         << setw(20) << "min double: " << right << setw(25) << doubleMin << endl <<endl;

    // Print the maximum and minimum values of long double decimal point number
    long double longDoubleMax = numeric_limits<long double>::max();
    long double longDoubleMin = numeric_limits<long double>::min();

    cout << "The limits for long double" <<endl;
    cout << left
         << setw(20) << "max long double: " << right << setw(25) << longDoubleMax << endl << left
         << setw(20) << "min long double: " << right << setw(25) << longDoubleMin << endl <<endl;
}
