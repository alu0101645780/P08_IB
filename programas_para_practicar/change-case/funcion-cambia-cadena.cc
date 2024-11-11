#include"funcion-cambia-letra.h"
#include"funcion-cambia-cadena.h"
#include<string>
using namespace std;

string CambiarCadena(string cadena) {

string resultado;

	for (int i{0}; i <= cadena.length(); i++) {
		resultado += CambiarLetra(cadena[i]);
	}
return resultado;
}