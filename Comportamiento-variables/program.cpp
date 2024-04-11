#include <iostream>
using namespace std;
int main() 
{
    string nombre = "Robert";
    int edad {21};
    double salaraio;
    cout << "Introduce el salario del empleado: ";

    // Introduce un valor por consola
    cin >> salaraio;

    cout << "Introduce la edad del empleado: ";
    cin >> edad;

    cout << "------------------------------------------------" << endl;
    cout << "Datos del empleado" << endl;
    cout << "Nombre: " << nombre << ", Edad: " << edad << ", Salario: " << salaraio << endl;
}