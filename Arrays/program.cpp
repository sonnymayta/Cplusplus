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

    cin >> edades[1]; // Modificar el valor de la segunda pocisión de edades

    cout << edades[1] << endl;
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
*/