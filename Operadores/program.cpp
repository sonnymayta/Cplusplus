#include <iostream>
using namespace std;

int main() {
    // asignación
    int a = 5;
    int b = 10;
    a+=b;
    cout << "El valor de a es: " << a << endl;
    a*=b;
    cout << "El valor de a es: " << a << endl;
    a-=b;
    cout << "El valor de a es: " << a << endl;
    a/=b;
    cout << "El valor de a es: " << a << endl;    

    // aritméticos
    int x = 5;
    int y = 10;
    int z = ++x;
    cout << "\nEl valor de z es: " << z << endl;
    cout << "El valor de x es: " << x << endl;

    int w = y++;
    cout << "El valor de w es: " << w << endl;
    cout << "El valor de y es: " << y << endl;

    int m = 3; 
    float n = 4.0f;
    double o = 8.0;

    auto resultado = m + n; // Deduce su tipo por el valor almacenado 

    cout << typeid(resultado).name() << endl; // Imprime el tipo de dato

    double media = (10 + 12.0 + 30) / 3;

    /*
        C++ no toma en cuenta el tipo de dato donde se almacenara el resultado. La operación 
        seguira la regla de generar el tipo de dato del resultado en base al tipo de dato operado
        que tenga mayor amplitud o precisión.
    */
    
    cout << "La media de los 3 valores es: " << media << endl;

    // Condicionales

    int edad;

    cout << "Por favor, introduce tu edad: ";
    cin >> edad;

    if (edad < 18)
    {
        cout << "No tienes edad suficiente para sacar el carnet: " << endl;
    }
    else 
    {
        cout << "Tienes edad suficiente para sacar el carnet: " << endl;
    }
    
}

/*
    Operadores C++

    Operadores
    - Asignación (=, +=, -=, *=, /=)
    - Aritméticos (+, -. *, /, %, a++, a--, ++a, --a)
    - Comparación (>, <, >=, <=, ==, !=)
    - Lógicos (! (negación), && (Y lógico), ||(O lógico))
    - Nivel bit

    Conversiones implicitas

    El tipo de dato de resultado sera el tipo de dato más amplio o preciso de los operadores involucrados
    en la operación.
    
    Condicional If

    [Falso: flase / 0] IF [Verdadero: True / 1]
*/