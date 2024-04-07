// Logical operators are used to handle boolean expression
// and their result

#include <iostream>
using namespace std;

int main()
{
    /*There are three types of logical operators
    1- ! operator
     It is used, if boolean value is true, then it will become false
    2- && operator
     It is give output, if both then the output will be true.
     Otherwise, It will false.
    3- || operator
     If at least, one of value is true, then it will return true value
*/

    int a = true;
    int b = false;
    bool result = a && !b;
    cout << boolalpha << result;

}