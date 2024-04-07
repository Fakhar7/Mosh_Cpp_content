//  There are three types of catgories of datatypes
// 1- Primary or built-in dataTypes
// 2- Derived data types
// 3- User - Defined data types


#include <iostream>
using namespace std;

int main() {
    // keyword is used to automatically select a type of variable;
    auto price = 99.99;
    auto interestRate = 3.67F;  // At the end of value, it is essential to add "F"
    auto fileSize = 90000L;     // Similarly for Long datatype
    auto letter = 'a';
    auto isValid = false;

    // There is another way to declare integers with braces
    int number {};
    int number2 {34};
    cout << number << " " << number2;

    // what is benefits of brace initializer in cpp
    // It prevents us to mistakenly assign a floating point number, like this
    int number3 {34.34};

    // But in simple initializer, we can not get this favour
    int number4 = 34.34;
    return 0;
}
