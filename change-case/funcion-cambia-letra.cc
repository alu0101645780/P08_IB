#include "funcion-cambia-letra.h"
#include<cctype>

char CambiarLetra(char c) {

    if (isalpha(c)) {
        if (isupper(c)) {
            return tolower(c);
        } else {
            return toupper(c);
        }
    } 
    return c;
}