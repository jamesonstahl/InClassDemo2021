#include <iostream>
#include <math.h>

using namespace std;

void power(double base, int exp){
    cout << pow(base, exp) << endl;
}

int main(int argc, const char * argv[]) {
    double base;
    int exp;
    cout << "Enter a value to be raised to an exponent: ";
    cin >> base;
    cout << "Enter a value to be the exponent: ";
    cin >> exp;
    power(base, exp);

    return 0;
}