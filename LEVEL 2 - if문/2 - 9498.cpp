#include <iostream>

int main()
{
    int a, b;
    std::cin >> a;

	if (a >= 90 && a <= 100)
	{
		std::cout << "A";
	}
	else if (a >= 80 && a < 90)
	{
		std::cout << "B";
	}
	else if (a >= 70 && a < 80)
	{
		std::cout << "C";
	}
	else if (a >= 60 && a < 70)
	{
		std::cout << "D";
	}
	else
	{
		std::cout << "F";
	}

    return 0;
}