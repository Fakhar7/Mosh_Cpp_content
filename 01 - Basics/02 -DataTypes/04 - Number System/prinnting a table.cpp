#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout << left;
    cout << setw(20) << "Course" << setw(10) <<  "Students" << endl;
    cout << setw(20) << "C++" << right << setw(10) << 100 << endl << left
         << setw(20) << "Javascript" << right << setw(10) << 50;
    cin.get();
    cin.get();
}