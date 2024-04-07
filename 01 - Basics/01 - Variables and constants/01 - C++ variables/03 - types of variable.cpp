// There are three types of variables in cpp
// 1- Local variables
// 2- Instance variables
// 3- Static variables

/*
Local Variables: A variable defined within a block or method or constructor is called a local variable.
(1)-    These variables are created when entered into the block
        or the function is called and destroyed after exiting from the block
        or when the call returns from the function.
(2)-    The scope of these variables exists only within the
        block in which the variable is declared. i.e.
        we can access this variable only within that block.
(3)-    Initialization of Local Variable is Mandatory.



Instance Variables: Instance variables are non-static variables and are declared in a class
outside any method, constructor, or block.
(1)-    As instance variables are declared in a class,
        these variables are created when an object of the class is created and
        destroyed when the object is destroyed.
(2)-    Unlike local variables, we may use access specifiers for instance variables.
        If we do not specify any access specifier then the default access specifier will be used.
(3)-    Initialization of Instance Variable is not Mandatory.
(4)-    Instance Variable can be accessed only by creating objects.


 Static Variables: Static variables are also known as Class variables.
(1) -   These variables are declared similarly as instance variables,
        the difference is that static variables are declared using the static keyword
        within a class outside any method constructor or block.
(2)-    Unlike instance variables, we can only have one copy
        of a static variable per class irrespective of how many objects we create.
(3)-    Static variables are created at the start of program execution and destroyed automatically when execution ends.
(4)-    Initialization of Static Variable is not Mandatory. Its default value is 0
(5)-    If we access the static variable like the Instance variable (through an object),
        the compiler will show the warning message, and it won’t halt the program.
        The compiler will replace the object name with the class name automatically.
(6)-    If we access the static variable without the class name,
        the Compiler will automatically append the class name.
 */

#include <iostream>

class Example
{
    public:
        static int a; // Static Variable
        int b;      // instance Variable
};

int Example::a = 23;



int main () {
    Example obj1.b;
    // we can access static integer directly by using a class name
    std::cout << Example::a;
    std::cout << obj1
}
