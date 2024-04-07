#include <stdio.h>

int main(void ) {
    const int a = 23;
    int* ptr = &a;
    *ptr = 34;
    printf("The new value of a is %d", a);
}