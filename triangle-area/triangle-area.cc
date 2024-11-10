/* Escriba un programa triangle-area.cc que tome como entrada las longitudes a, b y cde los lados de un triángulo y calcule su área utilizando la Fórmula de Herón. Diseñe una función cuyo nombre sea Area, que implemente ese cálculo. */

#include<iostream>
using namespace std;

bool IsAValidTriangle(const double a, const double b, const double c) {

	if ((a > (b + c)) || (b > (a + c)) || (c > (a + b))) {
		return 0;
	} else {
		return 1;
	}

}

double Area(const double a, const double b, const double c) {

	return ((a + b + c) / 2);

}

int main() {

	double a, b, c;
	cin >> a; cin >> b; cin >> c;

	if (IsAValidTriangle(a, b, c)) {
		cout << Area(a, b, c) << endl;
	} else {
		cout << "ERROR: cada uno de los lados no puede ser más largo que la suma de los otros dos." << endl;
	}

    return 0;
}