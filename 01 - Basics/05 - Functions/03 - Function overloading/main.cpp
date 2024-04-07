#include <iostream>
using namespace std;

// Remember that whenever overloading a function
// then both function should have unique signature
void greet (string name) {
    cout << "Hello " << name;
}

void greet (string title, string name) {
        cout << "Hello" << title << " " << name;
}

int main() {
    greet("Mr", "Mosh");
    return 0;
}
