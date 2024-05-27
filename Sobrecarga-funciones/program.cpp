#include <iostream>
using namespace std;

    int sumar(int a, int b)
    {
        return a + b;
    }

    int sumar(int a, int b, int c)
    {
        return a + b;
    }

    float sumar(float a, float b)
    {
        return a + b;
    }

int main()
{
    cout << sumar(3, 4) << endl;
    cout << sumar(1, 2, 3) << endl;
    cout << sumar(2.0f, 3.5f) << endl;
}

/*
    Sobrecarga de funciones

    - La sobrecarga de funciones es uno de los aspectos fundamentales de la programación 
    orientada a objetos en C++.
    - Se refiere a la capacidad de definir múltiples funciones con el mismo nombre pero con
    diferentes listas de parametros.
    - Esta caracteristica permite que los programadores utilicen el mismo nombre de función para
    realizar tareas similares, diferenciando cada función por los tipos y/o el número de sus 
    argumentos.

    Utilidades
    - Legibilidad del código
    - Abstracción
    - Flexibilidad
    - Polimorfismo
    - Reutilización de código
    - Más intuitivo

    Cuidado
    Es muy importante usar la sobre carga de funciones con cuidado para evitar confusiones y 
    ambigüedades en el código. Un uso inapropiado puede llevar a errores y complicaciones difíciles de
    detectar. Por lo tanto, es crucial garantizar que las funciones sobrecargadas tengan una relación
    lógica y clara entre sí.

    Tener en cuenta
    - Diferente lista de parámetros: n° de parámetros, tipo de parámetros, secuencia de tipo de 
    parámetros.
    - El tipo devuelto por la función no influye
    - Cuidado con funciones con valores predeterminados

    Relevancia en POO
    - Sobrecarga de constructores
    - Polimorfismo
    - Encapsulación y abstración
    - Organización y legibilidad
    - Extensibilidad
*/