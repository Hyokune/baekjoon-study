#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	
    int maxCount;
	std::cin >> maxCount;

	int firstNumber, secondNumber;
	for (int count = 1; count <= maxCount; count++)
	{
		std::cin >> firstNumber >> secondNumber;
		std::cout << "Case #" << count << ": ";
		std::cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << "\n";
	}

    return 0;
}