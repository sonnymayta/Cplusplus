#include <iostream>
using namespace std;

int main()
{
    int opcion, a, b;

    cout << "Menú de opciones" << endl;
    cout << "1 - Para mostar mensaje 1\n2 - Para realizar la suma de dos numeros\n3 - Para salir del programa" << endl;
    cout << "Ingrese un el numero de la opción requerida: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Mensaje 1" << endl;
        break;
    case 2:
        cout << "Ingrese los numeros a sumar: " << endl;
        cin >> a >> b;
        cout << "El resultado es: " << (a + b) << endl;
        break;
    case 3:
        cout << "Saliendo del programa..." << endl;
        break;
    
    default:
        cout << "Opción no valida" << endl;
        break;
    }
}

/*
    La instrucción swtich-case es una instrucción condicional especialmente útil cuando se necesita
    realizar acciones específicas según el valor de la variable, sin la necesidad de encadenar 
    múltiples sentencias if-else.

    Ejemplos 
    - Menús de opciones
    - Máquinas de estados finitos
    - Implementación de un interprete de comandos

    Importante:
    En C++ switch-case sólo funciona comparado tipos enteros (int, char, long, etc.) No se puede
    utilizar para compara cadenas de caracteres (string) directamente, pero es posible hacerlo
    usando un mapa de hash o alguna otra estructura auxiliar.
*/
