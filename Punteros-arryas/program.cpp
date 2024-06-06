#include <iostream>
using namespace std;

int main()
{
    int cifras[] = {10, 20, 30}; // Un array es básicamente un puntero al primer elemento de un array
    
    cout << cifras << endl;
   
    cout << *cifras << endl;

    int *ptr_cifra = cifras;

    cout << ptr_cifra << endl;

    cout << *ptr_cifra << endl;

    cout << endl;

    // Aritmética de punteros ejemplos

    cout << ptr_cifra[0] << endl;
    cout << ptr_cifra[1] << endl;
    cout << ptr_cifra[2] << endl;

    cout << endl;

    cout << *ptr_cifra << endl;
    cout << *(ptr_cifra + 1) << endl;
    cout << *(ptr_cifra + 2) << endl;
}

/*
    Arrays y punteros
    En C++ un array es básicamente un puntero al primer elemento del array.
    - El valor del nombre del array es la dirección en memoria del primer elemento del array.
    - Cuando se usa el nombre del array sin ningún índice, se obtiene la dirección en memoria
    del pirmer elemento del array.
    - Cuando un puntero apunta al mismo tipo de dato que los elementos de un array, en casi todos
    los escenarios, puedes usar el nombre del puntero y el nombre del array de manera intercambiable
    para realizar operaciones similares, especialmente en lo que respecta a la indexación y aritmética
    de punteros. Sin embargo, el "casi" indica que hay excepcioens a esta regla.

    Aritmética de punteros
    - La aritmética de punteros es un concepto en la programación, especialmente relevante, en
    lenguajes como C y C++, que permite realiar operaciones aritméticas sobre punteros. Los punteros
    son variables que almacenan direcciones de memoria, y la aritmetica de punteros se utiliza 
    para calcular direcciones de memoria, lo que permite acceder y manipular datos de diferentes
    posiciones de array o bloque de memoria.

    Operaciones con punteros
    - Incremento (++): Al incrementar un puntero, se aumenta su valor para que apunte al 
    siguiente elemento de un arreglo. El incremento se realiza en base al tamaño del tipo de dato
    al que apunta el puntero. Por ejemplo, si un puntero de tipo int (suponiendo que int tenga
    un tamaño de 4 bits) apunta al inicio de un arreglo, al incrementar el puntero, este apuntará
    4 bytes delante en memoria, es decir al siguiente entero del arreglo.
    - Decremento (--): Similar al incremento, pero en la dirección opuesta. Al decrementar un puntero,
    se disminuye su valor para que apunte al elemento anterior en un arreglo.
    - Suma (+): Se puede sumar un enetero a un puntero para que el puntero avance varios elementos
    en un arreglo. Al igula que con el incremento, el avance se calcula multiplicando el número 
    entero por el tamaño del tipo de dato al que apunta el puntero.
    - Resta (-): Se puede restar un entero a un puntero para mover el puntero hacia atrás en un
    arreglo. También se puede restar dos punteros para obtener la diferencia en elementos entre 
    ellos, siempre y cuando ambos punteros apunten a elementos dentro del mismo arreglo.

*/