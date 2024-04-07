// local variables are those variables that are created inside a block.
// Global variables are those variables that are created at
// the top of file.

#include <iostream>
using namespace std;

// Global variable
int x = 0;
extern int a;

int main ()
{
    // local variable
    int y = 10;
    cout << "Value of x " << x << endl;
    cout << "Value of y " << y;
    return  0;
}