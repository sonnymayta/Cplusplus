#include <iostream>
using namespace std;
int main()
{
    const string nombre = "Carla"; // constante
    cout << "Mi nombre es " + nombre << endl;
}
/*
    Constantes
    - Una constante es un espacio de la memoria del ordenador donde se almacenaran un valor que
    no podra cambiar (variar) durante la ejecución de un programa.
    - Las constantes en C++ tiene tipo. C++ es un lenguaje fuertemente tipado.
    - Las constantes se deben declarar e inicializar al mismo tiempo.

    Tipos de constantes en C++
    - Constantes literales (\n \t \b)
    - Constantes declaradas (palabra reservada const)
    - Expreciones constantes (palabra reservada constexpr)
    - Constantes enumeradas (palabra reservada enum)
    - Constantes definidas (Directiva #define (obsoleto))
*/