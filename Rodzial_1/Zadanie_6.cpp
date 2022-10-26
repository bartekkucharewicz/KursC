#include <iostream>
#include <cmath>
int main()
{
	double ls;
	double ja;
	std::cout << "Podaj liczbê lat œwietlnych: ";
	std::cin >> ls;
	if (ls >= 0)
	{
		ja = ls * 63420;
		std::cout << ls << " lat œwietlnych = " << ja << " jednostek astronomicznych." << std::endl;
	}
	else
	{
		std::cout << "Podaj wartoœæ nieujemn¹";
	}
	return 0;
}