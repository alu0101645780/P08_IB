/* Desarrolle un programa random_numbers.cc que tome como entrada dos números naturales n y m tales que n < m y genere un número aleatorio real r en el intervalo [n, m]. */

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int RandomNumber() {
    int n, m;
    cin >> n >> m;

    if (n >= m) {
        cout << "n ha de ser menor estricto que m." << endl;
        return -1;
    }

    return n + rand() % (m - n + 1);
}

int main() {

    srand(static_cast<unsigned int>(time(0)));
    int result = RandomNumber();
    
    if (result != -1) {
        cout << "Número aleatorio: " << result << endl;
    }

    return 0;
}

