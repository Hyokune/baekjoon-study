#include <iostream>
#include <string>

int main()
{
    int a, b;
    std::cin >> a >> b;

	int secondNumber = b;

	int remainder;
	for (int i = 0; i < std::to_string(secondNumber).length(); i++)
	{
		std::cout << a * (b % 10) << std::endl;
		b = b / 10;
	}
	
	std::cout << a * secondNumber << std::endl;

    return 0;
}