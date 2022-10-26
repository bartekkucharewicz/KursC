#include <iostream>
#include <cmath>
void czas(int);
int h;
int m;
int hm;

int main()
{
	std::cout << "Podaj liczbê godzin: ";
	std::cin >> h;
	if (h >= 0 && h < 24)
	{
		std::cout << "Podaj liczbê minut: ";
		std::cin >> m;
		if (m >= 0 && m < 60)
		{
			czas(hm);
		}
		else
		{
			std::cout << "Podaj poprawn¹ liczbê minut.";
		}
	}
	else
	{
		std::cout << "Podaj poprawn¹ liczbê godzin.";
	}
	return 0;
}
void czas(int hm)
{
	std::cout << "Czas: " << h << ":" << m;
}