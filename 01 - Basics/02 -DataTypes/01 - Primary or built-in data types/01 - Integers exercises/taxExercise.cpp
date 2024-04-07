#include <iostream>
using namespace std;

int main()
{
    double sales = 95000;
    const double stateTaxRate = .04;
    const double countyTaxRate = .02;
    double stateTax = sales * stateTaxRate;
    cout << "State tax: $" << stateTax << endl;
    double countyTax = sales * countyTaxRate;
    cout << "County tax: $" << countyTax << endl;
    double totalTax = stateTax + countyTax;
    cout << "Total tax: $" << totalTax << endl;
    double totalSales = sales - totalTax;
    cout << "Total sales after tax: $" << totalSales;

    return 0;
}