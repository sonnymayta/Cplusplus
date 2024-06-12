#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // Desreferenciación de punteros nulos
    int *ptr_a = nullptr;
    if (ptr_a != nullptr)
    {
        *ptr_a = 10;
    }
    
    // Fugas de memoria
    int *ptr_b = new int[10]; // asigna
    delete[] ptr_b; // liberar
    ptr_b = new int [20]; // asigna
    delete[] ptr_b; // liberar

    // Desbordamiento del buffer
    int array[5];
    for (int i = 0; i <= 5; i++)
    {
        array[i];
    }

    // Doble liberación
    int *ptr_c = new int;
    delete ptr_c;

    if (ptr_c != nullptr) delete ptr_c;    
    
    // Punteros colgantes
    int *ptr_d = new int(10);
    delete ptr_d;
    ptr_d = nullptr;
    if (ptr_d != nullptr) *ptr_d = 5;

    // Violación de acceso
    int valores[5] = {0, 1, 2, 3, 4};
    int *ptr_e = &valores[5];
    int valor = *ptr_e;    
}
/*
    Problema de punteros (Pointer Pitfalls)
    - Desreferenciación de punteros nulos.
    - Fugas de memoria (Memory leaks).
    - Desbordamiento de buffer (Buffer overflow).
    - Doble liberación (Double free).
    - Punteros colgantes (Dangling pointers).
    - Violación de acceso (Access violation).    
*/