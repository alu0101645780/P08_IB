/*  */

#include<iostream>
#include<cmath>
using namespace std;

bool AreEqual(const double number1, const double number2, const double epsilon = 1e-7) {

    if (fabs(number1 - number2) <= epsilon) {
        return true;
    } else {
        return false;
    }

}

int main() {

    double n1, n2;
    cin >> n1; cin >> n2;

    cout << AreEqual(n1, n2) << endl;

    return 0;
}