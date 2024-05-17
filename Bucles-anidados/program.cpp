#include <iostream>
using namespace std;

int main() 
{
    const int minimo_numero = 1;
    const int maximo_numero = 11;

    for (int i = 1; i < maximo_numero; i++)
    {
        cout << "Tabla del " << i << ":\n";
        for (int j = minimo_numero; j < maximo_numero; j++)
        {
            cout << i << " x " << j << " = " << (i * j) << "\n";
        }    
        cout << endl;    
    }    
}

/*
    Bucles anidados

    Casos de uso:
    - Recorrdio de arrays y vectores anidados
    - Generar conbinaciones
    - Simulaciones con combinaciones
    - Programas de fuerza bruta
    - Renderizado grafico
    - Juegos
    - Algoritmos de ordenamiento
    - Operaciones con cadena
    - Creación de interfaces graficas
    - Etc
*/
