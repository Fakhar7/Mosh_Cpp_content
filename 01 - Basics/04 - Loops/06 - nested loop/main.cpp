#include <iostream>

int main() {
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            std::cout << "(" << i << ", " << j << ")" << std::endl;
        }
    }
    return 0;
}
