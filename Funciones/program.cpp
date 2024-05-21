#include <iostream>
#include <cmath>
using namespace std;

double potencia_elevada(double base, double exponente)
{
    return pow(base, exponente);
}

int main() 
{
    cout << "El resultado es: " << potencia_elevada(5, 2) << endl;
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
*/