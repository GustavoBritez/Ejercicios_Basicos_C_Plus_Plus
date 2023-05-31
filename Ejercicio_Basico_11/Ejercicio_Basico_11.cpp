#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
using namespace std;

int pedir_num();
int alea();
void cargar_vector(std::vector<int>& vec, int n);
void mostrar_vector(std::vector<int>& vec);
void ordenar(std::vector<int>& vec);
void maximo(std::vector<int>& vec);
void minimo(std::vector<int>& vec);

int main()
{
    srand(time(NULL));
    int n = pedir_num();
    std::vector<int> vector_uno;
    cout << "\n Ejercicio basico de vectores\n " << endl;
    cargar_vector(vector_uno, n);
    ordenar(vector_uno);
    mostrar_vector(vector_uno);
    maximo(vector_uno);
    minimo(vector_uno);

    return 0;
}

int pedir_num()
{
    int n;

    std::cout << "\n Ingrese el tamanio del vector \n" << endl;
    cin >> n;
    return n;
}

void cargar_vector(std::vector<int>& vec, int n)
{

    std::cout << "\n Vector cargado\n" << endl;
    for (int i = 0 ; i < n ; i++)
    {
        int n = alea();
        vec.push_back(n);
    }
}

void mostrar_vector(std::vector<int>& vec)
{
    for(int i = 0 ; i < vec.size() ; i++)
    {
        std::cout << vec[i];
        std::cout << " ";
    }
}
int alea()
{
    int n;
    n = rand () % 100;
    return n;
}

void ordenar(std::vector<int>& vec)
{
    for(int i = 0 ; i < vec.size() ; i++)
    {
        for(int j = i+1 ; j < vec.size() ; j++)
        {
            if (vec[i] > vec[j])
            {
                int aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
}

void maximo(std::vector<int>& vec) {
    auto max_it = std::max_element(vec.begin(), vec.end());
    int max_value = *max_it;
    std::cout << "\n El máximo es = " << max_value << std::endl;
}

void minimo(std::vector<int>& vec)
{
    auto min_it = std::min_element(vec.begin() , vec.end());
    int min_value = *min_it;
    std::cout << "\n El  minimo es = "<< min_value << endl;

}
