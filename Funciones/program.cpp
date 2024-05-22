#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double potencia_elevada(double base, double exponente); // funcion prototipo
void saludo();

void funcion_valor(int num);
void funcion_referencia(int &num);

void duplicarElementos(vector<int> &vec)
{
    for(int &valor : vec)
    {
        valor *= 2;
    }
}

// Tener el cuenta el flujo de ejecution con las funciones normales en C++

int main() 
{
    double base, exponente;
    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponenete: ";
    cin >> exponente;
    cout << "El resultado es: " << potencia_elevada(base, exponente) << endl;

    saludo();

    // Comprobando las funciones con parametros por valor y referencia

    int numero = 10;

    cout << "Valor original del numero: " << numero << endl;
    funcion_valor(numero);
    cout << "Valor despues de la función por valor: " << numero << endl;
    funcion_referencia(numero);
    cout << "Valor despues de la función por referencia: " << numero << endl;

    // Ejemplo

    vector<int> numeros = {1, 2, 3, 4, 5};
    cout << "Valores originales: ";
    for(int valor : numeros)
    {
        cout << valor << " ";
    }
    cout << endl;

    duplicarElementos(numeros);

    cout << "Valores despues de llamar a la función: ";
    for(int valor : numeros)
    {
        cout << valor << " ";
    }
    cout << endl;
}

// Funcion que devuleve un valor
double potencia_elevada(double base, double exponente)
{
    return pow(base, exponente);
}

// Funcion que no devuelve nada
void saludo() 
{
    cout << "Hola" << endl;
}

// Paso por valor
void funcion_valor(int num)
{
    num = 50;
}

// Paso por referencia
void funcion_referencia(int &num) 
{
    num = 50;
}

/*
    Funciones 
    - ¿Que es una función?: Una función es un bloque de código identificado con un nombre que 
    realiza un tarea especifica y puede tomar opcionalmente datos de entrada y devolver un resultado.
    - ¿Para qué sirve una función?: 
        - Reutilización de código
        - Modularidad
        - Abstracción (no necesitas saber como funciona solo saber que puden hacer con el)
        - Reducción de errores
        - Flexibilidad
    - Tipos de funciones
        - Definidas por el lenguaje. En la biblioteca Standard de C++
        - Definidas por el usuario. Funciones creadas por el programador

    Nota: Las declaración de las variables tiene un ambito de utilización. Los bloques donde fueron
    declaradas.

    - Prototipos: Un prototipo de función es una declaración previa de una función que informa
    al compilador de que se utilizará en el programa esa función, así como su tipo y número
    de parámetros y si la función devolvera o no un valor.

    - ¿Como decirle al compilador que vamos a usar una función?
        - En programas pequeños OK, pero en programas grandes en un problema.
        - Usando funciones prototipos:
            - Especifican al compilador que funciones se va utilizar en el programa así como de su
            parámetros y tipos y si la funcion devolvera valor o no.
            - Se colocan al comienzo del programa. (No es estrictamente necesario que así sea pero 
            por convención suele ser su lugar)
            - Admiten la posibilidad de crearlas en archivos externos. (extensiones .h / hpp)

    Pasar por valor: los parametros recibidos en una función solo reciben una copia el valor de
    los argumentos que se les pasan. Cualquier modificación que se haga al parametro dentro de la
    función no afectará al argumento original fuera de la función.
        - Operaciones matemáticas que no requieren el valor original
        - Funciones que necesitan garantizar que el valor original no sea modificado

    Pasar por referencia: permite a la función trabajar directamente con el argumento original.
        - Modificar en el lugar: por ejemplo, una función que resetea un valor
        - Evitar copias costosas: evitar copiar objetos grandes
        - Devolución de múltiples valores
        - Polimorfismo: cuando trabajas con clases base y derivadas y quieres hacer uso del 
        polimorfismo, es común pasar objetos por referencia (o por punteros) para segurarnos
        de que se llamen a las funciones miembro adecuadas (sobrescritas)

    NOTA
    
    Parametros: Son las variables que se declaran en la definición de una función y que especifican
    que tipo de dato recibirá la función.
        - Se definen en la declaración de la función
        - Actúan como variables locales dentro de la función
        - Especifican el tipo de datos que la función espera recibir

    Argumentos: Son los valores reales que se pasan a la función cuando se invocan.
        - Son los valores que se pasan a la función en la llamada
        - Se asignan a los parámetros correspondientes
        - Determinan el comportamiento de la función según los valores especificos con los que se llaman
*/