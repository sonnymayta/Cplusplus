#include <iostream>
using namespace std;

// int factorial(int numero)
// {
//     int resultado = numero;
//     for (int i = 1; i < numero; i++)
//     {
//         resultado = resultado * i;
//     }
//     return resultado;    
// }

int factorial(int numero)
{
    if (numero == 0)
    {
        return 1;
    }
    else
    {
        // // cout << factorial(numero - 1) << endl;
        return numero * factorial(numero - 1);
    }
       
}

int main() 
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "El factorial de "<< numero << " es: " << factorial(numero) << endl;
}

/*
    Funciones recursivas
    Son un concepto fundamental en la programación. Son aquellas que se llaman a sí mismas durante
    su ejecución.

    Utilidad
    Resolver problemas que pueden ser desglosados en subproblemas más pequeños de la misma naturaleza.
    Ejemplos:
        - Recorrido de estructuras complejas con árboles o grafos.
        - Algoritmos de búsqueda
        - Algoritmos de ordenamiento
        - Algoritmos matemáticos

    Aspectos a tener en cuenta
    - Caso base: Cada función recursiva debe tener un caso base que detenga la recursión.
    - Paso recursivo: La función se llama a sí misma con un conjunto de parámetros que se 
    acercan al caso base.
    - Eficiencia: En ocasiones la recursión puede ser menos eficiente en términos de memoria y tiempo
    que las soluciones iterativas debido al uso de la pila de llamada y la posibilidad de realizar cálculos 
    redundantes.
    - Legibilidad: A menudo, las soluciones recursivas son más claras y más fáciles de entender que
    sus contrapartes iterativas, especialmente en problemas complejos.
*/