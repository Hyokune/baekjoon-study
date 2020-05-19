#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	
    int numberCount, maxValue;
	std::cin >> numberCount >> maxValue;
	
	std::vector<int> acceptedNumbers;

	int inputNumber;
	for (int count = 1; count <= numberCount; count++)
	{
		std::cin >> inputNumber;
		if (inputNumber < maxValue)
		{
			acceptedNumbers.push_back(inputNumber);
		}
	}
	
	for (int index = 0; index < acceptedNumbers.size(); index++)
	{
		std::cout << acceptedNumbers[index];
		
		if (index != acceptedNumbers.size() - 1)
		{
			std::cout << " ";
		}
		else
		{
			std::cout << "\n";
		}
	}
	
    return 0;
}