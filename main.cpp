#include <sstream>
#include <iostream>
#include <iomanip>
#include "./doubleToString.hpp"

using namespace convert;
using std::cout, std::cin, std::endl;

int main() {
	double value;
	short decimalNumber;
	cout << "please enter a double value: ";
	cin >> value;
	cout << "\nHow many decimal points do you want?" << endl;
	cin >> decimalNumber;
	doubleToString(value, decimalNumber);

	return 0;
}