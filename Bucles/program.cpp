#include <iostream>
using namespace std;

int main() 
{
    // Bucle for
    for (int i = 0; i < 10; i++)
    {
        cout << "Hola mundo!" << endl;
    }
    
    int array[3][5] = {{8, 6, 9, 1, 4}, {5, 3, 4, 3, 1}, {5, 3, 6, 2, 7}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "[" << array[i][j] << "]";
        }   
        cout << endl;     
    }
    
}
/*
    Bucles
    - Estructuras fundamentales de programación
    - Surgen por la necesidad de ejecutar varias veces el mismo código en un programa
    - Los bucles están formados por una cabecera y cuerpo
    - Cabecera: contiene la condición del bucle
    - Cuerpo: contiene el código a repetir

    Tipos
    - Determinado: Sabemos antes de ejecutar el programa, cuantas veces se ejecutara el código
    de su interior.
        - En C++ suelen ser bucles "for"

    - Indeterminado: No sabemos hasta ejecutar el programa cuántas veces se ejecutará el código
    de su interior.
        - En C++ suelen ser bucles "while" y "do-while"
*/