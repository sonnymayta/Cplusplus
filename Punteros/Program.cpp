#include <iostream>
using namespace std;

int valor = 15;

void modificarValor(int * valor)
{
    * valor = * valor + 10;
}

int main()
{
    int var = 10;

    // Declaración de un puntero
    int * ptr;

    ptr = &var;

    cout << var << endl; // Imprimier el valor de var

    cout << &var << endl; // Imprimir la dirección en la memoria de var

    cout << ptr << endl; // Imprimir la dirección almacenanda en el puntero ptr

    cout << *ptr << endl; // Imprimir el valor apuntado por el puntero

    *ptr = 55;

    cout << var << endl; // Modifico el valor de var desde su puntero

    // Puntero con funciones

    modificarValor(&valor);
    
    cout << valor << endl;
}

/*
    PUNTEROS

    ¿Qué son?
    Los punteros son una caracteristica en C++ que permite una gestión eficiente y detallada de la 
    memoria y otros recursosdel hardware. Los punteros son variables cuya función principal es 
    almacenar direcciones de memoria.

    ¿Qué puede haber en las direcciones de memoria por los punteros?
    - Variables primarias
    - Arrays
    - Clases
    - Otros punteros
    - Funciones
    - Bloque de memoria dinámica
    - Bloque de memoria reservado

    ¿Para qué sirven los puntero?
    - Acceso directo y modificación de la memoria
    - Funciones dinámicas y estructura de datos
    - Paso de parámetros por referencia
    - Arryas y Strings
    - Programación de bajo nivel

    Punteros vs No punteros
    - Control directo de la memoria            - Más simplicidad en el desarrollo
    - Flexibilidad en el manejo de datos       - Mayor seguridad
    - Interacción con hardware a bajo nivel    - Menor preocupación por fallos de memoria
    - Paso de parámetros por referencia
    - Compatibilidad con C
*/