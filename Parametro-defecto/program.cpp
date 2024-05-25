#include <iostream>
using namespace std;

// Parametro por defecto
void mostrarMensaje(string msg, int veces = 1)
{
    for (int i = 0; i < veces; i++) 
    {
        cout << msg << endl;
    }
}

// Ejemplo
void crearVentana(int ancho = 800, int alto = 600, string titulo = "Mi ventana", bool completa = false) 
{
    cout << "Creando ventana: " << titulo << "\n"
    << "Ancho: " << ancho << "\n"
    << "Alto: " << alto << "\n"
    << "Pantalla completa: " << (completa ? "Si" : "No") << "\n" <<endl;
}

int main()
{
    mostrarMensaje("Hola mundo!", 5);

    crearVentana();

    crearVentana(500, 600, "Ventana de cliente");

    crearVentana(900, 750, "Ventana de menú", true);
}

/*
    Parámetros por defecto

    Los parámetros por defecto deberan estar siempre al final.    
*/