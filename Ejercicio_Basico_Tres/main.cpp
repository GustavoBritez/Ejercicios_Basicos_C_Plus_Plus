#include <iostream>

using namespace std;

int main()
{
    int numero;
    std::cout << "Ingrese un numero";
    std::cin >> numero;
    if (numero % 2 == 0)
    {
        std::cout << "El numero es par";
    }
    else
    {
        std::cout << "El numero es IMPAR";
    }
    return 0;
}
