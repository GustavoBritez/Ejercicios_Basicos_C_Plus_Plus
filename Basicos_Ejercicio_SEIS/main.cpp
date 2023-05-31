#include <iostream>
#include <vector>

//using namespace std;

int main()
{
    std::vector<int> num;
    std::cout << "\n Cargamos y mostramos un vector\n";
    for (int i = 1 ; i < 11 ; i++)
    {
        num.push_back(i);
    }
    std::cout << "\n El vector se muestra \n";
    for(int j = 0 ; j < num.size(); j++)
    {

        std::cout << num[j] << "\n";
    }
    std::cout << std::endl;

    return 0;
}
