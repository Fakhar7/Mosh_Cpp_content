#include <iostream>

int main() {
    int number;
    do {
        std::cout << "Number: ";
        std::cin >> number;
    } while (number < 1 || number > 5);
    return 0;
}
