#include <iostream>
using namespace std;

void fibonacci(int numero) 
{
    int a = 0, b = 1, n;
    for (int i = 0; i < numero; i++)
    {
        n = a;
        a = a + b;
        b = n;
        cout << n << ", ";
    }       
}

int fibonacciRecursivo(int numero) 
{
    if (numero == 0)
    {
        return 0;
    }
    else if (numero == 1)
    {
        return 1;
    }
    else
    {
        return fibonacciRecursivo(numero - 1) + fibonacciRecursivo(numero - 2);
    }    
}

int main()
{
    // fibonacci(18);

    cout << fibonacciRecursivo(6) << endl;
}