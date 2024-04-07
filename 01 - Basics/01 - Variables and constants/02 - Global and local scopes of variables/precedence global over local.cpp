// What if we have two variables of the same name
// but one is in global scope and other is in local scope
// and we access global variable
// In this case, we use scope resolution operator

#include <iostream>
using std::cout;

//Global x
int x = 10;

int main ()
{
    // Local x
    int x = 20;

    // scope resolution operator
    cout << "The Global variable x is " << ::x;
    cout << "\nThe local variable  x is " << x;

    return  0;
}