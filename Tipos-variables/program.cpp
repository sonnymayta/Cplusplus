#include <iostream>
using namespace std;

int main() {
    int salario = 3500; // declaración e inicialización de la variable
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

    Reglas de la declaración de variables
    - Primer caracter debe ser una letra o guion bajo
    - No se permiten espacios en blanco
    - Intentar no crear nombres con muchos caracteres
    - evitar utilizar caracteres de tipo $
    - No utilizar palabras reservadas
    - No se pueden declarar la misma variable 2 veces con el mismo nombre en el mismo ambito
    - C++ es case sensitive
    
    Buenas practicas
    - Coherente con tus propias convenciones
    - Utiliza nombres descriptivos, ni demasiado cortos ni demasiado largos
    - Intentar declarar variables cercanas a la zona de uso
    - Evitar nombres de variables que comiencen por guion bajo

    Inicialización de variables
    - int z; Sin inicializar
    - int z = 5; Inicialización tradicional
    - int z (5); Inicialización de constructor
    - int < {5}; Inicialización de lista
*/