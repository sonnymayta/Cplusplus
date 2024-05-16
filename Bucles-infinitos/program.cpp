#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

double leerTemperatura()
{
    return 20.0 +  (rand() % 20);
}

void detenerHilo(int segundos)
{
    this_thread::sleep_for(chrono::seconds(segundos));
}

int main()
{
    const double limiteTemperatura = 35.0;
    while (true)
    {
        double temperaturaActual = leerTemperatura();
        cout << "Temperatura actual: " << temperaturaActual << " °C" << endl;
        if (temperaturaActual > limiteTemperatura)
        {
            cout << "¡¡ALERTA!! Temperatura elevada detectada: " << temperaturaActual << " °C" <<endl;
        }
        detenerHilo(3);
    }
    
}    


/*
    Bucles infinitos
    - En la mayoría de las situaciones, un bucle infinito se considera un error o un defecto
    en la programación, ya que puede causar que un programa se quede atascado sin hacer progreso
    o consuma recursos innecesariamente.
    - Sin embargo, hay escenarios especificos en los que un bucle infinito es intencional y puede
    ser útil:
        - Aplicaciones que deban ejecutarse continuamente
        - Programas interactivos
        - Prototipado y depuración
        - Trabajos de larga duración
        - Programas con sistemas de control manual
        - Patrones de diseño
*/