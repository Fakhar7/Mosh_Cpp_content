#include <iostream>
using namespace std;

void increasePrice (double& price) {
  price *= 1.2;
}

void increase_Price(double* price) {
  *price *= 1.2;
}

int main() {

  // In common scenario, the value is copied by function
  // But in case of large values, we have to pass a value by reference

  // One way to pass pointer to function, which is modern way
  double price = 100;
  increasePrice(price);
 
  // The other way is 
  double price2 = 200;
  increase_Price(&price2);

  cout << price << ", " << price2;  

  return 0;
}