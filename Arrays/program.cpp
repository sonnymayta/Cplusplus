#include <iostream>
using namespace std;

int main() 
{
    const int personas = 10;
    int edades[personas] {12, 21, 35, 40};

    cout << edades[1] << endl; // Acceder a una posición del array

    edades[7] = 55; // Asignar un valor a una pocisión o reescribirlo

    cout << edades[7] << endl;

    // edades[1] = 22;

    // cin >> edades[1]; // Modificar el valor de la segunda pocisión de edades

    cout << edades[1] << endl;

    int mi_matriz [2][3] = {9, 2, 3, 4, 5, 6};

    cout << mi_matriz[0][0] << endl; 

    mi_matriz[0][0] = 1; // Remplazamos el valor de la posición 0-0

    cout << mi_matriz[0][0] << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "[" << mi_matriz[i][j] << "] ";
        }
        cout << endl;        
    }
    
}
/*
    Arrays
    - Es una estructura de datos que contiene una coleción de valores del mismo tipo.
    - Sirven para almacenar valores que normalmente tiene alguna relación entre sí.
    - Su sintaxis en C++ es: int mi_matriz[n];

    Declaraciones:
    int mi_matriz[5] {15, 24, 4, -5}; [15][24][4][-5]
    
    int mi_matriz[5] {15, 24} [15][24][0][0]

    const double salario {20}; 
    double mi_matriz[salario] {2700,35} [2700,35][2700,35][2700,35][2700,35]...

    int mi_matriz[] {15, 14, 23, 4}; [15][14][23][4]

    Se enumera las posiciones de los arrays desde 0 a n-1 donde n es el tamaño del array.

    Arrays bidimensionales

    int mi_matriz [4][5] = {15, 2, 4, ... 2};
    int mi_matriz [4][5] = {
        {15, 2, 4, 23, 4}
        .
        .        
        {32, 4, 5, 6, 7}
    }; Donde: 4 es el numero de filas y 5 son las columnas
    Dicho de otra forma 4 es la canidad de arryas agrupados y 5 es la cantidad de valores de cada
    array

    Almacenar individualmente

    mi_matriz [0][0] = 15;
    mi_matriz [n][n] = ...
*/