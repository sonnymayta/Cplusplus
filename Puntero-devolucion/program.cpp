#include <iostream>
using namespace std;

class Coche 
{
    // Propiedad modelo de coche
    private:
    string modelo;

    // Constructor que inicia el modelo del coche
    public:
    Coche(string mod):modelo(mod)
    {

    }

    // Método para obtener el modelo del coche
    string getModelo() const 
    {
        return modelo;
    }
};

// Función que crea un nuevo coche y devuelve un puntero a él
Coche* crearCoche(string modelo)
{
    Coche* nuevoCoche = new Coche(modelo);
    return nuevoCoche;
}

int main() 
{
    // Crear coche llamando a la función crearCoche
    Coche* CocheA = crearCoche("Toyota");

    // Accede al modelo del coche a travez del puntero y muestra el modelo
    cout << "Modelo del coche: " << CocheA->getModelo() << endl;

    // Es importante liberar la memoria una vez que hemos terminado de usarla
    delete CocheA;
}

/*
    Devolución de punteros
    Casos de uso

    - Acceso a estructuras de datos o clases: Devolviendo un puntero a una instancia, permites
    que otras partes de tu programa interactúen con ella.
    - Eficiencia en la gestión de memoria: Al devolver un puntero, evitas la copia innecesaria 
    de datos, ya que simplemente estás pasando la dirección de memoria donde reside el objeto o 
    los datos.
    Control sobre la vida útil de los objetos: Cuando devuelves un puntero a un objecto creado
    dinámicamente (por ejemplo, uando new), puedes controlar cuánto tiempo existe ese objecto.
    El objeto puede seguir incluso después de que la función que lo creó haya terminado su 
    ejecución.
    - Funciones que devulven múltiples valores: Devolver un puntero a una estructurao arreglo 
    puede ser una forma más eficiente de devolver múltiples valores, especialmente si el tamaño
    del resultado no se conoce de antemano.
    - Interfaz de funciones polimórficas: Permite que la función devulelva objetos de cualquiera 
    de las clases derivadas, manteniendo la flexibilidad y permitiendo al código que llama 
    tratar esos objectos de manera uniforme a través de punteros a la clase base.
*/