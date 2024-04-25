#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declarando e inicializando vectores

    // vector <int> records(5);
    vector <int> records {1, 2, 3, 4, 5};

    // vector <char> letras (10);
    vector <char> letras {'a', 'b', 'c'};

    vector <double> salarioBase (350, 2200.50); // Vector asignandole un valor por defecto

    for (int i = 0; i < 5; i++)
    {
        cout << records[i] << endl;
    }

    for (int  i = 0; i < 3; i++)
    {
        cout << letras[i] << endl;
    }
    
    int i = 0;
    while (i < salarioBase.size())
    {
        cout << (i + 1) << " - " << salarioBase[i] << endl;
        i++;
    }   

    // Acceder a una posición del vector con el método "at"
    cout << records.at(3) << endl;
    records.at(3) = 7;
    cout << records.at(3) << endl;

    // Incerta un elemento en la ultima posición del vector usando "push_back"
    records.push_back(22);
   
    for (int i = 0; i < records.size(); i++)
    {
        cout << records.at(i) << endl;
    }   

}

/*
    VECTOR

    - Vector es una clase de la librería de C++. Esta clase crea estructuras.
    contenedoras para almacenar datos secuenciales.
    - Los vectores pueden crecer o decrecer en tamaño de forma dinámica.
    - Tienen un sintaxis muy similar a los Arrays.
    - Proporciona múltiples métodos para chequear limites, tamaño comprobar si existe un elemento, etc.
    - Almacenan los valores en posiciones contiguas de la memoria y también en posiciones separadas
    accesibles a través de punteros.

    Características
    - Tamaño dinámico.
    - Los elementos almacenados en su interior son del mismo tipo.
    - Se accede a los elementos almacenados con su posición o índice.
    - El primer elemento tiene índice 0.
    - El último elemento tiene índice n+1.
*/