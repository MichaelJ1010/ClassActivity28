#include <sstream>
#include <iostream>
#include <iomanip>


using namespace std;


namespace convert {
    void doubleToString(const double& number, short decimalPlaces) {
        stringstream stream;
        stream << fixed << setprecision(decimalPlaces) << number;
        string str = stream.str();
        cout << str << endl;
    }
}