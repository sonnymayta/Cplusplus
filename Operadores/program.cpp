#include <iostream>
using namespace std;

void toLowerCase(string &cadena) 
{
    for (int i = 0; i < cadena.length(); i++)
    {
        cadena[i] = tolower(cadena[i]);
    }
    
} 

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
    string examen_medico;

    cout << "Por favor, introduce tu edad: ";
    cin >> edad;

    cout << "¿Has pasado el examen medico?: ";
    cin >> examen_medico;

    toLowerCase(examen_medico);

    if (edad >= 18 && examen_medico == "si")
    {
        cout << "Cumples con los requisitos: " << endl;
    }
    else 
    {
        cout << "No cumples con los requisitos: " << endl;
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

/*
    Convenciones en C++

    En C++, no existe una regla estricta sobre si se debe utilizar camel case o underscore para nombrar
    variables, funciones y clases. Depende en gran medida del estilo de codificación que prefieras y las 
    convenciones adoptadas por tu equipo o proyecto. Ambos estilos son ampliamente utilizados en la comunidad de C++.

    Sin embargo, algunas guías de estilo sugiere ciertas convenciones para facilitar la lectura y el mantenimiento
    del código.

    Guía de estilo de Google para C++
    - Nombres de clases y estucturas en CamelCase con la primera letra en mayúsculas, como MiClase o MiEstructura.
    - Nombres de funciones y métodos en CamelCase con la primera letra en minusculas, como miFuncion() o miMetodo().
    - Nombres de variables en snakecase con todas las letras en minusculas y palabras separadas por underscores, como mi_variable.

    Guía de estilo de C++ Core Guidelines:
    - Nombres de clases y estructuras en CamelCase con la primera letra en mayúsculas, como MiClase o MiEstructura.
    - Nombres de funciones y métodos en snake_case, como mi_funcion() o mi_metodo().
    - Nombres de variables en snake_case, como mi_variable.
*/