#include <iostream>
using namespace std;

int main()
{
    int tu_nota, distancia_centro, ingreso_familiar;

    cout << "SISTEMA DE BECAS" << endl;
    cout << "Por favor introduzca su calificación: ";
    cin >> tu_nota;
    cout << "Por favor introduzca la distancia de su domicilio con el centro: ";
    cin >> distancia_centro;
    cout << "Por favor introduzca los ingresos familiares: ";
    cin >> ingreso_familiar;

    if (tu_nota > 8 || (distancia_centro > 20 && ingreso_familiar < 20000))
    {
        cout << "Beca disponible" << endl;
    }
    else
    {
        cout << "Beca no disponible" << endl;
    }    
}