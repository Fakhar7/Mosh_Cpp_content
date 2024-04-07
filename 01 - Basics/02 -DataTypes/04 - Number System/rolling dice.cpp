#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const short minValue = 1;
    const short maxValue = 6;
    int first = (rand() % (maxValue - minValue + 1)) + minValue;
    int second = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << first << ", " << second;

    return 0;
}