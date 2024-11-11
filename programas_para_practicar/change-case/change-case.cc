/*  08/11/2024 
    alu0101645780
Escriba un programa change-case.ccque tome como entrada una cadena de caracteres sin espacios e imprima como salida la misma cadena convirtiendo los caracteres que sean letras mayúsculas por minúsculas y viceversa. Los caracteres que no sean letras mayúsculas ni minúsculas deberán permanecer inalterados. Desarrolle su programa de forma que incluya como mínimo dos funciones y realice un diseño tal que el programa se organice en más de un fichero de código fuente (*.cc). */

#include<iostream>
#include<string>
#include"funcion-cambia-cadena.h"
using namespace std;

int main() {

    string cadena, resultado;
    cin >> cadena;

    resultado = CambiarCadena(cadena);
    cout << resultado << endl;

	return 0;
}