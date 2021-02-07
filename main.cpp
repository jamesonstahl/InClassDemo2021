#include <iostream>
#include <math.h>

using namespace std;

int power(int base, int exp){
    return pow(base, exp);
}

int main(int argc, const char * argv[]) {
    int base;
    int exp;
    cout << "Enter a value to be raised to an exponent: ";
    cin >> base;
    cout << "Enter a value to be the exponent: ";
    cin >> exp;
    cout << power(base, exp) << endl;

    return 0;
}