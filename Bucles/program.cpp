#include <iostream>
#include <vector>
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

    // Bucle for-each

    int edades [] {22, 23, 55, 41, 29};
    
    // for (auto a : array) -> auto usa la inferencia de tipos (determina el tipo de dato)
    for (int e : edades)
    {
        cout << e << " ";
    }

    cout << endl;

    string direccion = "www.google.com";

    for (auto d : direccion) 
    {
        if (d == 'l')
        {
            cout << "Se encontro una l en el texto" << endl;
        }        
    }

    vector<int> numeros;
    int num;

    cout << "Introduce varios números. Escribe 0 para salir" << endl;

    while (cin >> num && num != 0)
    {
        numeros.push_back(num);
    }

    cout << "Has introducido los siguientes numeros" << endl;

    for (int n : numeros)
    {
        cout << n << endl;
    }
    
    // Bucle while

    int i {1};

    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            cout << i << " es par" << endl;
        }     
        i++;   
    }  

    int valor, suma = 0;

    cout << "\nIntroduce varios numeros. Escribe 0 para salir" << endl;
    while (cin >> valor && valor != 0)
    {
        suma = suma + valor;
    }
    
    cout << "La suma de los numeros es: " << suma << endl;
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

    Bucle for-each:
    Utlizado para recorrer colecciones, como los arrays o los contenedores (vector, list, set,
    map, etc)

    Bucle while:
    Utilizado cuando necesitas realizar una operación un número indeterminado de veces y la condición
    de parada depende de algún cálculo o entrada del usuario que ocurre dentro del bucle.

*/