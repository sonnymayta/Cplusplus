#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // uso del break
    vector<string> nombres = {"Maria", "Carlos", "Pedro", "Ana", "Juan", "Luisa"};
    string persona_buscada = "Ana";
    for (int i = 0; i < nombres.size(); i++)
    {
        if(nombres[i] == "Ana")
        {
            cout << "Persona encontrada. Nombre: " << persona_buscada << " encontrada en la posición: " << i << endl;
            break;
        }
    }    
    cout << "Hemos salido del bucle" << endl;
    
    // uso del continue
    vector<double> precios = {50, 120, 75, 300, 90, 200};
    vector<double> descuentos;
    for (int i = 0; i < precios.size(); i++)
    {
        if(precios[i] < 100) 
        {
            descuentos.push_back(precios[i]);
            continue;
        }

        double cantidad_descuento = precios[i];
        cantidad_descuento -= cantidad_descuento * 0.15;
        descuentos.push_back(cantidad_descuento);
    }

    for (auto d : descuentos) 
    {
        cout << d << endl;
    }
    
}

/*
    Control de flujo

    Break: se utiliza para terminar el bucle inmediatamente, sin importar la condición de bucle.
    - Una vez que se ejecuta la instrucción break, el flujo de ejecución del programa se traslada
    a la siguiente declaración despues del bucle.
    - Es particularmente útil cuando se desea salir de un bucle debido a una condición específica
    de la condición de bucle.

    Continue: se utiliza para saltarse el resto de la iteración actual y pasar a la siguiente
    iteración del bucle.
    - Lo que hace es 'continuar' con la siguiente iteración del bucle.
*/