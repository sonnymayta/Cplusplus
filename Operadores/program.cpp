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
    return 0;
}

/*
    Operadores C++

    Operadores
    - Asignación (=, +=, -=, *=, /=)
    - Aritméticos (+, -. *, /, %, a++, a--, ++a, --a)
    - Comparación
    - Lógicos
    - Nivel bit

*/