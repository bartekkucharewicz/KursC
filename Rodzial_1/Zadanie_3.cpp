#include <iostream>
#include <cmath>
void entliczek();
void czerwony();
int main()
{
	entliczek();
	entliczek();
	czerwony();
	czerwony();
	return 0;
}

void entliczek()
{
	std::cout << "Entliczek pêtliczek." << std::endl;
}

void czerwony()
{
	std::cout << "Czerwony stoliczek." << std::endl;
}
