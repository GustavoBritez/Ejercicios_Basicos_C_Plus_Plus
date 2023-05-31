#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int C,f;
    std::cout << "Ingrese una temperatura";
    std::cin >> C;

    f = (C * 9/5) +32;

    std::cout << "Farenheit = " << f << std::endl;
    return 0;
}
