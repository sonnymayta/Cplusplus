#include <iostream>
using namespace std;

int main() 
{
    const double precioMedia = 35.5;
    const double precioAlta = 55.3;
    int metrosCalidadMedia = 0;
    int metrosCalidadAlta = 0;
    const double iva = 21;
    const int validez = 30;

    cout << "¿Cuántos metros quieres instalar con calidad media?: ";
    cin >> metrosCalidadMedia;

    cout << "Cuántos metros quieres instalar con calidad alta?: ";
    cin >> metrosCalidadAlta;

    double costeMedia = (metrosCalidadMedia * precioMedia);
    double costeAlta = (metrosCalidadAlta * precioAlta);
    double totalSinIva = costeMedia + costeAlta;
    double mediaIva = costeMedia * (iva / 100);
    double altaIva = costeAlta * (iva / 100);
    double totalIva = mediaIva + altaIva;
    double costeMediaIva = costeMedia + mediaIva;
    double costeAltaIva = costeAlta + altaIva;
    double total = costeMediaIva + costeAltaIva;

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "El coste de la calidad media es de " << costeMedia << " Bs. sin IVA, con un IVA de " << mediaIva << " Bs." << endl;
    cout << "El coste de la caldiad alta es de " << costeAlta << " Bs. sin IVA, con un Iva de " << altaIva << " Bs." << endl;
    cout << "El coste total sin el impuesto es de " << totalSinIva << " Bs. y el impuesto total es de " << totalIva << endl;
    cout << "La suma total con impuesto es de " << total << " Bs. Valido por " << validez << " dias." << endl;
}