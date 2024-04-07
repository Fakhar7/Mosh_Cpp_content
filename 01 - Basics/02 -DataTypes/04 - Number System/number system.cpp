// There are four number system
// 1- Decimal number system
// 2- Binary number system
// 3- Octal number system
// 4- Hexadecimal number system

#include <iostream>
using namespace std;

int main()
{
    int decimal = 255;      // This is decimal number
    int binary = 0b11111111;    // This is a binary number
    int octal = 0377;     // This is octal number
    int hexadecimal = 0xFF;     // This is a hexadecimal number

    cout << decimal << endl << binary << endl << octal << endl << hexadecimal;
}