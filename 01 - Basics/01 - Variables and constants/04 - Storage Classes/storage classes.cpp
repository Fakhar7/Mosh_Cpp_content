// C++ storage classes are used to describe the characteristics of a variable or function.

// It determines the lifetime, visibility, default value and storage location
// which help us to trace the existence of a particular variable during the
// runtime of a program.

// Syntax:
//      storage_class var_data_type var_name;

/*
    C++ uses 6 storage classes.

    * auto storage class
    * register storage class
    * extern storage class
    * static storage class
    * mutable storage class
    * thread_local storage class

 */

#include <iostream>
#include <typeinfo>
using namespace std;

int main ()
{
    auto a = 23.09f;
    char b = 'a';
    cout << "sizeof a" << " is " << sizeof a << endl;
    cout << "sizeof b" << " is " << sizeof b << endl;
    cout << typeid(a).name();
}