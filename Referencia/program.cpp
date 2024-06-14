#include <iostream>
using namespace std;

void intercambio(int &a, int &b)
{
    int temporal = a;
    a = b;
    b = temporal;
}

void incrementarSiNoNulo(int *valor)
{
    if (valor != nullptr) ++(*valor);
}

int main()
{
    int var1 = 10;
    int var2 = 20;

    cout << "Antes del intercambio: var1 = " << var1 << " y var2 = " << var2 << endl;

    intercambio(var1, var2);

    cout << "Despues del intercambio: var1 = " << var1 << " y var2 = " << var2 << endl;

    int *a = nullptr;

    incrementarSiNoNulo(a);

    cout << "Valor de a: " << a << endl;
}

/*
    Referencias

    Son un alias para una vaiable. Se trata fundamentalmente de un nombre alternativo para una
    variable existente. Una vez establecida, una referencia se comporta exactamente igual 
    que la varialbe a la que hace referencia, y cualquier operación realizada en la referencia
    afecta directamente a la variable original.

    ¿Para que sirven?: 
    - Mejora de rendimiento.
    - Modificación de objetos en funciones.
    - Sintaxis más simple y segura que con punteros.
    - Uso de sobrecarga de operadores y funciones.
    - Devolución de objetos por funciones.
    - Claridad en el código.

    Caracteristicas:
    - Inicialización obligatoria: Un referencia debe ser inicializada al momento de su declaración
    y no puede existir sin estar asociada a alguna variable.
    - Inmutabilidad: Despues de ser iniciada, una referencia no puede ser reasignada para 
    referirse a una diferente variable o objeto.
    - Sintaxis: Para declarar una referencia, se usa el operador & después del tipo de 
    dato. Por ejemplo, int& ref = original.
    - Acceso: Al utilizar una referencia, se accede al valor inicial de la variable a la que hace
    referencia directamente, utilizando la misma sintaxis que se emplearia con la variable
    original.

    Referencias vs Punteros

    Punteros
    - Inicialización: Pueden ser inicializados en nullptr (lo que significa que no apuntan a
    ningun objeto) y pueden cambiar a que objeto apuntan despues de su inicialización.
    - Sintaxis: Se accede a los miembros de un objeto a travéz de un puntero usando el 
    operador ->. Por ejemplo: ptr -> func().
    - Seguridad: Puden ser peligrosos de usar debido a problemas como punteros colgantes (que 
    apuntan a memoria ya liberada) punteros no inicializados y aritmetica de punteros que 
    pueden llevar a errores dificiles de rastrear.

    Referencias
    - Inicialización: Deben ser inicializadas al ser declaradas y no pueden cambiar a qué objeto 
    se refieren después de su inizialización. Una vez que una referencia es asignada a un 
    objeto, siempre referirá a ese mismo objeto.
    - Sintaxis: Se utilizan como si fueran el objeto mismo, sin necesidad de un operador especial.
    Por ejemplo: ref.func().
    - Seguriada: Son generalmente más seguras porque garantizan que siempre referenciarán a un
    objeto válido.

    Casos de uso

    Punteros
    - Gestión de memoria dinámica.
    - Implementación de estructuras de datos complejas.
    - APIs de bajo nivel.
    - Polimorfismo y manejo de la herencia.
    - Flexibilidad operacional.

    Referencias
    - Sobrecarga de operadores.
    - Paso de parámetros por referencia.
    - Devolución de objetos por funciones.
    - Implementación de patrones de diseño.
    - Encadenamiento de funciones.
*/