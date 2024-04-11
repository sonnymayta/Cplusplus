#include <iostream>
using namespace std;

int main() {
    int salario = 3500; // declarar e iniciar una variable
    cout << salario << endl;
    salario = 4000;
    cout << salario << endl;
}
/*
    Tipos de datos

    Caracteres
        char, char8_t, char16_t, char32_t, wchar_t 
    Enteros
        short, int, log, long long / unsigned: que no llevan valores negativos pero duplican la capacidad
    Decimales
        float, double, long double
    Booleanos
        bool (true / false)
        0 es falso
        cualquier otro numero es verdadero

    Las variables en C++ tienen tipo. C++ es un lenguaje fuertemente tipado.
    Las variables se deben declarar (crear) siempre antes de utilizarlas.
*/