#include <iostream>
#include <map>
#include <string>
using namespace std;

auto suma(int a, int b)
{
     return a + b;
}

// Usamos auto para definir el tipo de dato que devolvera la funcion que hace uso del mapa
auto buscarFruta(const map<string, int>& frutas, const string& key)
{
    return frutas.find(key);
}

template <typename T, typename U>
auto suma(T a, U b)
{
    return a + b;
}

int main()
{
    int x = 5, y = 2;
    int resultado = suma(x, y);
    cout << "La suma " << x << " y " << y << " es: " << resultado << endl;

    // Ejemplo com mapa
    map<string, int> frutas = {
        {"manzana", 1},
        {"platano", 2},
        {"naranja", 3}
    };

    auto it = buscarFruta(frutas, "platano");

    if (it != frutas.end())
    {
        cout << "Encontrado en el valor: " << it->second << endl;
    }
    else
    {
        cout << "No encontrado" << endl;
    }

    // Ejemplo con genericos
    auto sum1 = suma(5, 2);
    cout << "Suma de enteros: " << sum1 << endl;

    auto sum2 = suma(5, 2.4);
    cout << "Suma de entero y flotante: " << sum2 << endl;

    auto sum3 = suma(5.2, 2.9);
    cout << "Suma de flotantes: " << sum3 << endl;
}



/*
    Auto return
    El "auto retrun" o deducción automática del tipo de retorno en funciones es una característica 
    introducida en el estandar C++14. Permite que el compilador deduzca automáticamente el tipo 
    de retorno de la función basándose en el tipo del valor que retorna.

    Utilidad
    Simplificar la escritura del código y para trabajar con tipos complicados o con plantillas.

    Casos de uso
    - Trabajo con tipos complejos
    - Trabajo con genéricos
    - Trabajo con tipos anidados profundos
    - Trabajo con funciones lambda
    - Trabajo con variables auto
    - Trabajo con tipos definidos por el programador
    - Trabajo con funciones de return condicionales
*/