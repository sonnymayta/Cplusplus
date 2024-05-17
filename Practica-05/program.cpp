#include <iostream>
using namespace std;

int aleatorio() 
{
    return rand() % 100;
}

int main()
{
    bool control = true;
    char opcion;
    int numero, intento;
    while (control)
    {
        cout << "\nBIENVENIDO AL JUEGO DE LA ADIVINANZA" << endl;
        cout << "S - Para jugar\nN - Para salir" << endl;
        cout << "Ingrese la letra de la opción requerida: ";
        cin >> opcion;
        switch (opcion)
        {
            // Se debe utilizar llaves en los case cuando se declare una variables en el interior de los cases
            case 's':
            case 'S':
            {
                int numero_aleatorio = aleatorio();
                intento = 1;
                cout << "Se ha generado un numero aleatorio entre 1 y 100. Tiene 5 intentos para adivinarlo." << endl;
                do
                {
                    cout << "Intento Nro. " << intento << ", ingrese un numero: ";
                    cin >> numero;
                    intento++;

                    if (numero > numero_aleatorio)
                    {
                        cout << "El numero aleatorio es menor." << endl;
                    }
                    else if (numero < numero_aleatorio)
                    {
                        cout << "El numero aleatorio es mayor." << endl;
                    }
                    else
                    {
                        cout << "Has adivinado el numero aleatorio." << endl;
                    }                
                    
                } while (intento < 6 && numero != numero_aleatorio);

                if (intento == 6 && numero != numero_aleatorio)
                {
                    cout << "Has excedido el numero maximo de intentos. Mejor suerte para la proxima." << endl;
                }            
            }
            break;
            
            default:            
            cout << "Saliendo del programa" << endl;
            control = false;
            break;
        }
    }    
}