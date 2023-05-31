#include <iostream>
#include <string.h>

using namespace std;

std::string Cifrado_Cesar(const std::string& x, int clave)
{
    std::string mensaje_cifrado = "";
    // Recorremos la cadena de carasteres
    for(char caracter : x)
    {
        if (isalpha(caracter))
        {
            // Devuelve el valor ASCII
            int valor_asi = static_cast<int>(caracter);
            // Determinamos si es Mayuscula o Minuscula

            bool esMayuscula = isupper(caracter);

            valor_asi = (valor_asi - (esMayuscula ? 'A' : 'a') + clave) % 26;
            // Asegurarse de que el valorAscii esté en el rango correcto
            if (valor_asi < 0)
            {
                valor_asi += 26;
            }

            // Convertir el valor ASCII de vuelta a carácter
            caracter = static_cast<char>(valor_asi + (esMayuscula ? 'A' : 'a'));
        }

        // Agregar el carácter al mensaje cifrado
        mensaje_cifrado += caracter;
    }

    return mensaje_cifrado;
}
int main()
{
    int Clave = 3;
    std::cout << "\nCifrado Cesar\n" << endl;
    std::string mensaje = "\nHola, este es un mensaje de prueba\n";

    std::string mensaje_cifrado = Cifrado_Cesar(mensaje,Clave);

    std::cout << "Mensaje cifrado = " << mensaje_cifrado << endl;


    return 0;
}
