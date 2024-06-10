#include <iostream>
using namespace std;

void cambiarValor(int *valor)
{
    (*valor) += 5;
}

int main()
{
    int numero = 5;
    cout << "Antes de llamar a la función: " << numero << endl;
    cambiarValor(&numero);
    cout << "Despues de llamar a la función: " << numero << endl;
}

/*
    Paso de Puntero por parámetro

    - Modificación directa: Permite modificar la variable original sin necesidad de retornar un
    valor y asignarlo y sin hacer copias.
    - Eficiencia en la transmision de datos granes: Al pasar solo la dirección de memoria de un
    objecto grande (como arryas o estructuras complejas), se ahorra tiempo y memoria porque no
    es necesario copiar todo el objecto.
    - Trabajo con arrays y cadenas: Los arrays se pasan por defecto como punteros a sus primeros
    elementos, lo que hace que trabajar con ellos mediante funciones sea natural y eficiente.
    - Gestión de memoria dinámica: Facilita el trabajo con memoria dinámica (asignada con new
    o malloc), permitiendo que las funciones modifiquen estrucutras de datos complejas o arrays
    dinámicos.

    Paso por referencia vs paso de punteros

    Por referencia
    - No trabajas directamente con direcciones de memoria en el código.
    - Acceso directo al original, sin necesidad de desreferenciar.
    - Sintaxis y el manejo son generalmente más sencillos y seguros.
    - No permite trabajo a bajo nivel y trabajo con la memoria.

    Punteros
    - Pasas dirección de memoria de variable.
    - Hay que desreferenciar el puntero para modificar el valor al que apunta.
    - Sintaxis más compleja.
    - Permite el trabajo a bajo nivel y el trabajo directo con la memoria.
*/