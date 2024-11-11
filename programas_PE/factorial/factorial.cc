/*
    alu0101645780
    11/11/2024
    Write an iterative function that, given a natural n, returns its factorial n!.
*/

#include <iostream>
using namespace std;

int factorial(int n) {
    int resultado = 1;
    
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    
    return resultado;
}

int main() {
    int n;
    cin >> n;
    
    cout << factorial(n) << endl;
    return 0;
}

