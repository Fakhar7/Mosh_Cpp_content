// The static keyword has different meanings when used with different types.
// We can use static keyword with:
// 1. Static Variables: Variables in a function, Variables in a class
// 2. Static Members of Class: Class objects and functions
#include <iostream>
#include "MyClass.h"
void func () {
    static const int b = 34;
    std::cout << "The value of static integer b is " << b << std::endl;
    static_cast<int>(b);
}

int main () {
    a = 23;
    for (int i = 0; i < 5; ++i) {
        func();
    }
}