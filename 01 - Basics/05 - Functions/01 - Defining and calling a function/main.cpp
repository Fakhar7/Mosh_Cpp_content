#include <iostream>
using namespace std;

/* Function Declaration and defining
    return_data_type func_name (parameter_data_type)
    {
        ... CODE TO BE EXECUTED
    }
*/

void greet(string name) {
    cout << "Hello " << name;
}

string name (string firstname, string lastname) {
    return firstname + " " + lastname;
}

int main()
{
    greet(name("Fakhar", "Sultan"));
}