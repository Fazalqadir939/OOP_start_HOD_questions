#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
    Fraction f1(3, 4);
    Fraction f2(2, 5);

    cout<< f1 << '\n';
    cout<< f2 << '\n';

    
    cout << f1 + f2 << '\n';
    cout << f1 - f2 << '\n';
    cout << f1 * f2 << '\n';
    cout << f1 / f2 << '\n';

    cout << "f1 < f2:  " << (f1 < f2) << '\n';
    cout << "f1 > f2:  " << (f1 > f2) << '\n';
    cout << "f1 == f2: " << (f1 == f2) << '\n';

    Fraction f3;
    f3 = f1;
    cout << "f3 = f1: " << f3 << '\n';

    cout << "++f1: " << ++f1 << '\n';
    cout << "f1 after incremnt: " << f1 << '\n';

    cout << "f2++: " << f2++ << '\n';

    Fraction f4;
    cout << "Enter a fraction (numerator/denominator): ";
    cin >> f4;
    return 0;
}