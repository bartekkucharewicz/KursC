#include <iostream>
#include <cmath>
int main()
{
	int wiek;
	int miesiace;
	std::cout << "Podaj swój wiek:";
	std::cin >> wiek;
	if (wiek >= 0)
	{
		miesiace = wiek * 12;
		std::cout << "Twój wiek w miesi¹cach wynosi:" << miesiace << std::endl;
	}
	else
	{
		std::cout << "Podaj liczbê nieujemn¹.";
	}
	return 0;
}