#include <iostream>
#include <vector>

using namespace std;

std::vector<std::vector<int>> sumar_Matriz(const std::vector<std::vector<int>>& matriz_uno, const std::vector<std::vector<int>>& matriz_dos)
{
    int F = matriz_uno.size();
    int C = matriz_uno[0].size();
    // Creamos una matriz nueva de nombre Resultado

    std::vector<std::vector<int>> Resultado(F, std::vector<int>(C));

    for(int i = 0 ; i < F ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            Resultado[i][j] = matriz_uno[i][j] + matriz_dos[i][j];
        }
    }

    return Resultado;

}

void imprimir_matriz(std::vector<std::vector<int>>& matriz_tres);
int main()
{
    std::cout << "--- Suma de matricez ---\n";
    std::vector<std::vector<int>> matriz_uno = {{1,2,3} , {4,5,6} , {7,8,9}};
    std::cout << "\n--- Matriz 1 ---\n"<<std::endl;
    imprimir_matriz(matriz_uno);
    std::vector<std::vector<int>>matriz_dos = {{10,11,12} , {13,14,15} , {16,17,18}};
    std::cout << "\n--- Matriz 2 ---\n"<<std::endl;
    imprimir_matriz(matriz_dos);

    std::vector<std::vector<int>>matriz_tres;
    matriz_tres = sumar_Matriz(matriz_uno,matriz_dos);
    std::cout << "\n--- Matriz 3 ---\n"<<std::endl;
    imprimir_matriz(matriz_tres);

    return 0;
}

void imprimir_matriz(std::vector<std::vector<int>> &matriz_tres)
{
    int F = matriz_tres.size();
    int C = matriz_tres.size();
    for(int i = 0 ; i < F ; i++)
    {
        for(int j = 0 ; j < C ; j++)
        {
            std::cout << matriz_tres[i][j] <<" ";
        }
        std::cout << endl;
    }
}


