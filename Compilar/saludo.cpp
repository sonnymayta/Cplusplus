#include <iostream> // Directiva
using namespace std; // Espacio de nombre

// Función principal "main"
int main() {
    cout << "Hola, mundo!" << endl; // función caracter out que muestra un mensaje en consola
    return 0;
}

/*
    COMPILAR
    Es pasar el código fuente a código maquina.
    * Lenguajes de programación de alto nivel son similares al lenguaje humano.
    * Lenguajes de bajo nivel son más aproximados al código maquina.
    Proceso:
    1 - Preprocesado: Ver todas las directivas para importar el código que hay en esas librerias.
    2 - Compilación: Generar las instrucciones de ensamblado según la máquina donde estas compilando el programa.
    3 - Ensamblado: Las instruciones de ensamblado se combierten a código máquina.
    4 - Enlazado: Se fusionan todos los archivos que se hayan generado en el proceso en un archivo ejecutable.
*/

/*
    Directiva: es una instrucción que nos permite añadir contenido que hay en bibliotecas externas a nuestro programa.
    Biblioteca: es un conjunto de clases y funciones.
    * Todas las sentencias y declaraciones en c++ deben terminar en ";"
    Espacio de nombre: sirven para evitar el conflicto con los nombres. Son espacios virtuales.
    Función: Sirven para agrupar bloques de código.    
*/