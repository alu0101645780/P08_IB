/* 08/11/2024
   alu0101645780
*/

#include<iostream>
#include<cmath>
using namespace std;

float CalcularFuncion(float x, float y, float t) {

	return sqrt((2 * t) - 4) / (pow(x, 2) - pow(y ,2));

}

int main() {

	float x, y, t;
	cin >> x; cin >> y; cin >> t;

	cout << CalcularFuncion(x, y, t) << endl;

	return 0;
}
