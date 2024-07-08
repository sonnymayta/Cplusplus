#include <iostream>
using namespace std;

class Coche 
{
    // Atributos o propiedades
    string modelo;
    int cilindro;
    int potencia;
    string color;
    double precio;

    // Métodos o comportamientos
    void arrancar()
    {
        cout << "El coche esta arrancando" << endl;
    }

    void frenar()
    {
        cout << "El coche esta frenando" << endl;
    }
};

int main()
{
    Coche coche_a;
    Coche coche_b;
}

/*
    POO (Programación Orientada a Objetos)

    - Consiste en trasladar la naturaleza de los objectos de la vida real al código de programación.
    - Las caracteristicas de una objeto de la vida real tienen estados, un comportamiento, y
    unas propiedades.
    
    Ventajas:
    - Modularización
    - Muy reutilizable (herencia)
    - Si existe en alguna linea del código, el programa continuará con su funcionamiento.
    Tratamiento de excepciones
    - Encapsulamiento

    Terminos en POO
    - Clase
    - Objeto / instancia
    - Ejemplar de clase, instancia de clase, ejemplarizar una clase, instanciar una clase
    - Modularización
    - Encapsulamiento / encapsulación
    - Herencia
    - Polimorfismo

    Clase
    Una clase es una plantilla para crear objetos. Define un conjunto de atributos y métodos 
    que los objetos creados a partir de la clase tendran.

    Objeto
    Un objeto tiene propiedades (atributos) y comportamientos (¿Que es capaz de hacer?)
*/