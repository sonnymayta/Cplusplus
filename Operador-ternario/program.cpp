#include <iostream>
using namespace std;

int main()
{
    int num{}; // Declarar una variable
    cout << "Introduce un numero entero: ";
    cin >> num;

    cout << "El numero " << num << " es " << ((num % 2 == 0) ? "par" : "impar") << endl;
}

/*
    Operador ternario
    (condición a evaluar) ? valor si verdadero: valor si falso
    - Similar a la estructura if-else
    - Todo lo que podemos hacer con if-else los podemos hacer con el operador ternario y viceversa
    - ¿Por que utilizar entonces el operador ternario?
        - Concisión: El operador ternario puede ser conciso y legible cuando se trata de 
        asginaciones condicionales simples. Esto puede ayudar a hacer el código más limpio y
        fácil de leer.
        -Expresión en lugar de sentencia: A diferencia de if, el operador ternario es una expresión,
        no una sentencia. Esto significa que puede ser utilizado en lugares donde se requiere una 
        expresión, como en un asignación, en una llamada a función, o en una sentencia de retorno.
    - Sin embargo, hay que tener en cuenta que el operador ternario puede ser menos legible si la lógica
    condicional es compleja, y que su uso excesivo o inapropiado puede llevar a código difícil de entender. 
    Como con cualquier caracteristica del lenguaje, es importante usarlo con criterio.
*/