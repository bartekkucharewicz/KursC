#include <iostream>
#include <cmath>
int dzien;
int miesiac;
int rok;
int suma;
int main()
{
	suma = 0;
	std::cout << "Podaj dzieñ urodzenia: ";
	std::cin >> dzien;
	if (dzien > 0 && dzien < 32)
	{
		while (dzien > 0)
		{
			suma += dzien % 10;
			dzien /= 10;
		}
		std::cout << "Podaj miesi¹c urodzenia: ";
		std::cin >> miesiac;
		if (miesiac > 0 && miesiac < 13)
		{
			while (miesiac > 0)
			{
				suma += miesiac % 10;
				miesiac /= 10;
			}
			std::cout << "Podaj rok urodzenia: ";
			std::cin >> rok;
			while (rok > 0)
			{
				suma += rok % 10;
				rok /= 10;
			}
			std::cout << "Suma cyfr twojej daty urodzenia to: " << suma;
		}
		else
		{
			std::cout << "Podaj poprawn¹ liczbê miesiêcy.";
		}
	}
	else
	{
		std::cout << "Podaj poprawn¹ liczbê dni.";
	}
	return 0;
}