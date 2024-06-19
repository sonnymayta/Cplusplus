#include <iostream>
#include <utility> // para std::move
using namespace std;

void funcionL(int &valor) // L-value
{
    valor += 5;
}

void funcionR(int &&valor) // R-value
{
    valor += 5;
}

int main() 
{
    int a = 15;
    funcionL(a);
    cout << "El valor de a es: " << a << endl;
     funcionR(move(a)); // convierte un valor que es left-value a right-value
    cout << "El valor de a es: " << a << endl;

    string s1 = "Palabra";
    string s2 = move(s1);
    cout << "El contenido de s1: " << s1 << endl;
    cout << "El contenido de s2: " << s2 << endl;
}

/*
    L-VALUES

    Un L-value (left value) es una expresión que representa una ubicación en memoria. Esto 
    significa que un L-value tiene una dirección de memoria asociada.
    
    Caracteristicas:
    - Puede aparecer en el lado izquierdo de una asignación.
    - Puede er modificado.
    - Puede incluir variables, referencias y des-referencias de punteros.

    R-VALUES

    Un R-value (right value) es una expresión que representa el valor temporal que no tiene una
    ubicación en memoria presistente. Se trata de datos que están "a la derecha" de una asignación.

    Caracteristicas:
    - No puede aparecer al lado izquierdo de una asignación (excepto de referencia a R-values o 
    con movimientos).
    - Es temporal y suele ser destruido al final de la expresión en la que aparece.
*/