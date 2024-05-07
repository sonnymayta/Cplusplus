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

    char idioma, categoria;
    cout << "Menú de productos" << endl;
    cout << "Selección de idioma\nE - Para Español\nI - Para Ingles" << endl;
    cout << "Ingrese la letra de la opción requerida: ";
    cin >> idioma; 

    switch (idioma)
    {
    case 'E':
    case 'e':
        cout << "Seleccione la categoria\nL - Para libros\nR - para ropa\nT - Para tecnología" << endl;
        cout << "Ingrese la letra de la opción requerida: ";
        cin >> categoria;
        switch (categoria)
        {
        case 'L':
        case 'l':
            cout << "Ha seleccionado la categoría libros" << endl;
            break;
        case 'R':
        case 'r':
            cout << "Ha seleccionado la categoría ropa" << endl;
            break;
        case 'T':
        case 't':
            cout << "Ha seleccionado la categoría tecnología" << endl;
            break;
        default:
            cout << "Opción no valida" << endl;
            break;
        }
        break;
    case 'I':
    case 'i':
        cout << "Select the category\nB - For books\nC - For clothes\nT - For tecnology" << endl;
        cout << "Enter the letter of the option required; ";
        cin >> categoria;
        switch (categoria)
        {
        case 'B':
        case 'b':
            cout << "You have selected the books category" << endl;
            break;
        case 'C':
        case 'c':
            cout << "You have selected the clothes category" << endl;
            break;
        case 'T':
        case 't':
            cout << "You have selected the tecnology category" << endl;
            break;
        default:
            cout << "Invalid option" << endl;
            break;
        }
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
