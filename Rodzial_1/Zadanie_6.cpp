#include <iostream>
#include <cmath>
int main()
{
	double ls;
	double ja;
	std::cout << "Podaj liczb� lat �wietlnych: ";
	std::cin >> ls;
	if (ls >= 0)
	{
		ja = ls * 63420;
		std::cout << ls << " lat �wietlnych = " << ja << " jednostek astronomicznych." << std::endl;
	}
	else
	{
		std::cout << "Podaj warto�� nieujemn�";
	}
	return 0;
}