#include <iostream>
#include <cmath>
int main()
{
	int wiek;
	int miesiace;
	std::cout << "Podaj sw�j wiek:";
	std::cin >> wiek;
	if (wiek >= 0)
	{
		miesiace = wiek * 12;
		std::cout << "Tw�j wiek w miesi�cach wynosi:" << miesiace << std::endl;
	}
	else
	{
		std::cout << "Podaj liczb� nieujemn�.";
	}
	return 0;
}