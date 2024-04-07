#include <iostream>
//  We can use constants by two ways
//  (1)- macros
//  (2)- const keyword

#define NUM 23  // by using a macro

int main() {
    const int num1 = 24;    // By using a const keyword
    int* ptr = const_cast<int *>(&num1);
    *ptr = 32;
    std::cout << num1 << " and this is value of macro " << NUM ;
    // We cannot change a constant variables

    return 0;
}
