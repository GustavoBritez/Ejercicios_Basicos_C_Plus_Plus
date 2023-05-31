#include <iostream>

using namespace std;

//Tabla de multiplicar: Escribe un programa que solicite al usuario un número entero
//y muestre la tabla de multiplicar de ese número del 1 al 10.
int main()
{
    int numero;
    std::cout << "\n Ejercicio 4!";
    std::cout << "\n Ingrese un numero";
    std::cin >> numero;

    std::cout << "\n El numero entero es " << numero;

    std::cout << "\n La tabla de multiplicar es \n";
    for(int i = 0 ; i < 11 ; i++)
    {
        int r = i * 10;
        std::cout <<"\n "<< i << "x" << 10 << "="<< r;
    }
    std::cout << endl;
    return 0;
}

