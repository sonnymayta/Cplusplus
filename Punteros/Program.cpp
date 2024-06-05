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

    // Gestión de memoria

    int * int_ptr{nullptr}; // Una buena practica si se inicializa un puntero sin declararlo

    int_ptr = new int; // con "new" asignamos un espacio de memoria en el heap. Mientras que el puntero se almacena en el stack

    cout << int_ptr << endl; // imprime la dirección en memoria que se encuentra en el heap

    cout << &int_ptr << endl; // imprime la dirección en el stack del puntero

    // Ejemplo de liberación de memoria

    int * int_puntero = new int;

    * int_puntero = 10;

    cout << "Valor antes de delete: " << * int_puntero << endl;

    delete int_puntero; // Liberando espacio en la memoria

    cout << int_puntero << endl;

    int_puntero = nullptr; // Aplicando buenas practicas
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

    Memoria
    [segmento de código] [segmento de datos] [stack (pila)] [heap (montón)]

    *stackoverflow: es conocido cuando la pila es sobrepasada.

    La memoria stack es de tipo LIFO (Last In First Out) y es gestionada automaticamente.
    La memoria heap la gestiona el programador.
*/