#include <iostream>

using namespace std;

void square(int x){
    cout << (x * x) << endl;
}

int main(int argc, const char * argv[]) {
    int x;
    cout << "Enter a value to be squared: ";
    cin >> x;
    square(x);

    return 0;
}