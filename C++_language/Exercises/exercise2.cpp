#include<iostream>
/*sales=$95,000
*state tax = 4%
*country tax = 2%
*/
using namespace std;
int main(){
    double sales = 95000;
    cout << "Sales: $" << sales << endl;

    const double stateTaxRate = .04;
    double stateTax = sales * stateTaxRate;
    cout << "State Tax: $" << stateTax << endl;

    const double countryTaxRate = .02;
    double countryTax = stateTax * countryTaxRate;
    cout << "Country Tax: $" << countryTax << endl;

    double totalTax = stateTax + countryTax;
    cout << "Total Tax: $" << totalTax;
    return 0;
}