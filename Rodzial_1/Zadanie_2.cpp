#include <iostream>
#include <cmath>
int main()
{
    double milamorska;
    double metry;
    std::cout << "Podaj wartoœæ w milach morskich:" << std::endl;
    std::cin >> milamorska;
    if (milamorska >= 0)
    {
        metry = milamorska * 1.852;
        std::cout << metry;
    }
    else
    {
        std::cout << "Podaj wartoœæ nieujemn¹.";
    }
    return 0;
}