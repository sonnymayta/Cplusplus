#include <iostream>
using namespace std;

int main()
{
    int numero;
    bool primo = true;

    cout << "Introduce un numero positivo: ";
    cin >> numero;

    for (int i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            primo = false;
            break;
        }        
    }

    if (primo)
    {
        cout << numero << " el numero es primo." << endl;
    }
    else 
    {
        cout << numero << " el numero no es primo." << endl;
    }    
    
    return 0;
}
