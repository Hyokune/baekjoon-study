#include <iostream>

int main()
{
    int maxInput;
    std::cin >> maxInput;

	int firstNumber, secondNumber;
	for (int count = 0; count < maxInput; count++)
	{
		std::cin >> firstNumber >> secondNumber;
		std::cout << firstNumber + secondNumber << std::endl;
	}

    return 0;
}