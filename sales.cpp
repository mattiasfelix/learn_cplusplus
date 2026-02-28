#include <iostream>

using namespace std;

int main()
{

	int sales = 95000;
	double stateTax = sales * 0.04;
	double countyTax = sales * 0.02;
	double totalTax = stateTax + countyTax;

	cout << "My total sales is $" << sales << ".\n";
	cout << "My State Tax is $" << stateTax << ", and my County Tax is $" << countyTax << ".\n";
	cout << "I'v paid $" << totalTax << " in total for Tax revenue.\n";

	return 0;
}