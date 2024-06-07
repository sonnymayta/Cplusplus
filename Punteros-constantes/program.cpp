#include <iostream>
using namespace std;

int main()
{
    // Punteros a constantes
    const int constante_a = 10;

    const int constante_b = 20;

    const int *ptr = &constante_a;

    cout << *ptr << endl;

    // *ptr = 20; no complila

    ptr = &constante_b;

    cout << *ptr << endl;

    // Punteros constantes
    int variable = 10;

    int variable_extra = 30;

    int *const ptr_const = &variable; // Debe ser declarado e inicializado al mismo tiempo

    cout << *ptr_const << endl;

    *ptr_const = 20;

    cout << *ptr_const << endl;

    // ptr_const = & variable_extra; no compila

    // Puntero constante que apunte a una constante

    const int valor_constante = 50;

    const int *const ptr_const_const = &valor_constante;

    cout << *ptr_const_const << endl;

    // *ptr_const_const = 20; no compila

    // ptr_const_const = &constante_a; no compila
}

/*
    Punteros a constantes
    - Punteros que apuntan a un valor constante. Esto significa que el valor al que apunta
    no puede ser modificado através del puntero, aunque el puntero en si puede cambiar y 
    apuntar a otra dirección.

    Punteros constantes
    - Punteros cuya dirección de la memoria no puede cambiar después de su inizialización; sin
    embargo, el valor al que apuntan si puede ser modificado, a menos que también sea constante.

    Punteros constantes a constantes
    - Puntero que no puede cambiar la dirección al que apunta ni modificar el valor almacenado en
    esa dirección.
*/