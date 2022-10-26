#include <iostream>
#include <cmath>
int main()
{
	std::cout << "Podaj masê cia³a w kilogramach (tylko w wartoœciach ca³kowitych): ";
	double mc;
	std::cin >> mc;
	std::cout << "Podaj wzorst w centymetrach (tylko w wartoœciach ca³kowitych): ";
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