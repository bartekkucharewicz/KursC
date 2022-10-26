#include <iostream>
#include <cmath>
double farenhajt(double);
int main()
{
	double c;
	std::cout << "Podaj tempreaturê w Celsjuszach:" << std::endl;
	std::cin >> c;
	double f = farenhajt(c);
	std::cout << c << " stopni Celsjusza = ";
	std::cout << f << " stopni Farenhajta" << std::endl;
	return 0;
 }
double farenhajt(double c)
{
	return 1.8 * c + 32;
}