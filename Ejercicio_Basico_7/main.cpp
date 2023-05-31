#include <iostream>

using namespace std;

int calcular_factorial(int n);

int main()
{
    std::cout << "Factorial de un numero\n"<< "Ingrese un numero\n";
    int numero;
    std::cin >> numero;

    int r = calcular_factorial(numero);

    std::cout << "El factorial es = "<< r;
}


int calcular_factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * calcular_factorial(n-1);
    }
}
