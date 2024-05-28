#include <iostream>
using namespace std;

inline int suma(int a, int b)
{
    return a + b;
}

int main()
{
    cout << "La suma es: " << suma(4, 2) << endl;
}

/*
    Funciones inline
    - Funciones cuyo cuerpo se sitúa en el mismo punto del código que la llamada.
    - Funciona cuando se declara una función como inline, el compilador intenta expandir el código
    de la función en el lugar donde se la llama, en lugar de hacer una llamada de función tradicional.
    - La principal utilidad de las funciones inline es reducir el consumo de recursos de la llamada a
    la función, lo cual es especialmente útil para funciones pequeñas que se utilizan a menudo. Al estar el cuerpo
    de la función en el mismo punto de la llamada, se elimina la sobrecarga asociada con las llamadas a 
    funciones (como el paso de argumentos y el valor de retorno de control)

    En el ejemplo cuando se compila el código el compilador decide si es conveniente remplazar el
    contenido de la funcion suma, osea a + b en la llamada a la funcion que se encuetra en el main.
    Una posible interpretación del condio compilado puede ser:
    cout << "La suma es: " << a + b << endl;
    Donde se muestra que precindimos de la función y en su lugar se coloca el contenido de esta.
    Ahorrando recursos al momento de ejecutar el programa.
*/