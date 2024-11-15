/*
    alu0101645780
    11/11/2024
    Write a function that tells if the date defined by a day d, month m and year y is valid or not.
*/

#include <iostream>
using namespace std;

bool is_valid_date(int d, int m, int y) {
    
    if (y < 1800 || y > 9999) {
        return false;
    }

    if (m < 1 || m > 12) {
        return false;
    }

    int days_in_month = 0;
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days_in_month = 31;
            break;
        case 4: case 6: case 9: case 11:
            days_in_month = 30;
            break;
        case 2:
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
                days_in_month = 29;  // Año bisiesto
            } else {
                days_in_month = 28;  // Año no bisiesto
            }
            break;
        default:
            return false;
    }

    return d >= 1 && d <= days_in_month;
}

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    cout << is_valid_date(day, month, year) << endl;
    return 0;
}

