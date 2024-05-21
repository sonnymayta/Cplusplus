#include <iostream>
#include <cmath>
using namespace std;

double potencia_elevada(double base, double exponente); // funcion prototipo
void saludo();

// Tener el cuenta el flujo de ejecution con las funciones normales en C++

int main() 
{
    double base, exponente;
    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponenete: ";
    cin >> exponente;
    cout << "El resultado es: " << potencia_elevada(base, exponente) << endl;

    saludo();
}

// Funcion que devuleve un valor
double potencia_elevada(double base, double exponente)
{
    return pow(base, exponente);
}

// Funcion que no devuelve nada
void saludo() 
{
    cout << "Hola" << endl;
}
/*
    Funciones 
    - ¿Que es una función?: Una función es un bloque de código identificado con un nombre que 
    realiza un tarea especifica y puede tomar opcionalmente datos de entrada y devolver un resultado.
    - ¿Para qué sirve una función?: 
        - Reutilización de código
        - Modularidad
        - Abstracción (no necesitas saber como funciona solo saber que puden hacer con el)
        - Reducción de errores
        - Flexibilidad
    - Tipos de funciones
        - Definidas por el lenguaje. En la biblioteca Standard de C++
        - Definidas por el usuario. Funciones creadas por el programador

    Nota: Las declaración de las variables tiene un ambito de utilización. Los bloques donde fueron
    declaradas.

    - Prototipos: Un prototipo de función es una declaración previa de una función que informa
    al compilador de que se utilizará en el programa esa función, así como su tipo y número
    de parámetros y si la función devolvera o no un valor.

    - ¿Como decirle al compilador que vamos a usar una función?
        - En programas pequeños OK, pero en programas grandes en un problema.
        - Usando funciones prototipos:
            - Especifican al compilador que funciones se va utilizar en el programa así como de su
            parámetros y tipos y si la funcion devolvera valor o no.
            - Se colocan al comienzo del programa. (No es estrictamente necesario que así sea pero 
            por convención suele ser su lugar)
            - Admiten la posibilidad de crearlas en archivos externos. (extensiones .h / hpp)
*/