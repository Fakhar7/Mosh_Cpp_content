#include <iostream>
using namespace std;

int main()
{
    int tempratures[] = {23, 34, 43, 54, 65};
    double count = sizeof (tempratures) / sizeof (int);
    double averageTemp = 0;
    for (int temp: tempratures)
        averageTemp += temp;
    cout << averageTemp / count;
}