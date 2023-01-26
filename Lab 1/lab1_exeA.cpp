#include <iostream>
using namespace std;

int main(void) {
    int a = 0, b = 0;
    cout << "Please enter a value for variable a: \n";
    cin >> a;
    cout << "Please enter a value for variable b: " << endl;
    cin >> b;
    cout << "The values for a and b are: " << a << " for a, and " << b << " for b.\n";
    cout << "The value of " << a << " % " << b << " is " << a % b << endl;

    return 0;
}
