#include <iostream>
#include <cmath>
int main()
{
	std::cout << "Podaj mas� cia�a w kilogramach (tylko w warto�ciach ca�kowitych): ";
	double mc;
	std::cin >> mc;
	std::cout << "Podaj wzorst w centymetrach (tylko w warto�ciach ca�kowitych): ";
	double w;
	std::cin >> w;
	double n = w * w;
	double bmi;
	bmi = (mc / n);
	double p = bmi * 10000;
    std::cout << "Twoje BMI wynosi: " << p;
	std::cout << std::endl;
	return 0;
}