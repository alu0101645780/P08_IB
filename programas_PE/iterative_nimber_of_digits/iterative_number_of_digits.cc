/* 
	alu0101645780
	11/11/2024
	Write an iterative function that returns the number of digits of a number n.
*/

#include <iostream>
using namespace std;

int number_of_digits(int n) {

    if (n == 0) {
        return 1;
    }

    int count = 0;

    while (n != 0) {
        n /= 10;
        count++;
    }

    return count;
}

int main() {
    int num;
    cin >> num;

    cout << number_of_digits(num) << endl;

    return 0;
}
