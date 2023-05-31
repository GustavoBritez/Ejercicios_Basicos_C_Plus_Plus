#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <vector>

using namespace std;
//  Declaramos
void cargar(std::vector<int>&vec);
void ordenar(std::vector<int>&vec);
void mostrar_vector(std::vector<int>&vec);
int aleatorios();

int main()
{
    srand(time(NULL));
    std::cout << "\n Ordenar vector ! ! \n";
    std::vector<int> vector_uno;

    cargar(vector_uno);
    ordenar(vector_uno);
    mostrar_vector(vector_uno);


    return 0;
}

// Definimos
void cargar(std::vector<int>&vec)
{
    int indice,valor;
    std::cout << " Ingrese tamanio del vector ";
    cin >> indice;
    for(int i = 0 ; i < indice ; i++)
    {
        valor = aleatorios();
        vec.push_back(valor);
    }
}
int aleatorios()
{
    int n;
    n = rand()%100;
    return n;
}

void mostrar_vector(std::vector<int>&vec)
{
    int tamanio = vec.size();
    for(int i = 0 ; i < tamanio; i++)
    {
        cout << "\n Contenido del vector = " << vec[i];
    }
}

void ordenar(std::vector<int>& vec)
{
    for (int i = 0; i < vec.size() ; i++) {
        for (int j = i+1; j < vec.size() ; j++)
        {
            if (vec[i] > vec[j]) {
                int aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
}


