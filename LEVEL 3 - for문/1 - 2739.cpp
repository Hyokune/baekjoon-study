#include <iostream>

int main()
{
    int number;
    std::cin >> number;

	for (int multiplicand = 1; multiplicand < 10; multiplicand++)
	{
		std::cout << number << " * " << multiplicand << " = " << number * multiplicand << std::endl;
	}

    return 0;
}