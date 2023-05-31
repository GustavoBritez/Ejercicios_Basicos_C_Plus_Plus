#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>
#define TAM 5
using namespace std;

int aleatorio();
void cargar(std::vector<int>& vec);
///void maximo(std::vector<int>& vec);
///void minimo(std::vector<int>& vec);
void mostrar(std::vector<int>& vec);
void ordenar(std::vector<int>& vec);
void found(std::vector<int>& vec);


int main()
{
    srand(time(NULL));
    cout << "\n Ejercicio numero 12" << endl;

    std::vector<int> vector_uno;

    cargar(vector_uno);
    mostrar(vector_uno);
    found(vector_uno);
    return 0;
}

int aleatorio()
{
    int n;
    n = rand() % 100;
    return n;
}

void cargar(std::vector<int>& vec)
{

   for (int i = 0; i < sizeof(vec) ; i++) {
        int n = aleatorio();
        vec.push_back(n);
    }
}


void mostrar(std::vector<int>& vec)
{
    for(int i = 0 ; i < sizeof(vec) ; i++)
    {
        std::cout << "\n Num [ " << vec[i] <<"]" << "posicion = " <<  i << endl;
    }
}

void ordenar(std::vector<int>& vec)
{
    std::sort(vec.begin(), vec.end());
}

void found(std::vector<int>& vec)
{
    std::cout << "Ingrese el numero que quiera buscar" << endl;
    int n;
    std::cin >> n;

    for(int i = 0 ; i < sizeof(vec) ; i++)
    {
        if (vec[i] == n)
        {
            int pos = i;
            std::cout << "\n Posicion  = " << pos << endl;
            std::cout << "\n Contenido = " << vec[i] << endl;
        }
    }
}
