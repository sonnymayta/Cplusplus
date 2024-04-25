#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int control = 3;
    vector <int> numeros;
    do
    {
        cout << "Vamos a modificar nuestro vector: \n1 - Para modificar el vector.\n2 - Para imprimir el vector.\n0 - Para salir.\n" << endl;
        cout << "Ingrese un valor: ";
        cin >> control;

        if (control == 1)
        {
            cout << "\nModificación del vector" << endl;
            int condicion = 0;
            do
            {
                cout << "Ingrese un valor para su vectore entre 1 y 100. Ingrese 0 para salir: ";
                cin >> condicion;
                if (condicion != 0)
                {
                    numeros.push_back(condicion);
                }
                
            } while (condicion != 0);
            cout << "" << endl;
        }

        if (control == 2)
        {
            cout << "Impresión del vector" << endl;
            for (int i = 0; i < numeros.size(); i++)
            {
                cout << "[" << numeros.at(i) << "] ";
            }
            cout << "\n" << endl;
        }
        
        if (control == 0)
        {
            cout << "El programa ha finalizado";
        }

    } while (control != 0);
    
    return 0;
}
